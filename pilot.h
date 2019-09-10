#ifndef PILOT_H
#define PILOT_H
#include <fstream>

#include <iostream>
#include <string> 
#include "crewMember.h"
using namespace std;

class pilot : public crewMember { 
public:
	pilot();
   void setRating(string Rating);   
   string getRating();
private:
   string ratingCode;
   double hours;
};
	
#endif
