#include "Message.h"
#include <filesystem>
#include<fstream>

void Message::read()
{
	fstream file(messageConfigFile, std::ios::in);
	std::filesystem::perms::others_all;
	std::filesystem::permissions(messageConfigFile, std :: filesystem :: perms :: others_all  | std :: filesystem :: perms :: group_all , std::filesystem::perm_options::remove);

	const std::string delimiter = ": ";
	if (file.is_open()) {
		string line;
		string name; string value;

		while (std::getline(file, line)) {
			size_t delPos = line.find(delimiter);
			if (delPos > 0) {
				name = line.substr(0, delPos);
				value= line.substr(delPos+1);
				if (name == "Text") {
					_text = value;
					}
				else if (name == "Sender"){
                    _sender = value;
                }
                else if(name == "Receiver"){
                    _receiver=value;
                }
			}

			}
	}
	file.close();
}  

void Message::write()
{
	std::fstream file(messageConfigFile, std::ios::out);
	file << "Sender: " << _sender << "\n";
	file << "Receiver: " << _receiver << "\n";
	file << "Text: " << _text << "\n";
	file.close();
}

Message::Message()
{
	read();
}

Message::~Message()
{
	write();
}

void Message::setText(const string& text)
{
	_text = text;
}

void Message::setSender(const string& sender)
{
	_sender = sender;
}

void Message::setRec(const string& rec)
{
	_receiver = rec;
}

const string& Message::getText() const
{
	return _text;
}

const string& Message::getSender() const
{
	return _sender;
}

const string& Message::getRec() const
{
	return _receiver;
}