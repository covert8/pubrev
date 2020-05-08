//
//  main.cpp
//  pubrev
//
//  Created by Tristan Vandevelde on 04/05/2020.
//  Copyright © 2020 Tristan Vandevelde. All rights reserved.
//

#include <iostream>
#include <string>

class Person {
private:
	int id;
public:
	std::string firstName;
	std::string lastName;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
	Person testPerson;
    return 0;
}
