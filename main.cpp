#include <iostream>
#include <vector>
#include "Data.h"

using namespace std;

void bubbleSort(auto &v);
	

int main ()
	{
		vector <Data> v;
		
		v.push_back({7,21.01});
		
		Data d;
		
		v.push_back(d);
		
		d.setX(10);
		
		d.setY(12.10);
		
		v.push_back(d);
		
		bubbleSort(v);
		
		for (int i = 0 ; i < v.size(); i++)
			{
				cout << v[i].getX() << " ";
				cout << v[i].getY() << " ";
				cout << endl;
			}
	
	}
	
void bubbleSort(auto &v)
	{
		for (int i=0; i < v.size (); i++)
			{
				for (int j=0; j < v.size()-1; j++)
					if(v[j].getX() > v[j+1].getX())
							swap (v[j], v[j+1]);	
			}
	}
