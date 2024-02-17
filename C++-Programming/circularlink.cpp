#include <iostream>

struct Node {
int data;
Node* next;
// Constructor
Node(int value) : data(value), next(nullptr) {}
// Destructor
~Node() {
// Note: Destructor for each node is
 // responsible for freeing its memory,
// but in the main function, we'll iterate and
// delete nodes explicitly.
}
};

CircleList::CircleList() : cursor(NULL) { }
CircleList::~CircleList() { while (!empty()) remove(); }
// is list empty?
bool CircleList::empty() const {
return cursor == NULL;
}
// element at cursor
const Elem& CircleList::back() const {
return cursor->elem;
}
// element following cursor
const Elem& CircleList::front() const {
return cursor->next->elem;
}
// advance cursor
void CircleList::advance() {
cursor = cursor->next;
}

void insertAfterCursor(Node*& head, int cursorValue,
int newValue) {
if (!head) {
// Empty list, can't insert after cursor
return;
}
Node* cursor = head;
do {
if (cursor->data == cursorValue) {
// Found the cursor node
Node* newNode = new Node(newValue);
newNode->next = cursor->next;
cursor->next = newNode;
return;
}
cursor = cursor->next;
} while (cursor != head);
// Cursor not found in the list
std::cout << "Cursor not found in the circular linked list." << std::endl;
} 

void removeAfterCursor(Node*& head, int cursorValue) {
if (!head || !head->next) {
// Empty list or a list with a single node, can't remove
after cursor
return;
}
Node* cursor = head;
do {
if (cursor->data == cursorValue) {
// Found the cursor node
Node* nodeToRemove = cursor->next;
if (nodeToRemove == head) {
// If the node to remove is the head, update the
head
head = nodeToRemove->next;
}
cursor->next = nodeToRemove->next;
delete nodeToRemove;
return;
}
cursor = cursor->next;
} while (cursor != head);
std::cout << "Cursor not found in the circular linked list." << std::endl;
} 
