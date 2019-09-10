#include <iostream>
#include <string> 
#include "plane.h"
using namespace std;
plane::plane(){
	make ="";
	model =0;
	tailNumber ="";
	seats=0;
	range=0;
	string status ="";
}
void plane::setMake(string Make)
{
	make = Make;
}
void plane::setModel(int Model)
{
	model = Model;
}
void plane::setTailNumber(string number)
{
	tailNumber= number;
}
void plane::setSeats(int num)
{
	seats = num;
}
void  plane::setRange(int num)
{
	range = num;
}
void plane::setStatus(string Status)
{
	status = Status;
}

string plane::getMake()
{
	return make;
}
int plane::getModel()
{
	return model;
}
string plane::getTailNumber()
{
	return tailNumber;
}
int plane::getSeats()
{
	return seats;
}
int plane::getRange()
{
	return range;
}
string plane::getStatus()
{
	return status;
}
