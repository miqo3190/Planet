#include <iostream>
#include <string>
class Molorak
{
public:
	void setName();
	void setDistania();
	int setRadius();
	int setMassa();
	void setG();
	void getName();
	int getDistantia();
	int getG();
private:
	std::string name;
	double distantia;
	double radius;
	double massa;
	double azatg;
};