//
//  game.cpp
//  Coursework
//
//  Created by Christopher Sofokleous on 14/11/2018.
//  Copyright © 2018 Christopher Sofokleous. All rights reserved.
//

#include "game.h"
#include "robot.h"
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// creates a map to be populated with robots
map<const string,robot> robots;

// constructor
game::game(){};

//returns the number of robots in the map
int game::num_robots() const {
    return (robots.size());
}

//moves the robot specified by its name in a direction set by the 'dir' variable
//if no robot is found with name, a new robot is created, and then moved
void game::move(const string &name, int dir){
    if (robots.count(name) != 0) {
        if (dir == 0) {
            // move north
            robots.at(name).move_north();
        } else if (dir == 1) {
            //move east
            robots.at(name).move_east();
        } else if (dir == 2) {
            //move south
            robots.at(name).move_south();
        } else if (dir == 3) {
            //move west
            robots.at(name).move_west();
        }
    } else {
        cout << "robot not found, creating new\n";
        robot _robot(name);
        robots.emplace(name, _robot);
        move(name, dir);
    }
}

//returns the number of robots within 10 steps of the origin
int game::num_close() const {
    int count = 0;
    for (auto elem : robots){
        if (abs(elem.second.east()) <= 10) {
            if (abs(elem.second.north()) <=10){
                count++;
            }
        }
    }
    return count;
}

//returns the furthest distance from the origin of any robot in the map
int game::max_distance() const {
    int furthest = 0;
    for (auto elem : robots){
        if (distance(elem.second) > furthest) {
            furthest = distance(elem.second);
        }
    }
    return furthest;
}

//returns the name of the robot furthest away from the origin
string game::furthest() const {
    int furthest = 0;
    string name;
    for (auto elem : robots){
        if (distance(elem.second) > furthest) {
            furthest = distance(elem.second);
            name = elem.first;
        }
    }
    return name;
}

//returns a vector of robots sorted in ascended order by distance travelled
vector<robot> game::robots_by_travelled() const {
    vector<robot> robots_vec;
    for (auto elem : robots){
        robots_vec.push_back(elem.second);
    }
    sort(robots_vec.begin(), robots_vec.end());
    return robots_vec;
}
