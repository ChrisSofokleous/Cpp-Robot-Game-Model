//
//  robot.cpp
//  Coursework
//
//  Created by Christopher Sofokleous on 14/11/2018.
//  Copyright © 2018 Christopher Sofokleous. All rights reserved.
//

#include "robot.h"
#include <string>
#include <cstdlib>

using namespace std;

//constructor
robot::robot(const string &n) : n(n) {
};

//methods to move the robot
void robot::move_north(){
    posY++;
    travelledDist++;
}
void robot::move_south(){
    posY--;
    travelledDist++;
}
void robot::move_east(){
    posX++;
    travelledDist++;
}
void robot::move_west(){
    posX--;
    travelledDist++;
}

//returns the distance north or east the robot is from the origin
int robot::north() const{
    return (posY - originY);
}
int robot::east() const {
    return (posX - originX);
}

//returns the number of steps the robot has travelled
int robot::travelled() const {
    return travelledDist;
}

//returns the distance between the robot and the origin
int distance(const robot &r){
    return (abs(r.north()) + abs(r.east()));
}



