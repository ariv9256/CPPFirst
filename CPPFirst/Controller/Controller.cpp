//
//  Controller.cpp
//  CPPFirst
//
//  Created by Rivas, Angela on 1/24/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#include "Controller.hpp"


Controller :: Controller()
{
    this-> specialNumber = 123456;
}
void Controller :: start()
{
    cout << "This is inside the startmethod" << endl;
    cout <<"This is how you access a variable" << specialNumber << endl;
    cout << "Seperate chunks with the << are just like a + strings in java" << endl;
    specialNumber = 123;
    string answer;
    cout << "type in your real name" << endl;
    cin >> answer;
    cout << "youTyped: " << answer << endl;
    cout << "stuff" << answer << "wasda" << endl;
    getline(cin, answer);
}
