//! \file landbasedrobot.h

#pragma once
#include <iostream>
#include <string>

namespace rwa3 //! rwa3 namespace defined for all classes.
{
class LandBasedRobot //! Creating basic Land Based Robot class.
{
public: //! Public access of class methods.
    //! Accessors or Getters for position and action
    //! Accessor to get x.
    int get_x() const
    {
	return x_; //! Returns value for Robot X position.
    }
    //! Accessor to get y.
    int get_y() const
    {
	return y_; //! Returns value for Robot Y position.
    }
    //! Accessor to get name.
    std::string get_name() const
    {
	return name_; //! Returns name of the Robot.
    }
	//! Accessor to get speed.
    double get_speed() const
    {
	return speed_; //! Returns value for Robot speed.
    };
	//! Accessor to get width.
    double get_width() const
    {
	return width_; //! Returns value for Robot X width.
    };
	//! Accessor to get length.
    double get_length() const
    {
	return length_; //! Returns value for Robot X length.
    };
	//! Accessor to get height.
    double get_height() const
    {
	return height_; //! Returns value for Robot X height.
    };
	//! Accessor to get capacity.
    double get_capacity() const
    {
	return capacity_; //! Returns value for Robot X capacity.
    };

    //! Mutators or Setters for position and action.
    //! Mutator to set x.
    void set_x(int x)
    {
	x_ = x; //! Sets x value to robot attribute for x-maze position.
	return;
    }
    //! Mutator to set y.
    void set_y(int y)
    {
	y_ = y; //! Sets y to robot attribute for y-maze position.
	return;
    }
    //! Mutator to set name string.
    void set_name(std::string name)
    {
	name_ = name; //! Sets name string to robot attribute.
	return;
    }

    //! Function Prototyping.
    virtual void GoUp(int, int) = 0;       //! Move the robot up in the maze.
    virtual void GoDown(int, int) = 0;     //! Move the robot down in the maze.
    virtual void TurnLeft(int, int) = 0;   //! Move the robot left in the maze.
    virtual void TurnRight(int, int) = 0;  //! Move the robot right in the maze.
    virtual void PickUp(std::string) = 0;  //! Arm picks up an object.
    virtual void Release(std::string) = 0; //! Arm releases an object.

    //! Land Based Robot class constructor.
    LandBasedRobot(std::string name = "none",
        int x = 0,
        int y = 0,
        double speed = 0,
        double width = 0,
        double length = 0,
        double height = 0,
        double capacity = 0);

    //! Land Based Robot class destructor.
    virtual ~LandBasedRobot(){}

protected:             //! Protected access for all robot attributes.
    std::string name_; //! Name of the Robot.
    double speed_;     //! Driving speed of the Robot.
    double width_;     //! Width of the base of the Robot.
    double length_;    //! Lengh of the base of the Robot.
    double height_;    //! Height of the base of the Robot.
    double capacity_;  //! Payload of the arm.
    int x_;            //! X coordinate of the robot in the maze.
    int y_;            //! Y coordinate of the robot in the maze.

}; // End of the LandBasedRobot class
} // End of namespace rwa3