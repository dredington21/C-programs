#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void list_print(struct_node *list){
    if (list!=null){
        cout << list-> data << endl;
        list_print(list->next);
    }
}
 

 // template <Typename T> 