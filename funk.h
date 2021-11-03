#include "molorak1.h"

void Molorak::setName()
{
	std::cout << "enter name : \n";
	std::cin >> name;
	
}
void Molorak::setDistania()
{
	std::cout << "enter distantia : \n";
	std::cin >> distantia;
	
	
}
int Molorak::setRadius()
{
	std::cout << "enter radius : \n";
	std::cin >> radius;
	
	return radius;
}
int Molorak::setMassa()
{
	std::cout << "enter massa : \n";
	std::cin >> massa;
	
	return massa;
}
void Molorak::setG()
{
	azatg = 0.0000000000667*(massa / radius / radius);
	
}
int Molorak::getG()
{
	std::cout << azatg << std::endl;
	return 0;
}
void Molorak::getName()
{
	std::cout << " name is : " << name << std::endl;
}
int Molorak::getDistantia()
{
	std::cout << " distantia is : " << distantia << std::endl;
	return 0;
}