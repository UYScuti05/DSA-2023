#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
struct LinkedList {
    Node* head;
    LinkedList() { head = NULL; }
 
    void reverse()
    {
        // My soultion
        // Initializing variables
        Node* current = head;
        Node* previous = NULL;

        Node* temp;
        while(current!=NULL){
            temp = current;
            current = temp->next;
            temp->next = previous;
            previous = temp;
        }
        head = previous;
    }
 
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
 
int main()
{
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);

    ll.push(100);
    ll.push(102);
    ll.push(105);
    ll.push(108);
    cout << "Given linked list\n";
    ll.print();
 
    ll.reverse();
 
    cout << "\nReversed linked list \n";
    ll.print();
    return 0;
}