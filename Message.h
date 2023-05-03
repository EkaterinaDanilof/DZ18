#pragma once
#include<string>
#include <ostream>
#include <fstream>

using namespace std;
constexpr auto messageConfigFile = "/home/katya/Documents/projects/MessageFile";

class Message final
 {
    private:

    string _text;
    string _sender;
    string _receiver;
   	void read();
	void write();

public:
	Message(); 
	~Message();
	void setText(const string& text);
	void setSender(const string& sender);
	void setRec(const string& rec);

	const string& getText() const;
	const string& getSender() const;
	const string& getRec() const;
	
};