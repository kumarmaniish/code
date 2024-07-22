// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


void insertAtFirst(Node*& head, int x) {
    Node* newNode = new Node(x);
    newNode->next = head;
    head = newNode;
}

void insertAtIndex(Node* &head, int data, int index){
    
    Node* newNode = new Node(data);
    Node* temp = head;
    
    if(head==nullptr)
    head=newNode;
    
    for(int i=0; i<index-1; i++){
        temp=temp->next;
    }
    
    newNode->next=temp->next;
    temp->next=newNode;
    
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "None" << endl;
}

int main() {
    Node* head = NULL; // Initialize an empty list

    insertAtFirst(head, 3);
    insertAtFirst(head, 2);
    insertAtFirst(head, 1);
    insertAtIndex(head,3,1);

    printList(head); // Should print: 1 -> 2 -> 3 -> None

    return 0;
}