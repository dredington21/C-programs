#include <iostream>

int main(){

std :: string name;

std :: cout << "Enter your name?";
std ::getline(std::cin, name);
/*
if(name.length() > 12){
    std::cout << "Your name can't be greater than 12 characters";
}
else {
    std::cout << "Welcome " << name;
}
*/
/*
if (name.empty() ){
    std::cout << "You didn't enter anything \n";
}
else {
    std:: cout << "Hello" << name;
}
*/
name.clear();
name.append("@gmail.com");
name.insert(0,"@");
name.erase(0,3);
std:: cout << "Hello" << name;
std:: cout << name.at(0);
std:: cout << name.find(' ');

    // foreach loop = loop that eases the traversal over an 
    //                            iterable data set

    int grades[] = {65, 72, 81, 93};

    for(int grade : grades){
        std::cout << grade << '\n';
    }

   // fill() = Fills a range of elements with a specified value
    //            fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

    for(std::string food : foods){
        std::cout << food << '\n';




return 0;
} 