#include <iostream>
#include <string> 
#include "crewMember.h"
using namespace std;

crewMember::crewMember()
{
	name="";
	Id=0;
	type="";
	status ="";
	other ="";
}


void crewMember::setName(string Name)
{
	name = Name;
}

void crewMember::setId (int id)
{
	Id = id;
}

void crewMember::setStatus(string Status)
{
	status = Status;
}

string crewMember::getName()
{
	return name;
}
int crewMember::getId()
{
	return Id;
}

string crewMember::getStatus()
{
	return status;
}
void crewMember::setType(string str)
{
	type = str;
}

string crewMember::getType()
{
	return type;
}

void crewMember::setOther(string str)
{
	other = str;
}
string crewMember::getOther()
{
	return other;
}