#ifndef CREW_H
#define CREW_H
#include <fstream>

#include <iostream>
#include <string> 
#include <vector>
#include "crewMember.h"
using namespace std;


// Conatins information of a crew member

class crew{
	public:
	crew();
	void addMember(crewMember person);
	void editMember(int id);
	void deleteMember(int id);
	crewMember searchMember( int id);
	void printAll();
	void printMember(int id);
	
	
	private:
	int count;
	vector <crewMember> members;
};

#endif