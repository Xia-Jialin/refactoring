#include "Rental.h"

////////////////////////////////////////////////////////////
Rental::Rental(const Movie* movie, const int daysRented)
	: movie(movie), daysRented(daysRented)
{
}

////////////////////////////////////////////////////////////
int Rental::getDaysRented() const
{
	return daysRented;
}

////////////////////////////////////////////////////////////
const Movie& Rental::getMovie() const
{
	return *movie;
}

