#include <iostream>
#include <string> 
#include <vector>
#include <stdio.h>
#include "flightLog.h"
using namespace std;

flightLog::flightLog()
{
	count =0;
}
	
void flightLog::addFlight(flight value)
{
	flights.push_back(value);
}
void flightLog::editFlight(int id)
{
	bool check =false;
	for(int i=0; i < flights.size(); i++)
	{
		
		if((flights.at(i)).getFlightId() == id)
		{
			
			
			while (check == false)
			{
				cout<<"Which of the following information do you want to edit\n1. Plane ID\n2. Pilot ID\n3. CoPilot ID\n4. Crew ID\n5. Start date and time\n6. End date and time\n7. Start Airport code\n8. End Airport code\n9. Number of Passengers\n10. Satatus?\n(choose the option number"<<endl;
				int opt;
				cin >> opt;
			
				if(opt == 1)
				{
					cout<<"Enter the new value"<<endl;
					string num;
					cin >>num;
					(flights.at(i)).setPlaneId(num);
					check = true;
				}
				else if(opt == 2)
				{
					cout<<"Enter the new value"<<endl;
					int num;
					cin >>num;
					(flights.at(i)).setPilotId(num);
					check = true;
				}
				else if(opt == 3)
				{
					cout<<"Enter the new value"<<endl;
					int num;
					cin >>num;
					(flights.at(i)).setcoPilot(num);
					check = true;
				}
				else if(opt == 4)
				{
					cout<<"Enter the first Id"<<endl;
					int num;
					cin >>num;
					(flights.at(i)).setCrewOne(num);
					cout<<"Enter the second Id"<<endl;
					cin >>num;
					(flights.at(i)).setCrewTwo(num);
					cout<<"Enter the third Id"<<endl;
					cin >>num;
					(flights.at(i)).setCrewThree(num);
					check = true;
				}
				else if(opt == 5)
				{					
					int min;
					int hur;
					int mday;
					int mon;
					int year;
					
					cout<<"Enter hour"<<endl;
					cin >>hur;
					cout<<"Enter minutes"<<endl;
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
					struct tm day = {0, min, hur, mday, mon, year};
					(flights.at(i)).setStartDate(day);
					check = true;
				}
				else if(opt == 6)
				{
							
					int min;
					int hur;
					int mday;
					int mon;
					int year;
					
					cout<<"Enter hour"<<endl;
					cin >>hur;
					cout<<"Enter minutes"<<endl;
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
					struct tm day = {0, min, hur, mday, mon, year};
					(flights.at(i)).setEndDate(day);
					check = true;
				}
				else if(opt == 7)
				{
					cout<<"Enter the new value"<<endl;
					string num;
					cin >> num;
					(flights.at(i)).setStartAirport(num);
					check = true;
				}
				else if(opt == 8)
				{
					cout<<"Enter the new value"<<endl;
					string num;
					cin >>num;
					(flights.at(i)).setEndAirport(num);
					check = true;
				}
				else if(opt == 9)
				{
					cout<<"Enter the new value"<<endl;
					int num;
					cin >>num;
					(flights.at(i)).setPassengers(num);
					check = true;
				}
				else if(opt == 10)
				{
					cout<<"Enter the new value"<<endl;
					string num;
					cin >>num;
					(flights.at(i)).setStatus(num);
					check = true;
				}
				else 
				{
					cout <<"Enter a valid option"<<endl;
				}
			}
			
		}
	}
}
void flightLog::deleteFlight(int id)
{
	bool check =false;
	for(int i=0; i <flights.size(); i++)
	{
		
		if((flights.at(i)).getFlightId() == id)
		{
			flights.erase(flights.begin() + i);
			check = true;
		}
	}
	if(check == false)
	{
		cout<<"No flight found with id: "<<id<<endl;
	}
}
flight flightLog::searchFlight(int id)
{
	bool check =false;
	for(int i=0; i <flights.size(); i++)
	{
		
		if((flights.at(i)).getFlightId() == id)
		{
			return flights.at(i);
			check = true;
		}
	}
	if(check == false)
	{
		cout<<"No flight found with id: "<<id<<endl;
	}
}
void flightLog::printAllFlights()
{
	for(int i=0; i <flights.size(); i++)
	{
		cout<<"Id: "<<flights.at(i).getFlightId()<<endl;
	}
}
void flightLog::printFlightDetails(int id)
{
	bool check =false;
	for(int i=0; i <flights.size(); i++)
	{
		
		if((flights.at(i)).getFlightId() == id)
		{
			cout<<"Flight ID: "<<(flights.at(i)).getFlightId()<<endl;
			cout<<"Plane ID: "<<(flights.at(i)).getPlaneId()<<endl;
			cout<<"Pilot ID: "<<(flights.at(i)).getPilotId()<<endl;
			cout<<"CoPilot ID: "<<(flights.at(i)).getcoPilot()<<endl;
			cout<<"Crew person 1 Id" <<(flights.at(i)).getCrewOne()<<endl;
			cout<<"Crew person 2 Id" <<(flights.at(i)).getCrewTwo()<<endl;
			cout<<"Crew person 3 Id" <<(flights.at(i)).getCrewThree()<<endl;
			printf("Start date and time: %s\n", asctime((flights.at(i)).getStartDate()));
			printf("End date and time: %s\n", asctime((flights.at(i)).getEndDate()));
			cout<<"Starting Aiport code" <<(flights.at(i)).getStartAirport()<<endl;
			cout<<"End Aiport code" <<(flights.at(i)).getEndAirport()<<endl;
			cout<<"Pasengers: "<<(flights.at(i)).getPassengers()<<endl;
			cout<<"Status :"<<(flights.at(i)).getStatus()<<endl;
			
		}
	}
	if(check == false)
	{
		cout<<"No flight found with id: "<<id<<endl;
	}
}
void flightLog::printAircraftSchedule(string planeId)
{
	vector <flight> values;
	bool check =false;
	for(int i=0; i <flights.size(); i++)
	{
		
		if((flights.at(i)).getPlaneId() == planeId)
		{
			values.push_back(flights.at(i));
		}
	}
	while(values.size()>0)
	{
		flight big =values.at(0);
		int num =0;
		for(int i=1; i <values.size(); i++)
		{
			time_t time1 = mktime(big.getStartDate());
			time_t time2 = mktime(values.at(i).getStartDate());
			if(difftime(time1,time2) < 0) {
				
				num =i;
				big = values.at(i);
			}
		
		}
		cout<<"Flight ID: "<< big.getFlightId()<< "\nPlane ID: "<<big.getPlaneId()<<endl;
		printf("Start date and time: %s\n", asctime(big.getStartDate()));
		printf("Start date and time: %s\n", asctime(big.getEndDate()));
		values.erase(values.begin()+num);
		cout<<endl;
	}
	
	if(check == false)
	{
		cout<<"No flight found with id: "<<planeId<<endl;
	}
}

void flightLog::printFlightStatus()
{
	for(int i=0; i <flights.size(); i++)
	{
		if(flights.at(i).getStatus() == "active" ||flights.at(i).getStatus() == "Active" )
		{
			cout<<"Plane Id" <<flights.at(i).getPlaneId() <<"\t Flight Id"<<flights.at(i).getFlightId()<<"\tActive"<<endl;
		}
	}
	cout<<endl;
	for(int i=0; i <flights.size(); i++)
	{
		if(flights.at(i).getStatus() == "cancelled" ||flights.at(i).getStatus() == "Cancelled" )
		{
			cout<<"Plane Id" <<flights.at(i).getPlaneId() <<"\t Flight Id"<<flights.at(i).getFlightId()<<"\tCancelled"<<endl;
		}
	}
	cout<<endl;
	for(int i=0; i <flights.size(); i++)
	{
		if(flights.at(i).getStatus() == "completed" ||flights.at(i).getStatus() == "Completed" )
		{
			cout<<"Plane Id" <<flights.at(i).getPlaneId() <<"\t Flight Id"<<flights.at(i).getFlightId()<<"\tCompleted"<<endl;
		}
	}
	cout<<endl;
}
void flightLog::DeleteFlightStatus()
{
	for(int i=0; i <flights.size(); i++)
	{
		if(flights.at(i).getStatus() == "cancelled" ||flights.at(i).getStatus() == "Cancelled" )
		{
			flights.erase(flights.begin() + i);
		}
	}
	for(int i=0; i <flights.size(); i++)
	{
		if(flights.at(i).getStatus() == "completed" ||flights.at(i).getStatus() == "Completed" )
		{
			flights.erase(flights.begin() + i);
		}
	}
}
void flightLog::updateFlightStatus(int id)
{
	bool check = false;
	for(int i=0; i <flights.size(); i++)
	{
		
		if((flights.at(i)).getFlightId() == id)
		{
			cout<<"What is the new status (active, cancelled, completed)"<<endl;
			string str;
			cin >> str;
			flights.at(i).setStatus(str);
			check = true;
		}
	}
	if(check == false)
	{
		cout<<"No flight found with id: "<<id<<endl;
	}
}
bool flightLog::checkAvaliability(flight temp, crew members) // plane and crew 
{
	//plane
	
	vector <flight> values;
	bool check =false;
	for(int i=0; i <flights.size(); i++)
	{
		
		if((flights.at(i)).getPlaneId() == temp.getPlaneId())
		{
			values.push_back(flights.at(i));
		}
	}
	while(values.size()>0)
	{	int num =0;
		for(int i=0; i <values.size(); i++)
		{
			time_t time1 = mktime(values.at(i).getStartDate());
			time_t time2 = mktime(temp.getStartDate());
			time_t time3 = mktime(values.at(i).getEndDate());
			time_t time4 = mktime(temp.getEndDate());
			
			if(difftime(time1,time2 ) < 0 && difftime(time3,time2) > 0 )
			{
				cout<<"The plane is already scheduled at that time"<<endl;
				return false;
			}
			
			if(difftime(time1,time4) < 0 && difftime(time3,time4) > 0 )
			{
				cout<<"The plane is already scheduled at that time"<<endl;
				return false;
			}
		
		}
	}
	//pilot
	values.clear();
	crewMember a = members.searchMember(temp.getPilotId());
	if(a.getType()!="Pilot" && a.getType()!="pilot")
	{
		cout << "Wrong role assignment"<<endl;
		return false;
	}
		check =false;
		for(int i=0; i <flights.size(); i++)
		{
		
			if((flights.at(i)).getPilotId() == values.at(i).getPilotId())
			{
				values.push_back(flights.at(i));
			}
		}
		
		while(values.size()>0)
		{
			for(int i=1; i <values.size(); i++)
			{				
			time_t time1 = mktime(values.at(i).getStartDate());
			time_t time2 = mktime(temp.getStartDate());
			time_t time3 = mktime(values.at(i).getEndDate());
			time_t time4 = mktime(temp.getEndDate());
			
			if(difftime(time1,time2 ) < 0 && difftime(time3,time2) > 0 )
			{
				cout<<"The Pilot is already scheduled to fly another plane that time"<<endl;
				return false;
			}
			
			if(difftime(time1,time4) < 0 && difftime(time3,time4) > 0 )
			{
				cout<<"The Pilot is already scheduled to fly another plane that time"<<endl;
				return false;
			}
		
			}
		}
	//copilot
	values.clear();
	a = members.searchMember(temp.getcoPilot());
	if(a.getType()!="copilot" && a.getType()!="Copilot")
	{
		cout << "Wrong role assignment"<<endl;
		return false;
	}
		check =false;
		for(int i=0; i <flights.size(); i++)
		{
		
			if((flights.at(i)).getcoPilot() == values.at(i).getcoPilot())
			{
				values.push_back(flights.at(i));
			}
		}
		
		while(values.size()>0)
		{
			for(int i=1; i <values.size(); i++)
			{
			time_t time1 = mktime(values.at(i).getStartDate());
			time_t time2 = mktime(temp.getStartDate());
			time_t time3 = mktime(values.at(i).getEndDate());
			time_t time4 = mktime(temp.getEndDate());
			
			if(difftime(time1,time2 ) < 0 && difftime(time3,time2) > 0 )
			{
				cout<<"The CoPilot is already scheduled to fly another plane that time"<<endl;
				return false;
			}
			
			if(difftime(time1,time4) < 0 && difftime(time3,time4) > 0 )
			{
				cout<<"The CoPilot is already scheduled to fly another plane that time"<<endl;
				return false;
			}
		
			}
		}
	// cabin 1
	a = members.searchMember(temp.getCrewOne());
	if(a.getType()!="cabin" && a.getType()!="Cabin")
	{
		cout << "Wrong role assignment"<<endl;
		return false;
	}
	values.clear();
		check =false;
		for(int i=0; i <flights.size(); i++)
		{
		
			if((flights.at(i)).getCrewOne() == values.at(i).getCrewOne())
			{
				values.push_back(flights.at(i));
			}
		}
		while(values.size()>0)
		{
			for(int i=1; i <values.size(); i++)
			{
			time_t time1 = mktime(values.at(i).getStartDate());
			time_t time2 = mktime(temp.getStartDate());
			time_t time3 = mktime(values.at(i).getEndDate());
			time_t time4 = mktime(temp.getEndDate());
			
			if(difftime(time1,time2 ) < 0 && difftime(time3,time2) > 0 )
			{
				cout<<"Cabin member 1 is already scheduled to another plane at that time"<<endl;
				return false;
			}
			
			if(difftime(time1,time4) < 0 && difftime(time3,time4) > 0 )
			{
				cout<<"Cabin member 1 is already scheduled to another plane at that time"<<endl;
				return false;
			}
					
				
		
			}
		}
	//cabin 2
	values.clear();
	a = members.searchMember(temp.getCrewTwo());
	if(a.getType()!="cabin" && a.getType()!="Cabin")
	{
		cout << "Wrong role assignment"<<endl;
		return false;
	}
		check =false;
		for(int i=0; i <flights.size(); i++)
		{
			if((flights.at(i)).getCrewTwo() == values.at(i).getCrewTwo())
			{
				values.push_back(flights.at(i));
			}
		}
		while(values.size()>0)
		{
			for(int i=1; i <values.size(); i++)
			{
			time_t time1 = mktime(values.at(i).getStartDate());
			time_t time2 = mktime(temp.getStartDate());
			time_t time3 = mktime(values.at(i).getEndDate());
			time_t time4 = mktime(temp.getEndDate());
			
			if(difftime(time1,time2 ) < 0 && difftime(time3,time2) > 0 )
			{
				cout<<"Cabin member 2 is already scheduled to another plane at that time"<<endl;
				return false;
			}
			
			if(difftime(time1,time4) < 0 && difftime(time3,time4) > 0 )
			{
				cout<<"Cabin member 2 is already scheduled to another plane at that time"<<endl;
				return false;
			}
		
			}
		}
	//cabin 3
	values.clear();
	a = members.searchMember(temp.getCrewThree());
	if(a.getType()!="cabin" && a.getType()!="Cabin")
	{
		cout << "Wrong role assignment"<<endl;
		return false;
	}
		check =false;
		for(int i=0; i <flights.size(); i++)
		{
			if((flights.at(i)).getCrewThree() == values.at(i).getCrewThree())
			{
				values.push_back(flights.at(i));
			}
		}
		while(values.size()>0)
		{
			for(int i=1; i <values.size(); i++)
			{
				time_t time1 = mktime(values.at(i).getStartDate());
			time_t time2 = mktime(temp.getStartDate());
			time_t time3 = mktime(values.at(i).getEndDate());
			time_t time4 = mktime(temp.getEndDate());
			
			if(difftime(time1,time2 ) < 0 && difftime(time3,time2) > 0 )
			{
				cout<<"Cabin member 3 is already scheduled to another plane at that time"<<endl;
				return false;
			}
			
			if(difftime(time1,time4) < 0 && difftime(time3,time4) > 0 )
			{
				cout<<"Cabin member 3 is already scheduled to another plane at that time"<<endl;
				return false;
			}
		
			}
		}
		
		return true;
}
void flightLog::printCrewSchedule(int crewId, crew members)
{
	crewMember person = members.searchMember(crewId);
	if(person.getType() == "Pilot" || person.getType() == "pilot" )
	{
		vector <flight> values;
		bool check =false;
		for(int i=0; i <flights.size(); i++)
		{
		
			if((flights.at(i)).getPilotId() == values.at(i).getPilotId())
			{
				values.push_back(flights.at(i));
			}
		}
		
		while(values.size()>0)
		{
			flight big =values.at(0);
			int num =0;
			for(int i=1; i <values.size(); i++)
			{
				time_t time1 = mktime(big.getStartDate());
				time_t time2 = mktime(values.at(i).getStartDate());
				if(difftime(time1,time2) < 0)
				{
				
					num =i;
					big = values.at(i);
				}
		
			}
			cout<<"Name: "<< person.getName()<< "\nID: "<<big.getPlaneId()<<endl;
			printf("Start date and time: %s\n", asctime(big.getStartDate()));
			printf("Start date and time: %s\n", asctime(big.getEndDate()));
			values.erase(values.begin()+num);
			cout<<endl;
		}
	}
	if(person.getType() == "coPilot" || person.getType() == "CoPilot" )
	{
		vector <flight> values;
		bool check =false;
		for(int i=0; i <flights.size(); i++)
		{
		
			if((flights.at(i)).getcoPilot() == values.at(i).getcoPilot())
			{
				values.push_back(flights.at(i));
			}
		}
		
		while(values.size()>0)
		{
			flight big =values.at(0);
			int num =0;
			for(int i=1; i <values.size(); i++)
			{
				time_t time1 = mktime(big.getStartDate());
				time_t time2 = mktime(values.at(i).getStartDate());
				if(difftime(time1,time2) < 0)
				{
				
					num =i;
					big = values.at(i);
				}
		
			}
			cout<<"Name: "<< person.getName()<< "\nID: "<<big.getPlaneId()<<endl;
			printf("Start date and time: %s\n", asctime(big.getStartDate()));
			printf("Start date and time: %s\n", asctime(big.getEndDate()));
			values.erase(values.begin()+num);
			cout<<endl;
		}
	}
	if(person.getType() == "cabin" || person.getType() == "Cabin" )
	{
		vector <flight> values;
		bool check =false;
		for(int i=0; i <flights.size(); i++)
		{
		
			if((flights.at(i)).getCrewOne() == values.at(i).getCrewOne())
			{
				values.push_back(flights.at(i));
			}
			if((flights.at(i)).getCrewTwo() == values.at(i).getCrewTwo())
			{
				values.push_back(flights.at(i));
			}
			if((flights.at(i)).getCrewThree() == values.at(i).getCrewThree())
			{
				values.push_back(flights.at(i));
			}
		}
		
		while(values.size()>0)
		{
			flight big =values.at(0);
			int num =0;
			for(int i=1; i <values.size(); i++)
			{
				time_t time1 = mktime(big.getStartDate());
				time_t time2 = mktime(values.at(i).getStartDate());
				if(difftime(time1,time2) < 0)
				{
				
					num =i;
					big = values.at(i);
				}
		
			}
			cout<<"Name: "<< person.getName()<< "\nID: "<<big.getPlaneId()<<endl;
			printf("Start date and time: %s\n", asctime(big.getStartDate()));
			printf("Start date and time: %s\n", asctime(big.getEndDate()));
			values.erase(values.begin()+num);
			cout<<endl;
		}
	}
}