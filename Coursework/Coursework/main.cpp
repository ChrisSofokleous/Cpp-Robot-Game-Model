//
//  main.cpp
//  Coursework
//
//  Created by Christopher Sofokleous on 14/11/2018.
//  Copyright © 2018 Christopher Sofokleous. All rights reserved.
//

#include <iostream>
#include "robot.h"
#include "game.h"


using namespace std;

int main() {
    game g;
    g.add_robot("dave");
    
    g.move("dave", 3);
    g.move("fred", 1);
    g.move("dave", 0);
    g.move("sarah", 2);
    g.move("sarah", 2);
    g.move("sarah", 2);
    g.move("sarah", 2);
    g.move("sarah", 2);
    g.move("sarah", 2);
    g.move("sarah", 2);
    g.move("sarah", 2);
    g.move("sarah", 2);
    g.move("sarah", 2);
    g.move("sarah", 2);
    
    
    
  
    
    g.print_all();
    
    cout << "num close: " << g.num_close() << "\n";
    cout << "max distance: " << g.max_distance() << "\n";
    cout << "furthest: " << g.furthest() << "\n";
    
    vector<robot> rob_vec = g.robots_by_travelled();
    
    
    
    //for (auto i = rob_vec.begin(); i != rob_vec.end();++i) {
        //cout << rob_vec. << '\n';
        
    //}
}


