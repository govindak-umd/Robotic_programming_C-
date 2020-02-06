//! \file landbasedwheeled.cpp

#include "landbasedwheeled.h" //!Includes LandBasedWheeled header file.

//! Constructor Implementation for LandBasedWheeled
rwa3::LandBasedWheeled::LandBasedWheeled(std::string name, int x, int y, int wheel_number, std::string wheel_type)
: LandBasedRobot(name, x, y), wheel_number_{wheel_number}{
//	std::cout << "LandBasedWheeled::LandBasedWheeled is called\n";
	wheel_type_ = new std::string;
	*wheel_type_ = wheel_type;
}

void rwa3::LandBasedWheeled::GoUp(int x, int y){ //!X and Y positions are pulled to Up function.
	std::cout<<"LandBasedWheeled::GoUp is called"<<std::endl; //!When up is called, cout output is activated identifying GoUp.
}
void rwa3::LandBasedWheeled::GoDown(int x,int y) //!X and Y positions are pulled to Down function.
{
	std::cout<<"LandBasedWheeled::GoDown is called"<<std::endl;  //!When down is called, cout output is activated identifying GoDown.
}
void rwa3::LandBasedWheeled::TurnLeft(int x,int y) //!X and Y positions are pulled to Left function.
{
	std::cout<<"LandBasedWheeled::TurnLeft is called"<<std::endl;  //!When left is called, cout output is activated identifying TurnLeft.
}
void rwa3::LandBasedWheeled::TurnRight(int x,int y) //!X and Y positions are pulled to Right function.
{
	std::cout<<"LandBasedWheeled::TurnRight is called"<<std::endl;  //!When right is called, cout output is activated identifying TurnRight.
}
void rwa3::LandBasedWheeled::PickUp(std::string name) //!Robot name is pulled to PickUp function.
{
	std::cout<<"LandBasedWheeled::PickUp is called"<<std::endl; //!When pickup is called, cout output is activated identifying PickUp.
}
void rwa3::LandBasedWheeled::Release(std::string name) //!X and Y positions are pulled to Right function.
{
	std::cout<<"LandBasedWheeled::Release is called"<<std::endl; //!When Release is called, cout output is activated identifying Release.
}

//! FUCNTION ONLY IN LANDBASEDWHEELED.
void rwa3::LandBasedWheeled::SpeedUp(int){ //! Speed increase int value is pulled to SpeedUp function.
	std::cout<<"LandBasedWheeled::SpeedUp is called"<<std::endl; //!When SpeedUp is called, cout output is activated to identify SpeedUp.
}

rwa3::LandBasedWheeled::~LandBasedWheeled()
{
	delete wheel_type_;
//	std::cout << "LandBasedWheeled::~LandBasedWheeled is called\n";
}