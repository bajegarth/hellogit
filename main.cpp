#include <iostream>
#include <vector>
#include "Data.h"

using namespace std;

int main ()
	{
		vector <Data> v;
		
		v.push_back({7,21.01});
		
		Data d;
		
		v.push_back(d);
		
		d.setX(10);
		
		d.setY(12.10);
		
		v.push_back(d);
	
	}
		
