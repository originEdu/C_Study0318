#include<iostream>

using namespace std;

class Image
{
public:
	int X = 0;
	int Y = 0;
	int R = 0;
	int G = 0;
	int B = 0;
};


int main()
{
	Image* CarImage = new Image[14];
	
	int index = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			CarImage[index].X = i;
			CarImage[index].Y = j;
			index++;
		}
	}
	
	delete[] CarImage;
	
	return 0;
}