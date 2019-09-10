#ifndef FLIGHT_H
#define FLIGHT_H
#include <fstream>

#include <iostream>
#include <string> 
using namespace std;
#include "plane.h"
#include "crewMember.h"
#include <time.h> 

class flight{
	public:
	flight();
	void setFlightId(int num);
	void setPlaneId(string num);
	void setPilotId(int num);
	void setcoPilot(int num);
	void setCrewOne(int num);
	void setCrewTwo(int num);
	void setCrewThree(int num);
	void setStartDate(struct tm str);
	void setEndDate(struct tm str);
	void setStartAirport(string str);
	void setEndAirport(string str);
	void setPassengers(int num);
	void setStatus(string str);
	
	int getFlightId();
	string getPlaneId();
	int getPilotId();
	int getcoPilot();
	int getCrewOne();
	int getCrewTwo();
	int getCrewThree();
	struct tm* getStartDate();
	struct tm* getEndDate();
	string getStartAirport();
	string getEndAirport();
	int getPassengers();
	string getStatus();
	
	private: 
	
	int flightId; 
	string planeId;//Tail Number
	int pilotId;
	int coPilotId;
	int crewOne;
	int crewTwo;
	int crewThree;
	struct tm *startDate;
	struct tm *endDate;
	string startAirport;
	string endAirport;
	int passengers;
	string status;
	
	
};
	
#endif

