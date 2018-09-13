//class implementation
#include "Data.h"

Data::Data ()
	{
		x=0;
		y=0.0;
	}
	
Data::Data (int a, float b)
	{
		x=a;
		y=b;
	}

void Data::setX (int a)
	{
		x=a;
	}
	
int Data::getX ()
	{
		return x;
	}

void Data::setY (float b)
	{
		y=b;
	}

float Data::getY ()
	{
		return y;
	}
	

	

			
