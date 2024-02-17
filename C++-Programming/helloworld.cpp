#include <iostream>

int main(){
 
 std::string name;
 
 int age;
 std::cout << "What's ur name? :";
 // for input with white spaces
 std::getline(std::cin >> std::ws, name);
 //std::cin >> name;
 std::cout << "Hello " << name << '\n';

 std::cout << "What's your age? ";
 std::cin >> age;
 std::cout << "ur so old lol";

 
}  