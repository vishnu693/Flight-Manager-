#include "coPilot.h"
#include "crewMember.h"
coPilot::coPilot()
{
	ratingCode = "";
	hours =0;
}
void coPilot::setRating(string Rating)
{
	ratingCode = Rating;
}
string coPilot::getRating()
{
	return ratingCode;
}