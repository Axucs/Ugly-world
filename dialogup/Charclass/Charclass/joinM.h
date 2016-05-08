#pragma once

#include <string>
#include <map>
#include <list>

class Dialog
{
private:
	int dialogID;
	std::string ID;
public:
	Dialog(int ID){
		dialogID = ID;
	
	};
	
	Dialog();

	~Dialog();
};

