#include <iostream>
using namespace std;

enum mealPref{ NONE , Vegetarian, Carnivore, LowFat};

struct passenger{
std::string name; 
mealPref meal;
bool freqflyer;
std::string freqFlyerNo;
};
void print (const passenger& pass){
cout << pass.name << "" << pass.meal;
if( pass.freqflyer)
cout << " " << pass.freqFlyerNo;
}
bool operator == (const passenger &x, const passenger &y){
return x.name == y.name 
&& x.meal == y.meal
&& x.freqflyer == y.freqflyer
&& x. freqFlyerNo == y.freqFlyerNo;
}
int main(){
 passenger John = {"John", Vegetarian, true, "12345"};
 std::cout << John.name;

 passenger *p;
 p = new passenger;
p->name = "tyler";
p -> meal = Carnivore;
p-> freqflyer = false;
p -> freqFlyerNo = "69";
delete p;
}

