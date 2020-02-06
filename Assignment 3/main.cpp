//! Group 10 - RWA3
//! \file main.cpp

#include <iostream>

//!Includes Land Based Wheeled header file, Land Based Tracked header file, and Land Based Robot header file.
#include "landbasedwheeled.h" 
#include "landbasedtracked.h"
#include "landbasedrobot.h"

#include <vector>
#include <string>

//!Function prototype for FollowActionPath provided in the question;
//!Input robot type, vec for action path (directions), and object.
void FollowActionPath(rwa3::LandBasedRobot *robot, const std::vector<std::string> &vec, std::string obj);

//!Function definition for FollowActionPath provided in the question.
void FollowActionPath(rwa3::LandBasedRobot *robot, const std::vector<std::string> &vec,std::string obj){
    int x{robot->get_x()};//--should be 1 for wheeled and 2 for tracked.
    int y{robot->get_y()};//--should be 4 for wheeled and 3 for tracked.
    for (auto s: vec){
        if (s.compare("up")==0)
            robot->GoUp(x,y);
        else if (s.compare("down")==0)
            robot->GoDown(x,y);
        else if (s.compare("right")==0)
            robot->TurnRight(x,y);
        else if (s.compare("left")==0)
            robot->TurnLeft(x,y);
        else if (s.compare("pickup")==0)
            robot->PickUp(obj);
        else if (s.compare("release")==0)
            robot->Release(obj);
    }
}

int main(){

    //!Creates Land Based Wheeled robot called Husky starting point of (1,4).    
    rwa3::LandBasedRobot *wheeled = new rwa3::LandBasedWheeled("Husky",1,4); 

    //!Creates vector of class attributes to follow in wheeled class. 
    //!Results in running series of outputs of each respective method when called in wheeled class.    
    std::vector<std::string> action_path_wheeled {"up","right","pickup","left","down","release"};

    //!Calls FollowActionPath function to follow wheeled class and pick up "book".
    //!robot=wheeled; vec=action_path_wheeled; obj=book.    
    FollowActionPath(wheeled,action_path_wheeled,"book");
    
    std::cout << "--------------------------------------------------------------------\n";
    
    //!Creates Land Based Tracked robot called LT2-F with starting point of (2,3).    
    rwa3::LandBasedRobot *tracked = new rwa3::LandBasedTracked("LT2-F",2,3);    
   
    //!Creates vector of class methods to follow in tracked class.
    //!Results in output of each respective method when called in tracked class.
    std::vector<std::string> action_path_tracked {"up","left","pickup","down","right","release"};    
    
    //!Calls FollowActionPath function to follow tracked class and pick up "cube".
    //!robot=tracked; vec=action_path_tracked; obj=cube.    
    FollowActionPath(tracked,action_path_tracked,"cube");

    
    delete wheeled; //!Eliminates wheeled class.
    delete tracked; //!Eliminates tracked class.
    
    return 0;
}