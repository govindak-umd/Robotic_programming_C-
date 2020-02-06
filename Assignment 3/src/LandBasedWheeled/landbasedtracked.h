//! \file landbasedtracked.h

#pragma once
#include <iostream>

//!Includes basic Land Based Robot header file needed to create derived classes.
#include "landbasedrobot.h" 
#include <string>

namespace rwa3 //!Defines common rwa3 namespace.
{
class LandBasedTracked : public LandBasedRobot //!Creates LandBasedTracked class by deriving from basic LandBasedRobot class.
{
	public:
		//!Constructor for LandBasedTracked robot using LandBasedRobot as derived object.
		LandBasedTracked(std::string, int, int, std::string track_type="");
		
		//!Copy constructor.
		LandBasedTracked(const LandBasedTracked& s): LandBasedRobot{*s.track_type_}{
//			std::cout<<"This is the LandBasedTRACKED's <<COPY>> CONSTRUCTOR \n"<<std::endl;
			}

		//!Getter for track type pointer.
		std::string* get_track_type() const{
			return track_type_; //!Returns track type
		};
		//!Setter for track type pointer.
		void set_track_type(std::string *track_type){
		}
        
		//!Function Prototyping.
		virtual void GoUp(int,int) override; //!Move robot up in the maze.
		virtual void GoDown(int, int) override; //!Move the robot down in the maze.
		virtual void TurnLeft(int, int) override; //!Move the robot left in the maze.
		virtual void TurnRight(int, int) override; //!Move the robot right in the maze.
		virtual void PickUp(std::string) override; //!Arm picks up an object.
		virtual void Release(std::string) override; //!Arm releases an object.
		
        //!Destructor.
		virtual ~LandBasedTracked(); //!Destructor of LandBasedTracked class.
		
	protected:
		std::string* track_type_; //! Defining type of track mounted on the robot under protected attributes.
        
};//End of the LandBasedTracked class.
}//End of namespace rwa3.