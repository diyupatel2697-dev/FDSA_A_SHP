#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

void insertFront(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertEnd(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

void insertAtPosition(Node*& head, int val, int pos) {

    // Position 0 means insert at front
    if (pos == 0) {
        insertFront(head, val);
        return;
    }

    // Invalid negative position
    if (pos < 0) {
        cout << "Error: Invalid position!" << endl;
        return;
    }

    Node* temp = head;

    // Move to the required position
    for (int i = 0; i < pos - 1 && temp; i++) {
        temp = temp->next;
    }

    // Position is beyond the length
    if (temp == NULL) {
        cout << "Error: Position is beyond the length of the list!" << endl;
        return;
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

void printQueue(Node* head) {
    Node* temp = head;

    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    Node* head = NULL;

    cout << "Queue\n";

    insertEnd(head, 101);
    cout << "After adding routine patient 101: ";
    printQueue(head);

    insertFront(head, 201);
    cout << "After adding critical patient 201: ";
    printQueue(head);

    insertAtPosition(head, 301, 1);
    cout << "After adding priority patient 301 at position 1: ";
    printQueue(head);

    // Position 10 is beyond the length
    insertAtPosition(head, 401, 10);
    cout << "After trying to add patient 401 at position 10: ";
    printQueue(head);

    return 0;
}
