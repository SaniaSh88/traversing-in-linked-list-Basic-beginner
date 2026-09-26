#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void traverseAndPrint(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Manually creating 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assigning data and linking them together
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr; // Last node points to nothing

    // Call traversal
    cout << "Our Linked List: ";
    traverseAndPrint(head);

    return 0;
}
