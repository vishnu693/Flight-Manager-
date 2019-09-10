#include <iostream>
#include <time.h>
#include <string> 
#include "flightLog.h"
using namespace std;
void printMenu();
int main ()
{
	flightLog flights;
	crew people;
	planes aircrafts;
	int num;
	
	while(true)
	{
		cout<<"Menu\n1. Add Crew Member\n2. Add plane\n3. Schedule a flight"<<endl;
		cout<<"4. Edit crew Member"<<endl;
		cout<<"5. Edit plane"<<endl;
		cout<<"6. Edit Flight"<<endl;
		cout<<"7. Delete crew member"<<endl;
		cout<<"8. Delete plane"<<endl;
		cout<<"9. Delete Flight"<<endl;
		cout<<"10. Print all Crew"<<endl;
		cout<<"11. Print all planes"<<endl;
		cout<<"12. Print all Flights"<<endl;
		cout<<"13. Print details of member"<<endl;
		cout<<"14. Print details of plane"<<endl;
		cout<<"15. Print details of flight"<<endl;
		cout<<"16. Print crew schedule"<<endl;
		cout<<"17. Print aircraft schedule"<<endl;
		cout<<"18. Print flight by status"<<endl;
		cout<<"19. update flight status"<<endl;
		cout<<"20. Delete flight by status"<<endl;
		cout<<"21. Store to a file"<<endl;
		cout<<"22. Load form file"<<endl;
		
		cout<<"0.Quit\n(Enter the number)"<<endl;
		cin >>num;
	
		if(num == 0)
		{
			break;
		}
		else if(num == 1)
		{
			string name;
			int id;
			string type;
			string status;
			
			cout<<"Enter the Name of the member"<<endl;
			cin.ignore();
			getline(cin,name);
			cout<<"Enter the ID of the member"<<endl;
			cin >> id;
			cout<<"Enter the type (Pilot, CoPilot, Cabin) of the member"<<endl;
			cin >> type;
			
			cout<<"Enter the status (avaliable,leave, sick) of the member"<<endl;
			cin >> status;
			crewMember temp;
			
			if(type =="Pilot" ||type =="pilot" )
			{
				cout<<"Enter the 5 digit rating code" <<endl;
				string tempStr;
				cin >> tempStr;
				string str1 = ("Rating :" + tempStr);
				temp.setOther(str1);
				
			}
			else if(type =="coPilot" ||type =="CoPilot" )
			{
				cout<<"Enter the 4 digit rating code" <<endl;
				string tempStr;
				cin >> tempStr;
				string str1 = ("Rating :" + tempStr);
				temp.setOther(str1);
			}
			else if(type =="cabin" ||type =="Cabin" )
			{
				cout<<"Enter the loctaion of the cabin member" <<endl;
				string tempStr;
				cin >> tempStr;
				string str1 = ("location :" + tempStr);
				temp.setOther(str1);
				
			}
			
			
			
			temp.setName(name);
			temp.setId(id);
			temp.setType(type);
			temp.setStatus(status);
			
			people.addMember(temp);
			
		}
		else if(num == 2)
		{
			string make;
			int model;
			string num;
			int seats;
			int range;
			string status;
			
			cout<<"Enter the Make of the plane"<<endl;
			cin.ignore();
			getline(cin,make);
			cout<<"Enter the Model of the plane"<<endl;
			cin >> model;
			cout<<"Enter the tail number of the plane"<<endl;
			cin >> num;
			cout<<"Enter the number of seats "<<endl;
			cin >> seats;
			cout<<"Enter the range"<<endl;
			cin >> range;
			cout<<"Enter the status (out, in, repair)"<<endl;
			cin >> status;
			
			plane temp;
			temp.setMake(make);
			temp.setModel(model);
			temp.setTailNumber(num);
			temp.setRange(range);
			temp.setStatus(status);
			
			aircrafts.addPlane(temp);
			
		}
		else if(num == 3)
		{
			
			int min;
			int hur;
			int mday;
			int mon;
			int year;
			string planeId;
			int pilotId;
			int copilotId;
			int one;
			int two;
			int three;
			string startCode;
			string endCode;
			int passengers;
			string status;
			int flightId;
			
			cout<<"Enter Flight Id"<<endl;
			cin >> flightId;
			cout<<"Enter the plane Id(Tail number)"<<endl;
			cin >> planeId;
			cout<<"Enter Pilot Id"<<endl;
			cin>> pilotId;
			cout<<"Enter CoPilot Id"<<endl;
			cin >> copilotId;
			cout<<"Enter crew one Id"<<endl;
			cin >> one;
			cout<<"Enter crew two Id"<<endl;
			cin >> two;
			cout<<"Enter crew three Id"<<endl;
			cin >> three;
			cout<<"For the Start date and time"<<endl;		
			cout<<"Enter hour"<<endl;
			cin >>hur;
			cout<<"Enter minutes"<<endl;
			cin >>min;
			cout<<"Enter month"<<endl;
			cin >> mon;
			cout<<"Enter date in the month"<<endl;
			cin >>mday;
			cout<<"Enter the year"<<endl;
			cin >> year;
			mon-=1;
			year-=1900;
			struct tm start = {0, min, hur, mday, mon, year};
			
			cout<<"For the End date and time"<<endl;		
			cout<<"Enter hour"<<endl;
			cin >>hur;
			cout<<"Enter minutes"<<endl;
			cin >>min;
			cout<<"Enter month"<<endl;
			cin >> mon;
			cout<<"Enter date in the month"<<endl;
			cin >>mday;
			cout<<"Enter the year"<<endl;
			cin >> year;
			mon-=1;
			year-=1900;
			struct tm end = {0, min, hur, mday, mon, year};
			
			cout<<"Enter starting the airport code"<<endl;
			cin >> startCode;
			cout<<"Enter ending the airport code"<<endl;
			cin >> endCode;
			cout<<"Enter the numebr of passengers"<<endl;
			cin >> passengers;
			cout<<"Enter the status (active, cancelled, completed)"<<endl;
			cin >> status;
			
			flight temp;
			temp.setFlightId(flightId);
			temp.setPlaneId(planeId);
			temp.setPilotId(pilotId);
			temp.setcoPilot(copilotId);
			temp.setCrewOne(one);
			temp.setCrewTwo(two);
			temp.setCrewThree(three);
			temp.setStartDate(start);
			temp.setEndDate(end);
			temp.setStartAirport(startCode);
			temp.setEndAirport(endCode);
			temp.setPassengers(passengers);
			temp.setStatus(status);
			if(flights.checkAvaliability(temp, people) == true)
			{
				if((aircrafts.searchMember(planeId)).getSeats() >= passengers)
				{
				
				flights.addFlight(temp);
				}
			}			
			
		}
		else if(num == 4)
		{
			int id;
			cout<<"Enter the crew Member Id"<<endl;
			cin >> id;
			people.editMember(id);
		}
		else if(num == 5)
		{
			string id;
			cout<<"Enter the plane Id (Tail Number)"<<endl;
			cin >> id;
			aircrafts.editPlane(id);
		}
		else if(num == 6)
		{
			int id;
			cout<<"Enter the flight Id "<<endl;
			cin >> id;
			flights.editFlight(id);
		}
		else if(num == 7)
		{
			int id;
			cout<<"Enter the crew Member Id"<<endl;
			cin >> id;
			people.deleteMember(id);
		}
		else if(num == 8)
		{
			string id;
			cout<<"Enter the plane Id (Tail Number)"<<endl;
			cin >> id;
			aircrafts.deletePlane(id);
		}
		else if(num == 9)
		{
			int id;
			cout<<"Enter the flight Id "<<endl;
			cin >> id;
			flights.deleteFlight(id);
		}
		else if(num == 10)
		{
			people.printAll();
		}
		else if(num == 11)
		{
			aircrafts.printAll();
		}
		else if(num == 12)
		{
			flights.printAllFlights();
		}
		else if(num == 13)
		{
			int id;
			cout<<"Enter the crew Member Id"<<endl;
			cin >> id;
			people.printMember(id);
		}
		else if(num == 14)
		{
			string id;
			cout<<"Enter the plane Id (Tail Number)"<<endl;
			cin >> id;
			aircrafts.printPlanes(id);
		}
		else if(num == 15)
		{
			int id;
			cout<<"Enter the flight Id "<<endl;
			cin >> id;
			flights.printFlightDetails(id);
		}
		else if(num == 16)
		{
			int id;
			cout<<"Enter the crew Member Id"<<endl;
			cin >> id;
			flights.printCrewSchedule(id, people);
		}
		else if(num == 17)
		{
			string id;
			cout<<"Enter the plane Id (Tail Number)"<<endl;
			cin >> id;
			flights.printAircraftSchedule(id);
		}
		else if(num == 18)
		{
			cout<<"Flights orderd based on status:" <<endl;
			flights.printFlightStatus();
		}
		else if(num == 19)
		{
			int id;
			cout<<"Enter the flight Id "<<endl;
			cin >> id;
			flights.updateFlightStatus(id);
		}
		else if(num == 20)
		{
			int id;
			cout<<"Enter the flight Id "<<endl;
			cin >> id;
			flights.DeleteFlightStatus();
		}
		
		
		
		
		
	}
	
	return 0;
}

