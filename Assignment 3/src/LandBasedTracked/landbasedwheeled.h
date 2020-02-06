//!Group 10 - RWA3
//! \file landbasedwheeled.h

#pragma once
#include<iostream>

//!Including basic LandBasedRobot header file.
#include "landbasedrobot.h" 
#include <string>

namespace rwa3 //!Defining common namespace rwa3.
{
class LandBasedWheeled : public LandBasedRobot //!Creating LandBasedWheeled class by deriving from existing LandBasedRobot class.
{
	public:        
        //!Constructor of wheeled land based robot with name, coordinates, number and type of wheels.
		LandBasedWheeled(std::string, int, int, int wheel_number=0,std::string wheel_type="");
		
		//!Copy constructor.
		LandBasedWheeled(const LandBasedWheeled& s): LandBasedRobot{*s.wheel_type_}{
//			std::cout<<"This is the LandBasedWHEELED's <<COPY>> CONSTRUCTOR \n"<<std::endl;
		}
        
		//!Accessors or Getters.
		//!Accessors for pointer of wheel type. Returns wheel type.
		std::string* get_wheel_type() const{
			return wheel_type_; //Returns wheel type.
		};
        
		//!Accessor for wheel number. Returns number of wheels.
		int get_wheel_number() const{
			return wheel_number_; //Returns number of wheels
		}
        
		//Setters.
		//Setter for wheel type pointer.
		void set_wheel_type(std::string *wheel_type){
		}
        
		//!Setter for wheel number. Assigns wheel number to Robot attribute value.
		void set_wheel_number(int wheel_number){
			wheel_number_=wheel_number; //Assigns wheel number to Robot attribute value
			return;
		}
        
		//!Function Prototyping
		
		//!The robot can increase it's speed, which is translated by the number of 
        //!cells in the maze that the robot can traverse in each step.
        void SpeedUp(int); 
		virtual void GoUp(int,int) override; //!Move robot up in the maze.
		virtual void GoDown(int, int) override; //!Move the robot down in the maze.
		virtual void TurnLeft(int, int) override; //!Move the robot left in the maze.
		virtual void TurnRight(int, int) override; //!Move the robot right in the maze.
		virtual void PickUp(std::string) override; //!Arm picks up an object.
		virtual void Release(std::string) override; //!Arm releases an object.
        
		//!LandBasedWheeled destructor.
		virtual ~LandBasedWheeled();
		
	protected: //!Land Based Wheeled robot attributes included in protected class section.
		int wheel_number_; //!Number of wheels mounted on the robot.
		std::string* wheel_type_; //!Type of wheels mounted on the robot.
		
}; //end of LandBasedWheeled class

} //end of namespace rwa3