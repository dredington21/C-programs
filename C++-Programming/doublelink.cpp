#include <iostream>

template <typename T>
struct Node {
T data;
Node* next;
Node* prev;
Node(const T& value) : data(value), next(nullptr),
prev(nullptr) {}
};

template <typename T>
class DoublyLinkedList {
private:
Node<T>* head;
public:
// Constructor
DoublyLinkedList() : head(nullptr) {}
// Destructor to free memory
~DoublyLinkedList() {
while (head) {
Node<T>* temp = head;
head = head->next;
delete temp;
}
}


void insertFront(const T& value) {
Node<T>* newNode = new Node<T>(value);
if (!head) {
head = newNode;
} else {
newNode->next = head;
head->prev = newNode;
head = newNode;
}
}

void insertBack(const T& value) {
Node<T>* newNode = new Node<T>(value);
if (!head) {
head = newNode;
} else {
Node<T>* current = head;
while (current->next) {
current = current->next;
}
current->next = newNode;
newNode->prev = current;
}
}

void removeFront() {
if (head) {
Node<T>* temp = head;
head = head->next;
if (head) {
head->prev = nullptr;
}
delete temp;
}
}

void removeBack() {
if (head) {
if (!head->next) {
// If there is only one node in the
list
delete head;
head = nullptr;
} else {
Node<T>* current = head;
while (current->next->next) {
current = current->next;
}
delete current->next;
current->next = nullptr;
}
}
}




};