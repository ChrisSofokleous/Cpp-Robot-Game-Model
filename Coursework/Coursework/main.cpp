//
//  main.cpp
//  Coursework
//
//  Created by Christopher Sofokleous on 14/11/2018.
//  Copyright © 2018 Christopher Sofokleous. All rights reserved.
//

#include <iostream>
#include "robot.h"

using namespace std;

int main() {
    robot r("Dave");
    
    r.move_north();
    r.move_north();
    r.move_north();
    r.move_east();
    r.move_south();
    
    cout << "Name: " << r.name() << "\n";
    cout << "N: " << r.north() << "\n";
    cout << "E: " << r.east() << "\n";
    cout << "Trav: " << r.travelled() << "\n";
    cout << "Dist: " << distance(r) << "\n";
    
    return 0;
}


