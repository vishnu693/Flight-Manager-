#ifndef CREWMEMBER_H
#define CREWMEMBER_H
#include <fstream>

#include <iostream>
#include <string> 
using namespace std;

// Conatins information of a crew member
class crewMember{
	public:
	crewMember();
	void setName(string Name);
	void setId (int id);
	void setStatus(string Status);
	void setType(string str);
	void setOther(string str);
	
	string getName();
	int getId();
	string getStatus();
	string getType();
	string getOther();
	
	private: 
	string name;
	int Id;
	string status;
	string type;
	string other;
	
};
	
#endif
