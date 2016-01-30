//SquareCircle.cpp
#include <math.h>
#include <iostream>
using namespace std;

unsigned long long int RADIUS = 1000;

bool inCircle(int i, int j)
{
	return pow(i, 2) + pow(j, 2) <= pow(RADIUS, 2) //Pythagorean Theorem
}

int areaCircle()
{
	//All methods should keep the origin in the top left, in the bottom right quadrant
	unsigned long long int counter = 0 
	//Method 1: original method.
	
	for(int j = 1; j <= RADIUS; i++)
	{
		for(int i = RADIUS; i > 0; i--)
		{
			if(inCircle(i, j)):
				area += i;
				j++;
		}
	}
	unsigned long long int area = (4*RADIUS) + (4*counter) + 1;
	return area;
}

int main()
{
	return 0; //The usual
}
