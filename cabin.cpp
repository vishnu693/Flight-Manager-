#include "cabin.h"

cabin::cabin()
{
	location ="";
}
void cabin::setLocation(string str)
{
	location = str;
}	
string cabin::getLocation()
{
	return  location;
}