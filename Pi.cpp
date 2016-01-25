#include <iostream>
#include <fstream>
#include <ctime>
#include <math.h>
using namespace std;

int main()
{
	double r; // the radius of the circle
	uint64_t counter = 0;
	double distance = 0;
	ofstream file;
    file.open ("Pi.txt", ios::in);
    int start, end;
    cin >> start >> end;
	for(int k = start; k <= end; k++)
	{
		r = k;
		for (double i = 1; i <= r - 1; i++) // the x value
		{
			for(double j = 0; j <= r; j++) // the y value
			{
				distance = sqrt(pow(i, 2) + pow(j, 2));
				if(distance <= r) //if the distance from the origin is <= radius
					counter++; //add 1 to the area
				else
					continue;
			}
		}
		file << (counter * 4 + 1); // *4 for the 4 quadrants, + 1 for the origin, and divide by r^2 (A=πr^2, so π = A / r^2)
		file << ("\n");
		counter = 0;
	}
	file.close();
	return 0; //the usual
}

