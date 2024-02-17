#include <iostream>
#include <ostream>
#include <queue>
#include <string>
#include "Vehicle.h"

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

Vehicle::Vehicle() : owner(""), years_old(-1) {}

Vehicle::Vehicle(std::string owr, int y_old) : owner(owr), years_old(y_old) {}

void Vehicle::print_info() {
    std::cout << "Owner: " << owner << std::endl;
    std::cout << "Years Old: " << years_old << std::endl;
}


int main() {
    Vehicle *v1 = new Vehicle("Bob",12);

    v1->print_info();

}
