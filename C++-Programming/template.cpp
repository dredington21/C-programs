#include <iostream>

template <typename T>
T genericMin (T a, T b){
    return ( a < b ? a : b);
}

template <typename T1, typename T2>
class Pair {
    public:
    Pair(T1 first, T2 second) : firstValue(first), seconValue(second){}
    void display()const{
        std:: cout << "Pair: (" << firstValue << "," << secondValue << ")\n";
    }
    private: 
    T1 firstValue;
    T2 secondValue;
};

int main (){
std::cout << genericMin(3,4) << ' ' << genericMin(1.1, 3.1) << ' ' << genericMin('t', 'g') << std::endl;

}

