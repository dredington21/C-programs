#include <iostream>
#include <string>
#include <ostream>
#include <codecvt>

class Point{
public:
    Point(); // default constructor
    
    //Point(int x, int y){
    //    this ->x =x;
    //    this ->y =y;
    //};
    Point (int x, int y);

     int getX() {return x;}
    int getY() {return y;}

    void setX(int x) {this->x =x;}
    void setY(int y) {this->y =y;}

    void print();


private:
    int x;
    int y;
};

Point::Point(){
    x=0;
    y=0;
}
Point::Point(int x, int y){
    this ->x =x;
    this ->y = y;
}

void Point::print(){
    std:: cout << x << std::endl;
    std:: cout << y <<std::endl;

}
Point operator+(Point p1, Point p2){
    return Point(p1.getX() +p2.getX(), p1.getY() + p2.getY());
}
Point operator*(Point p1, Point p2){
    return Point(p1.getX() *p2.getX(), p1.getY() * p2.getY());
}

bool operator==(Point p1, Point p2){
    if (p1.getX() == p2.getX() && p1.getY() == p2.getY()){
    return true;
    }
    return false;
}

std::ostream &operator <<(std::ostream &os, Point p){
    return os << p.getX() << "," << p.getY();
}


int main(){

Point p1;
Point p2(8,9);

p1.setX(8);
p1.setY(9);


std:: cout << p1.getX() << std::endl;
std:: cout << p1.getY() <<std::endl;

std:: cout << p2.getX() << std::endl;
std:: cout << p2.getY() <<std::endl;

Point p3;
p3 = p1 * p2;

p3.print();

if (p1 ==p2 ){
    std:: cout << "They are equal" << std:: endl;
}
Point p4( 5,3);
Point *p5 = &p4;

std::cout <<"Point 4:" << p4 <<std::endl;

p4.setX(2);

std::cout << "Point 5:" << *p5 <<std::endl;

Point *p6 =  new Point(4,2);

std::cout << "Point 6:" << *p6 <<std::endl;
p6->setX(7);
std::cout << "Point 6:" << *p6 <<std::endl;

Point *p7 = new Point();
p7->setX(5);
p7->setY(6);
 
p7->print();

}