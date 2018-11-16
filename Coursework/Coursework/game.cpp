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

// created a map to be populated with robots
map<const string,robot> robots;

// constructor
game::game(){};

//TEST PURPOSES ONLY
void game::add_robot(string name) {
    robots.insert(make_pair(name, robot(name)));
}

void game::print_all() const {
    for (auto elem : robots)
    {
        cout << elem.first << "| " << "distance travelled: " << elem.second.travelled() <<
        " | north: " << elem.second.north() << " | east: " << elem.second.east() << " | distance from origin: " << distance(elem.second) << '\n';
    }
    
}



//returns the number of robots in the map
int game::num_robots() const {
    return (robots.size());
}

//moved the robot specified by its name in a direction set by the 'dir' variable
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

int game::max_distance() const {
    int furthest = 0;
    for (auto elem : robots){
        if (distance(elem.second) > furthest) {
            furthest = distance(elem.second);
        }
    }
    return furthest;
}

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


    bool compareRobot(robot i, robot j){
        return (i.travelled() < j.travelled());
    }

vector<robot> game::robots_by_travelled() const {
    vector<robot> robots_vec;
    for (auto elem : robots){
        robots_vec.push_back(elem.second);
    }
    //robots_vec.reserve(robots.size());
    
    vector<robot> robots_vect_copy = robots_vec;
    std::sort(robots_vect_copy.begin(), robots_vect_copy.end());
    return robots_vect_copy;
    
    
    //cout << "vector is populated\n";
    //sort(robots_vec.begin(), robots_vec.end(), compareRobot);

    
   //return robots_vec;
  
}

             
