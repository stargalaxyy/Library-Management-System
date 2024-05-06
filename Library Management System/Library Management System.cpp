// Library Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {}
    void walk(){}
};

class Cat : public Animal{
public:
    void talk() { cout << "Miaaaw" << endl; }
};

class Dog : public Animal {
public:
    void talk() { cout << "Woof" << endl; }
};

class Dino : public Animal {
public:
    void talk() { cout << "Haaaw" << endl; }
};

int main()
{
    Dog d;
    Cat c;
    Dino di;

    d.eat();
    c.talk();
    cout << "Hello from github!!" << endl;
  
}



// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
