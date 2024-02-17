#include <iostream>
#include <ostream>
#include <queue>
#include <string>
class Vehicle {
public:
    Vehicle(); // default constructor
    Vehicle(std::string owr, int y_old);
    virtual void print_info();
    void setOwner(std::string owner) { this->owner = owner; }

protected:
    std::string owner;
    int years_old;
};

