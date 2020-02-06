//!Group 10 - RWA3
//! \file landbasedrobot.cpp


#include "landbasedrobot.h" //!Includes basic LandBasedRobot header file for methods and attribute access.

rwa3::LandBasedRobot::LandBasedRobot(std::string name, int x, int y, double speed, double width, double length, double height, double capacity)
: name_{name}, speed_{speed}, width_{width}, length_{length}, height_{height}, capacity_{capacity}, x_{x}, y_{y}{}
//{std::cout << "LandBasedRobot::LandBasedRobot is called\n";}