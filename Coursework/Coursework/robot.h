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
    
    std::string n;
    
public:
    explicit robot(const std::string &n);
    void move_north();
    void move_south();
    void move_east();
    void move_west();
    const std::string &name() const {return n;} ;
    int north() const;
    int east() const;
    int travelled() const;
};

int distance(const robot &r);

#endif /* robot_h */

