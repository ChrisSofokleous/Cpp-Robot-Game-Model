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

const int originX = 0;
const int originY = 0;

int posX = originX;
int posY = originY;

int travelledDist = 0;

robot::robot(const string &n) : n(n) {
};

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

int robot::north() const{
    return (posY - originY);
}

int robot::east() const {
    return (posX - originX);
}

int robot::travelled() const {
    return travelledDist;
}

int distance(const robot &r){
    return (abs(r.north()) + abs(r.east()));
}



