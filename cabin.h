#ifndef CABIN_H
#define CABIN_H
#include <fstream>

#include <iostream>
#include <string> 
#include "crewMember.h"
using namespace std;

class cabin : public crewMember { 
public:
	cabin();
   void setLocation(string str);   
   string getLocation();
private:
   string location;
   };
	
#endif
