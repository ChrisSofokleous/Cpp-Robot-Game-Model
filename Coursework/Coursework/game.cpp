//
//  game.cpp
//  Coursework
//
//  Created by Christopher Sofokleous on 14/11/2018.
//  Copyright © 2018 Christopher Sofokleous. All rights reserved.
//

#include "game.h"
#include <string>
#include <vector>
#include <map>
#include "robot.h"

using namespace std;

map<string,robot> robots;

int game::num_robots() const {
    return (robots.size());
}

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
        //robot not found
    }
}

int game::num_close() const {
    
}


