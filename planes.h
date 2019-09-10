#ifndef PLANES_H
#define PLANES_H
#include <fstream>
#include <vector>
#include <iostream>
#include <string> 
using namespace std;
#include "plane.h"

// Conatins information of a crew member

class planes
{
	public:
	planes();
	void addPlane(plane aircraft);
	void editPlane(string id);
	void deletePlane(string id);
	plane searchMember( string id);
	void printAll();
	void printPlanes(string id);
	
	
	private:
	int count;
	vector <plane> aircrafts;
};

#endif