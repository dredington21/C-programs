#include <iostream>
#include <ostream>
#include <string>

class Numbers{

public:

    Numbers(){}
    Numbers(int v1, int v2, int v3) : var1(v1), var2(v2), var3(v3){
        std::cout << "Object was made" << std::endl;
    }
    int getVar3(){return var3;}
    void printAllNums();

protected:
    void setVar3(int var){var3=var;}
    int var1;
    int var2;
private:

    
    int var3;

};

class B : public Numbers {
    B
    public:
    B(int v1, int v2, int v3){
        var1 = v1;
        var2 = v2;
        setVar3(v3);
    }
    
    void printLastTwoNums();

    
};

void Numbers::printAllNums(){
    std::cout << var1 << " " << var2 << " " << var3 << std::endl;
}

void B:: printLastTwoNums(){
    std:: cout << var2 << " " << getVar3() << std::endl;
}

int main(){

    Numbers nums(1,2,3);
    B nums2(5,6,7);

    nums.printAllNums();
    nums2.printLastTwoNums();


    return 0;
}