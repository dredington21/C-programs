#include <iostream>
using namespace std;

int main(){
    string s1 = "hello";
    string s2 = "students"; 
    s1 += s1 + s2[0] + s1; 
    cout << s1;
}