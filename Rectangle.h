#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;



class Rectangle
{
private:
	float height;
	float width; 
	int x;
	int y; 

public:
	bool CheckCollision(Rectangle rec1, Rectangle rec2);

	
};


bool CheckCollision(Rectangle rec1, Rectangle rec2)
{
	if (rec1.x < rec2.x + rec2.width && 
		rec1.x + rec1.width > rec2.x && 
		rec2.y < rec2.y + rec2.height && 
		rec1.height + rec1.y > rec2.y)
	{
		return true; 
	}
	return false;
}
#endif