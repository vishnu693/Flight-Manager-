#ifndef FLIGHTLOG_H
#define FLIGHTLOG_H
#include <fstream>

#include <iostream>
#include <string> 
using namespace std;
#include "flight.h"
#include "planes.h"
#include "crew.h"


class flightLog
{
	public:
	flightLog();
	
	void addFlight(flight value);
	void editFlight(int id);
	void deleteFlight(int id);
	flight searchFlight(int id);
	void printAllFlights();
	void printFlightDetails(int id);
	void printAircraftSchedule(string planeId);
	void printCrewSchedule(int crewId,crew members);
	void printFlightStatus();
	void DeleteFlightStatus();
	void updateFlightStatus(int id);
	bool checkAvaliability(flight temp, crew members); // plane and crew 
	
	
	
	private:
	int count;
	vector <flight> flights;
};

#endif