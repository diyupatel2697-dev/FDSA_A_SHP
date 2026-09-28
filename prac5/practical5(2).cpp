#include <iostream>
using namespace std;

struct Node {
    int id;
    Node* next;
    Node(int val) : id(val), next(NULL) {}
};

void insertEnd(Node*& head, int id) {
    Node* newNode = new Node(id);
    if (!head) {
        head = newNode;
        newNode->next = head;
        return;
    }
    Node* temp = head;
    while (temp->next != head) temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}

void deleteByValue(Node*& head, int id) {
    if (!head) return;
    if (head->id == id && head->next == head) { // only one node
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    Node* prev = NULL;
    do {
        if (temp->id == id) {
            if (prev) prev->next = temp->next;
            if (temp == head) head = head->next;
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    } while (temp != head);
}

void display(Node* head) {
    if (!head) { cout << "Circle empty\n"; return; }
    Node* temp = head;
    do {
        cout << temp->id << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    Node* circle = NULL;
    cout << "Singly Circular Linked List\n";

    insertEnd(circle, 1);
    insertEnd(circle, 2);
    insertEnd(circle, 3);
    insertEnd(circle, 4);
    insertEnd(circle, 5);
    cout << "Circle after joins: ";
    display(circle);

    deleteByValue(circle, 2);
    cout << "After student 2 leaves: ";
    display(circle);

    return 0;
}
