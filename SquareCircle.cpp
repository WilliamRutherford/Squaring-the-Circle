//SquareCircle.cpp

bool inCircle(int radius, int i, int j)
{
	return pow(i, 2) + pow(j, 2) <= pow(radius, 2)
}

int areaCircle(int radius)
{
	//All methods should keep the origin in the top left, in the bottom right quadrant
	unsigned long long int counter = 0 
	//Method 1: original method.
	
	for(int j = 1; j <= radius; i++)
	{
		for(int i = radius; i > 0; i--)
		{
			if(inCircle(radius, i, j)):
				area += i;
				j++;
		}
	}
	unsigned long long int area = (4*radius) + (4*counter) + 1;
	return area;
}

int main()
{
	return 0; //The usual
}