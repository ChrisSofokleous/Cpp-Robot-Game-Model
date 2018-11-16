//
//  robot.hpp
//  Coursework
//
//  Created by Christopher Sofokleous on 14/11/2018.
//  Copyright © 2018 Christopher Sofokleous. All rights reserved.
//

#ifndef robot_h
#define robot_h
#include <string>

class robot {
    //stores the name of the robot
    std::string n;
    
    //stores the origin points
    int originX = 0;
    int originY = 0;
    
    //stores the position of the robot
    int posX = originX;
    int posY = originY;
    
    //stores the number of steps and travelled. used in the travelled() method
    int travelledDist = 0;
    
public:
    //This bool operator is used in the robots_by_travelled() method, to compare robots with eachother while sorting the robots
    bool operator< (const robot &other) const {
        return travelled() < other.travelled();
    }
    //constructor
    explicit robot(const std::string &n);
    
    //these methods move the robots around the grid
    void move_north();
    void move_south();
    void move_east();
    void move_west();
    
    //returns the name of the robot
    const std::string &name() const {return n;} ;
    
    //returns how far north or east the robot is from the origin
    int north() const;
    int east() const;
    
    //returns the number of steps the robot has travelled
    int travelled() const;
};

//returns the distance between the robot and the origin
int distance(const robot &r);

#endif /* robot_h */

