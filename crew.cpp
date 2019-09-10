#include <iostream>
#include <string> 
#include "crew.h"
using namespace std;

crew::crew()
{
	count =0;
}

void crew::addMember(crewMember person)
{
	members.push_back(person);
}
void crew::editMember(int id)
{
	bool check =false;
	for(int i=0; i < members.size(); i++)
	{
		
		if((members.at(i)).getId() == id)
		{
			
			
			while (check == false)
			{
				cout<<"Which of the following information do you want to edit\n1. Name\n2. Satatus?\n(choose the option number"<<endl;
				int opt;
				cin >> opt;
			
				if(opt == 1)
				{
					cout<<"Enter the new value"<<endl;
					string str; 
					getline(cin,str);
					(members.at(i)).setName(str);
					check = true;
				}
				else if(opt == 2)
				{
					cout<<"Enter the new valuec((avaliable, leave, sick)"<<endl;
					string str; 
					getline(cin,str);
					(members.at(i)).setStatus(str);
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
void crew::deleteMember(int id)
{
	bool check =false;
	for(int i=0; i < members.size(); i++)
	{
		
		if((members.at(i)).getId() == id)
		{
			members.erase(members.begin() + i);
			check = true;
		}
	}
	if(check == false)
	{
		cout<<"No Member found with id: "<<id<<endl;
	}
}
crewMember crew::searchMember( int id)
{
	bool check =false;
	for(int i=0; i < members.size(); i++)
	{
		
		if((members.at(i)).getId() == id)
		{
			
			return(members.at(i));
			
		}
	}
		cout<<"No Memeber found with id: "<<id<<endl;
	
}
void crew::printAll()
{
	for(int i=0; i < members.size(); i++)
	{
		cout<< "Id: "<< members.at(i).getId()<<"\tName: "<<	members.at(i).getName()<<endl;
	}
}
void crew::printMember(int id)
{
	for(int i=0; i < members.size(); i++)
	{
		if((members.at(i)).getId() == id)
		{
			
			cout<< "Id: "<< members.at(i).getId()<<"\nName: "<<	members.at(i).getName()<<"\nType: "<<	members.at(i).getType()<<"\nStatus: "<<	members.at(i).getStatus()<<"\n"<<	members.at(i).getOther()<<endl;
			return;
			
		}
		
	}
}