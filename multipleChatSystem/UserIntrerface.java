package multipleChatSystem;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Toolkit;

import javax.swing.DefaultListModel;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JList;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JSplitPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.border.TitledBorder;

public class UserIntrerface {
	public JFrame frame;  
	public JList userList;  
    public JTextArea textArea;  
    public JTextField textField;      
    public JButton btn_send;  
    public JPanel southPanel;  
    public JScrollPane rightScroll;  
    public JScrollPane leftScroll;  
    public JSplitPane centerSplit;  
    public DefaultListModel listModel; 
    
    public void UI_init(){  
   
    this.textArea = new JTextArea();  
    this.textArea.setEditable(false);  
    this.textArea.setForeground(Color.blue);  
    this.textField = new JTextField();   
    this.btn_send = new JButton("Send");  
    this.listModel = new DefaultListModel();  
    this.userList = new JList(listModel);  

    this.rightScroll = new JScrollPane(userList);  
    this.rightScroll.setBorder(new TitledBorder("Participants"));  
    this.leftScroll = new JScrollPane(textArea);  
    this.leftScroll.setBorder(new TitledBorder("Chat Area"));  
    this.southPanel = new JPanel(new BorderLayout());  
    this.southPanel.add(textField, "Center");  
    this.southPanel.add(btn_send, "East");  
    this.southPanel.setBorder(new TitledBorder("Chat Input"));  

    this.centerSplit = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT, leftScroll,
    		rightScroll);  
    this.centerSplit.setDividerLocation(450);  

    this.frame = new JFrame("Client");  
    //set icon 
    this.frame.setIconImage(Toolkit.getDefaultToolkit().createImage(Client.class.getResource("qq.png"))); 
    this.frame.setLayout(new BorderLayout());   
    this.frame.add(centerSplit, "Center");  
    this.frame.add(southPanel, "South");  
    this.frame.setSize(600, 400);  
    int screen_width = Toolkit.getDefaultToolkit().getScreenSize().width;  
    int screen_height = Toolkit.getDefaultToolkit().getScreenSize().height;  
    this.frame.setLocation((screen_width - frame.getWidth()) / 2,  
            (screen_height - frame.getHeight()) / 2);  
    this.frame.setVisible(true);  
    }
}
