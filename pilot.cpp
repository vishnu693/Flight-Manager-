#include "pilot.h"
#include "crewMember.h"

pilot::pilot()
{
	ratingCode = "";
	hours =0;
}
void pilot::setRating(string Rating)
{
	ratingCode = Rating;
}
string pilot::getRating()
{
	return ratingCode;
}