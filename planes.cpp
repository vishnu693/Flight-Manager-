#include <iostream>
#include <string> 
#include "planes.h"
using namespace std;

planes::planes()
{
	count =0;
}
void planes::addPlane(plane aircraft)
{
	aircrafts.push_back(aircraft);
}
void planes::editPlane(string id)
{
	
	bool check =false;
	for(int i=0; i < aircrafts.size(); i++)
	{
		
		if((aircrafts.at(i)).getTailNumber() == id)
		{
			
			
			while (check == false)
			{
				cout<<"Which of the following information do you want to edit\n1. Make\n2. Model\n3. Tail Number\n4. Number of seats\n.5 Range\n6. Status?\n(choose the option number"<<endl;
				int opt;
				cin >> opt;
			
				if(opt == 1)
				{
					cout<<"Enter the new value"<<endl;
					string str; 
					getline(cin,str);
					(aircrafts.at(i)).setMake(str);
					check = true;
				}
				else if(opt == 2)
				{
					cout<<"Enter the new value"<<endl;
					int num;
					cin >> num;
					(aircrafts.at(i)).setModel(num);
					check = true;
				}
				else if(opt == 3)
				{
					cout<<"Enter the new value"<<endl;
					string str; 
					getline(cin,str);
					(aircrafts.at(i)).setTailNumber(str);
					check = true;
				}
				else if(opt == 4)
				{
					cout<<"Enter the new value"<<endl;
					int num;
					cin >> num;
					(aircrafts.at(i)).setSeats(num);
					check = true;
				}
				else if(opt ==5 )
				{
					cout<<"Enter the new value"<<endl;
					int num;
					cin >> num;
					(aircrafts.at(i)).setRange(num);
					check = true;
				}
				else if(opt == 6)
				{
					cout<<"Enter the new value"<<endl;
					string str; 
					getline(cin,str);
					(aircrafts.at(i)).setStatus(str);
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
void planes::deletePlane(string id)
{
	bool check =false;
	for(int i=0; i < aircrafts.size(); i++)
	{
		
		if((aircrafts.at(i)).getTailNumber() == id)
		{
			aircrafts.erase(aircrafts.begin() + i);
			check = true;
		}
	}
	if(check == false)
	{
		cout<<"No plane found with id: "<<id<<endl;
	}
}
plane planes::searchMember( string id)
{
	bool check =false;
	for(int i=0; i < aircrafts.size(); i++)
	{
		
		if((aircrafts.at(i)).getTailNumber() == id)
		{
			return aircrafts.at(i);
			check = true;
		}
	}
	if(check == false)
	{
		cout<<"No plane found with id: "<<id<<endl;
	}
}
void planes::printAll()
{
	for(int i=0; i < aircrafts.size(); i++)
	{
		cout<< "Tail Number: "<<	aircrafts.at(i).getTailNumber()<<"\tMake: "<<	(aircrafts.at(i)).getMake()<<endl;
	}
}
void planes::printPlanes(string id)
{
	for(int i=0; i < aircrafts.size(); i++)
	{
		if((aircrafts.at(i)).getTailNumber() == id)
		{
			
			cout<< "Make: "<<	(aircrafts.at(i)).getMake()<<"\nModel: "<<	aircrafts.at(i).getModel()<<"\nTail Number: "<<	aircrafts.at(i).getTailNumber()<<"\nNumber of seats: "<<	aircrafts.at(i).getSeats()<<"\nRange: "<<	aircrafts.at(i).getRange()<<"\nStatus: "<<	aircrafts.at(i).getStatus()<<endl;
			cout<<endl;
			return;
			
		}
		
	}
}