#include <iostream>
#include <ostream>
#include <string>

template <typename T> class BasicVector {

public:
    BasicVector(int capactiy = 10);

    T &operator[](int i) { return a[i]; }
private:

    int capactiy;
    T *a;
};
template <typename T> BasicVector<T>::BasicVector(int capactiy) {
    this->capactiy = capactiy;
    a = new T[capactiy];
}
int main() {

    BasicVector<std::string> V;
    BasicVector<int> V2(12);
    BasicVector<double> V3(5);
    // V[9] = "hello";
    // V2[8] = "shout";
    V3[5] = 4.24;
    std::cout << V3[5] << std::endl;
return 0;
}
