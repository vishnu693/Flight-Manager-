#ifndef COPILOT_H
#define COPILOT_H
#include <fstream>

#include <iostream>
#include <string> 
#include "crewMember.h"
using namespace std;

class coPilot : public crewMember { 
public:
	coPilot();
   void setRating(string Rating);    
   string getRating();
private:
   string ratingCode;
   double hours;
};

	
#endif
