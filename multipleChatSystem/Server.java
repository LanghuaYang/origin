package multipleChatSystem;

import java.io.BufferedReader;  
import java.io.IOException;  
import java.io.InputStreamReader;  
import java.io.PrintWriter;  
import java.net.BindException;  
import java.net.ServerSocket;  
import java.net.Socket;  
import java.util.ArrayList;  
import java.util.StringTokenizer;  
import java.awt.event.ActionEvent;  
import java.awt.event.ActionListener;  
import java.awt.event.WindowAdapter;  
import java.awt.event.WindowEvent;  
  
import javax.swing.JOptionPane;  
  
public class Server {  
	
    private ServerSocket serverSocket;  
    private ServerThread serverThread;  
    private ArrayList<ClientThread> clients;  
  
    private boolean isStart = false;  
	
	UserIntrerface Userinterface = new UserIntrerface();
  
    //main
    public static void main(String[] args) {  
        new Server();  
    }  
    
    //send
    public void send() {  
        if (clients.size() == 0) {  
            return;  
        }  
        String message = Userinterface.textField.getText().trim();  
        if (message == null || message.equals("")) {  
            return;  
        }  
        sendServerMessage(message);
        Userinterface.textArea.append("Server：" + Userinterface.textField.getText() + "\r\n");  
        Userinterface.textField.setText(null);  
    }  

    public Server() {  
    	
    	Userinterface.UI_init();
        //close window
    	Userinterface.frame.addWindowListener(new WindowAdapter() {  
            public void windowClosing(WindowEvent e) {  
                if (isStart) {  
                    closeServer();
                }  
                System.exit(0);
            }  
        });  
  
        //enter send
        Userinterface.textField.addActionListener(new ActionListener() {  
            public void actionPerformed(ActionEvent e) {  
                send();  
            }  
        });  
  
        //click send
        Userinterface.btn_send.addActionListener(new ActionListener() {  
            public void actionPerformed(ActionEvent arg0) {  
                send();  
            }  
        });  
  
        //start server
        { 
	        int port;  
	        try {  
	            serverStart(30, 6666);  //limitation of the participants is 30
	            Userinterface.textArea.append("server start!,port：" + 6666  
	                    + "\r\n");  
	        } catch (Exception exc) {  
	            JOptionPane.showMessageDialog(Userinterface.frame, exc.getMessage(),  
	                    "Error", JOptionPane.ERROR_MESSAGE);  
	        }  
        }

    }  
  
    //start server
    public void serverStart(int max, int port) throws java.net.BindException {  
        try {  
            clients = new ArrayList<ClientThread>();  
            serverSocket = new ServerSocket(port);  
            serverThread = new ServerThread(serverSocket, max);  
            serverThread.start();  
            isStart = true;  
        } catch (BindException e) {  
            isStart = false;  
            throw new BindException("Port already been used！");  
        } catch (Exception e1) {  
            e1.printStackTrace();  
            isStart = false;  
            throw new BindException("server start failed！");  
        }  
    }  
  
    //close server
    @SuppressWarnings("deprecation")  
    public void closeServer() {  
        try {  
            if (serverThread != null)  
                serverThread.stop();
  
            for (int i = clients.size() - 1; i >= 0; i--) {   
                clients.get(i).getWriter().println("CLOSE");  
                clients.get(i).getWriter().flush();  
                // free 
                clients.get(i).stop();
                clients.get(i).reader.close();  
                clients.get(i).writer.close();  
                clients.get(i).socket.close();  
                clients.remove(i);  
            }  
            if (serverSocket != null) {  
                serverSocket.close();
            }  
            Userinterface.listModel.removeAllElements();
            isStart = false;  
        } catch (IOException e) {  
            e.printStackTrace();  
            isStart = true;  
        }  
    }  
  
    public void sendServerMessage(String message) {  
        for (int i = clients.size() - 1; i >= 0; i--) {  
            clients.get(i).getWriter().println("server：" + message);  
            clients.get(i).getWriter().flush();  
        }  
    }  
  
    class ServerThread extends Thread {  
        private ServerSocket serverSocket;  
        private int max;
  
        public ServerThread(ServerSocket serverSocket, int max) {  
            this.serverSocket = serverSocket;  
            this.max = max;  
        }  
  
        public void run() {  
            while (true) {
                try {  
                    Socket socket = serverSocket.accept();  
                    if (clients.size() == max) {
                        BufferedReader r = new BufferedReader(  
                                new InputStreamReader(socket.getInputStream()));  
                        PrintWriter w = new PrintWriter(socket  
                                .getOutputStream());  
                        String inf = r.readLine();  
                        StringTokenizer st = new StringTokenizer(inf, "@");  
                        User user = new User(st.nextToken(), st.nextToken());  
                        w.println("MAX@server：sorry，" + user.getName()  
                                + user.getIp() + "，Please try later！");  
                        w.flush();  
                        //free 
                        r.close();  
                        w.close();  
                        socket.close();  
                        continue;  
                    }  
                    ClientThread client = new ClientThread(socket);  
                    client.start();
                    clients.add(client);  
                    Userinterface.listModel.addElement(client.getUser().getNameandIP());// 更新在线列表  
                    Userinterface.textArea.append(client.getUser().getName()  
                            + client.getUser().getIp() + "On line!\r\n");  
                } catch (IOException e) {  
                    e.printStackTrace();  
                }  
            }  
        }  
    }  
  
    class ClientThread extends Thread {  
        private Socket socket;  
        private BufferedReader reader;  
        private PrintWriter writer;  
        private User user;  
  
        public BufferedReader getReader() {  
            return reader;  
        }  
  
        public PrintWriter getWriter() {  
            return writer;  
        }  
  
        public User getUser() {  
            return user;  
        }  

        public ClientThread(Socket socket) {  
            try {  
                this.socket = socket;  
                reader = new BufferedReader(new InputStreamReader(socket  
                        .getInputStream()));  
                writer = new PrintWriter(socket.getOutputStream());  
                String inf = reader.readLine();  
                StringTokenizer st = new StringTokenizer(inf, "@");  
                user = new User(st.nextToken(), st.nextToken());  
                writer.println(user.getName() + user.getIp() + "connect success!");  
                writer.flush();  
                if (clients.size() > 0) {  
                    String temp = "";  
                    for (int i = clients.size() - 1; i >= 0; i--) {  
                        temp += (clients.get(i).getUser().getName() + "/" + clients  
                                .get(i).getUser().getIp())  
                                + "@";  
                    }  
                    writer.println("USERLIST@" + clients.size() + "@" + temp);  
                    writer.flush();  
                }  
                for (int i = clients.size() - 1; i >= 0; i--) {  
                    clients.get(i).getWriter().println(  
                            "ADD@" + user.getName() + user.getIp());  
                    clients.get(i).getWriter().flush();  
                }  
            } catch (IOException e) {  
                e.printStackTrace();  
            }  
        }  
  
        @SuppressWarnings("deprecation")  
        public void run() {
            String message = null;  
            while (true) {  
                try {  
                    message = reader.readLine();
                    if (message.equals("CLOSE"))
                    {  
                    	Userinterface.textArea.append(this.getUser().getName()  
                                + this.getUser().getIp() + "Off line!\r\n");    
                        reader.close();  
                        writer.close();  
                        socket.close();  
  
                        for (int i = clients.size() - 1; i >= 0; i--) {  
                            clients.get(i).getWriter().println(  
                                    "DELETE@" + user.getName());  
                            clients.get(i).getWriter().flush();  
                        }  
  
                        Userinterface.listModel.removeElement(user.getNameandIP());
  
                        for (int i = clients.size() - 1; i >= 0; i--) {  
                            if (clients.get(i).getUser() == user) {  
                                ClientThread temp = clients.get(i);  
                                clients.remove(i);
                                temp.stop();
                                return;  
                            }  
                        }  
                    } else {  
                        dispatcherMessage(message);
                    }  
                } catch (IOException e) {  
                    e.printStackTrace();  
                }  
            }  
        }  
  
        public void dispatcherMessage(String message) {  
            StringTokenizer stringTokenizer = new StringTokenizer(message, "@");  
            String source = stringTokenizer.nextToken();  
            String owner = stringTokenizer.nextToken();  
            String content = stringTokenizer.nextToken();  
            message = source + "said：" + content;  
            Userinterface.textArea.append(message + "\r\n");  
            if (owner.equals("ALL")) {
                for (int i = clients.size() - 1; i >= 0; i--) {  
                    clients.get(i).getWriter().println(message);  
                    clients.get(i).getWriter().flush();  
                }  
            }  
        }  
    }  
}  
