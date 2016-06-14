package multipleChatSystem;

import java.io.BufferedReader;  
import java.io.IOException;  
import java.io.InputStreamReader;  
import java.io.PrintWriter;  
import java.net.Socket;  
import java.util.HashMap;  
import java.util.Map;  
import java.util.StringTokenizer; 
import java.awt.event.ActionEvent;  
import java.awt.event.ActionListener;  
import java.awt.event.WindowAdapter;  
import java.awt.event.WindowEvent;  
   
import javax.swing.JOptionPane;  
import javax.swing.JTextArea;  

  
public class Client{   
     
    private Socket socket;  
    private PrintWriter writer;  
    private BufferedReader reader;  
    private MessageThread messageThread; 
    
    private boolean isConnected = false; 
    private Map<String, User> onLineUsers = new HashMap<String, User>();
    
	UserIntrerface Userinterface = new UserIntrerface();
	
    //main method
    public static void main(String[] args) {  
        new Client();  
    }  
  
    //send method
    public void send() {  
        String message = Userinterface.textField.getText().trim();  
        if (message == null || message.equals("")) {  
            return;  
        }  
        sendMessage(Userinterface.frame.getTitle() + "@" + "ALL" + "@" + message);  
        Userinterface.textField.setText(null);  
    }  
  
    //client layout and function 
    public Client() {  
    	
    	Userinterface.UI_init();
        //enter send 
    	Userinterface.textField.addActionListener(new ActionListener() {  
            public void actionPerformed(ActionEvent arg0) {  
                send();  
            }  
        });  
  
        //click send button
    	Userinterface.btn_send.addActionListener(new ActionListener() {  
            public void actionPerformed(ActionEvent e) {  
                send();  
            }  
        });  
  
        //connect the server
        {
                int port;  
                try {  
                    port =6666; 
                    String hostIp = "192.168.1.72"; 
                    String name = "xiaoqing";
                    boolean flag = connectServer(port, hostIp, name);  
                    if (flag == false) {  
                        throw new Exception("Connect failed!");  
                    }  
                    Userinterface.frame.setTitle(name);   
                } catch (Exception exc) {  
                    JOptionPane.showMessageDialog(Userinterface.frame, exc.getMessage(),  
                            "Error", JOptionPane.ERROR_MESSAGE);  
                }  
        }
  
        //close window
        Userinterface.frame.addWindowListener(new WindowAdapter() {  
            public void windowClosing(WindowEvent e) {  
                if (isConnected) {  
                    closeConnection();
                }  
                System.exit(0);
            }  
        });  
    }  
 
    public boolean connectServer(int port, String hostIp, String name) {  
        try {  
            socket = new Socket(hostIp, port);
            writer = new PrintWriter(socket.getOutputStream());  
            reader = new BufferedReader(new InputStreamReader(socket  
                    .getInputStream()));  
            sendMessage(name + "@" + socket.getLocalAddress().toString());  
            messageThread = new MessageThread(reader, Userinterface.textArea);  
            messageThread.start();  
            isConnected = true;
            return true;  
        } catch (Exception e) {  
        	Userinterface.textArea.append("Port£º" + port + "    IP£º" + hostIp  
                    + "   Connect falied!" + "\r\n");  
            isConnected = false;
            return false;  
        }  
    }  
  
    public void sendMessage(String message) {  
        writer.println(message);  
        writer.flush();  
    }  
   
    @SuppressWarnings("deprecation")  
    public synchronized boolean closeConnection() {  
        try {  
            sendMessage("CLOSE");
            messageThread.stop();
            if (reader != null) {  
                reader.close();  
            }  
            if (writer != null) {  
                writer.close();  
            }  
            if (socket != null) {  
                socket.close();  
            }  
            isConnected = false;  
            return true;  
        } catch (IOException e1) {  
            e1.printStackTrace();  
            isConnected = true;  
            return false;  
        }  
    }  

    class MessageThread extends Thread {  
        private BufferedReader reader;  
        private JTextArea textArea;  

        public MessageThread(BufferedReader reader, JTextArea textArea) {  
            this.reader = reader;  
            this.textArea = textArea;  
        }  

        public synchronized void closeCon() throws Exception {  
        	Userinterface.listModel.removeAllElements();  
            if (reader != null) {  
                reader.close();  
            }  
            if (writer != null) {  
                writer.close();  
            }  
            if (socket != null) {  
                socket.close();  
            }  
            isConnected = false;
        }  
  
        public void run() {  
            String message = "";  
            while (true) {  
                try {  
                    message = reader.readLine();  
                    StringTokenizer stringTokenizer = new StringTokenizer(  
                            message, "/@");  
                    String command = stringTokenizer.nextToken();
                    if (command.equals("CLOSE"))
                    {  
                        textArea.append("server closed!\r\n");  
                        closeCon();
                        return;
                    } else if (command.equals("ADD")) {
                        String username = "";  
                        String userIp = "";  
                        if ((username = stringTokenizer.nextToken()) != null  
                                && (userIp = stringTokenizer.nextToken()) != null) {  
                            User user = new User(username, userIp);  
                            onLineUsers.put(username, user);  
                            Userinterface.listModel.addElement(username);  
                        }  
                    } else if (command.equals("DELETE")) {
                        String username = stringTokenizer.nextToken();  
                        User user = (User) onLineUsers.get(username);  
                        onLineUsers.remove(user);  
                        Userinterface.listModel.removeElement(username);  
                    } else if (command.equals("USERLIST")) {
                        int size = Integer  
                                .parseInt(stringTokenizer.nextToken());  
                        String username = null;  
                        String userIp = null;  
                        for (int i = 0; i < size; i++) {  
                            username = stringTokenizer.nextToken();  
                            userIp = stringTokenizer.nextToken();  
                            User user = new User(username, userIp);  
                            onLineUsers.put(username, user);  
                            Userinterface.listModel.addElement(username);  
                        }  
                    } else if (command.equals("MAX")) {
                        textArea.append(stringTokenizer.nextToken()  
                                + stringTokenizer.nextToken() + "\r\n");  
                        closeCon();
                        return;
                    } else {
                        textArea.append(message + "\r\n");  
                    }  
                } catch (IOException e) {  
                    e.printStackTrace();  
                } catch (Exception e) {  
                    e.printStackTrace();  
                }  
            }  
        }  
    }  
}  
