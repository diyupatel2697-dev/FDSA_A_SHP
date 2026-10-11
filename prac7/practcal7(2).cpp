#include <iostream>
using namespace std;

struct Node
{
    string patient;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void arrive(string name)
{
    Node* newNode = new Node;
    newNode->patient = name;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

}

void attend()
{
    if (front == NULL)
    {
        cout << "Ward is EMPTY\n";
        return;
    }

    Node* temp = front;
    cout << "Attended: " << front->patient << endl;

    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

void displayFront()
{
    if (front == NULL)
        cout << "Ward is EMPTY\n";
    else
        cout << "Front patient: " << front->patient << endl;
}

int main()
{
    arrive("101 Rahul");
    displayFront();

    arrive("102 Priya");
    displayFront();

    arrive("103 Amit");
    displayFront();

    attend();
    displayFront();

    arrive("104 Neha");
    displayFront();

    return 0;
}
