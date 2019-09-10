#include <iostream>
#include <string> 
#include "flight.h"
using namespace std;
flight::flight()
{
	flightId = 0;
	planeId = "";
	pilotId = 0;
	coPilotId = 0;
	crewOne = 0;
	crewTwo = 0;
	crewThree = 0;
	string startAirport = "";
	string endAirport = "";
	passengers = 0;
	string status = "";
	
}

void flight::setFlightId(int num)
{
	flightId=num;
}
void flight::setPlaneId(string num)
{
	planeId=num;
}
void flight::setPilotId(int num)
{
	pilotId=num;
}
void flight::setcoPilot(int num)
{
	coPilotId=num;
}
void flight::setCrewOne(int num)
{
	crewOne=num;
}
void flight::setCrewTwo(int num)
{
	crewTwo=num;
}
void flight::setCrewThree(int num)
{
	crewThree=num;
}
void flight::setStartDate(struct tm str)
{
	startDate=&str;
}
void flight::setEndDate(struct tm str)
{
	endDate=&str;
}
void flight::setStartAirport(string str)
{
	startAirport =str;
}
void flight::setEndAirport(string str)
{
	endAirport =str;
}
void flight::setPassengers(int num)
{
	passengers = num;
}
void flight::setStatus(string str)
{
	status =str;
}

int flight::getFlightId()
{
	return flightId;
}
string flight::getPlaneId(){
	return planeId;
}
int flight::getPilotId(){
	return pilotId;
}
int flight::getcoPilot(){
	return coPilotId;
}
int flight::getCrewOne(){
	return crewOne;
}
int flight::getCrewTwo(){
	return crewTwo;
}
int flight::getCrewThree(){
	return crewThree;
}
struct tm* flight::getStartDate(){
	return startDate;
}
struct tm* flight::getEndDate(){
	return endDate;
}
string flight::getStartAirport(){
	return startAirport;
}
string flight::getEndAirport(){
	return endAirport;
}
int flight::getPassengers(){
	return passengers;
}
string flight::getStatus(){
	return status;
}