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
    int num_robots() const;
    void move(const std::string &name, int dir);
    int num_close() const;
    int max_distance() const;
    std::string furthest() const;
    std::vector<robot> robots_by_travelled() const;
    
    
};

#endif /* game_h */
