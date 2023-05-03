#include "User.h"
#include "Message.h"
#include<iostream>

using namespace std;

int main() {

	User user; 
	cout << "Name: " << user.getName() << "\n";
	cout << "Login: " << user.getLogin() << "\n";
	cout << "Password: " << user.getPassword() << "\n";
	Message message;
	cout << "Sender: " << message.getSender() << "\n";
	cout << "Receiver: " << message.getRec() << "\n";
	cout << "Text: " << message.getText() << "\n";

    cout<<endl;
		 
	
	cout<<endl;
	cout << "New user"<<endl;
	cout << "Enter your NAME: ";
	string nn;
	cin >> nn;
	user.setName(nn);
	cout << "Enter your LOGIN: ";
	string ln;
	cin >> ln;
	user.setLogin(ln);
	cout << "Enter your PASSWORD: ";
	string pn;
	cin >> pn;
	user.setPassword(pn);
    
	cout<<endl;
	cout << "New message"<<endl;
	cout << "Enter sender: ";
	string nr;
	cin >> nr;
	message.setSender(nr);
	cout << "Enter receiver: ";
	string lr;
	cin >> lr;
	message.setRec(lr);
	cout << "Enter TEXT: ";
	string pr;
	cin >> pr;
	message.setText(pr);
	
}