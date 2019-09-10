#ifndef PLANE_H
#define PLANE_H
#include <fstream>

#include <iostream>
#include <string> 
using namespace std;

class plane{
	public:
	plane();
	void setMake(string Make);
	void setModel(int Model);
	void setTailNumber(string number);
	void setSeats(int num);
	void  setRange(int num);
	void setStatus(string Status);
	
	string getMake();
	int getModel();
	string getTailNumber();
	int getSeats();
	int getRange();
	string getStatus();
	
	
	private: 
	string make;
	int model;
	string tailNumber;
	int seats;
	int range;
	string status;
	
	
};
	
#endif
