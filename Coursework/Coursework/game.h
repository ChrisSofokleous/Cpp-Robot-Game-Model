//
//  game.hpp
//  Coursework
//
//  Created by Christopher Sofokleous on 14/11/2018.
//  Copyright © 2018 Christopher Sofokleous. All rights reserved.
//

#ifndef game_h
#define game_h
#include <string>
#include <vector>
#include "robot.h"

class game {
public:
    //constructor
    explicit game();
    //returns the number of robots in the map
    int num_robots() const;
    //moves a robot specified by name
    void move(const std::string &name, int dir);
    //returns the number of robots within 10 steps of the origin
    int num_close() const;
    //returns the furthest distance from the origin of all the robots
    int max_distance() const;
    //returns the name of the robot with the furthest distance from the origin
    std::string furthest() const;
    //returns a vector of robots sorted in ascending order by distance travelled
    std::vector<robot> robots_by_travelled() const;
};

#endif /* game_h */
