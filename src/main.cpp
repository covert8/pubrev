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
	Person(std::string fName, std::string lName)
	{
		firstName = fName;
		lastName = lName;
	};
};

class Article {
private:
	int id;
public:
	std::string title;
	Article();
};

class Review {
private:
	int id;
public:
	std::shared_ptr<Person> reviewer;
	std::shared_ptr<Article> article;
	Review();
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
	Person testPerson("Tristan", "Vandevelde");
	std::cout << testPerson.firstName;
	std::cout <<"\n";
    return 0;
}
