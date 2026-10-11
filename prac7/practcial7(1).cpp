#include <iostream>
using namespace std;

const int MAX = 5;

int queueArr[MAX];
int front = -1;
int rear = -1;

void join(int value)
{
    if (rear == MAX - 1)
    {
        cout << "Queue is FULL\n";
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queueArr[rear] = value;
    cout<<"Rear: "<<queueArr[rear]<<endl;
}

void serve()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is EMPTY\n";
        return;
    }

    cout << "Served: " << queueArr[front] << endl;
    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}

void displayFront()
{
    if (front == -1)
        cout << "Queue is EMPTY\n";
    else
        cout << "Front: " << queueArr[front] << endl;
}

int main()
{
    join(101);
    displayFront();

    join(102);
    displayFront();

    join(103);
    displayFront();

    serve();
    displayFront();

    join(104);
    displayFront();

    return 0;
}
