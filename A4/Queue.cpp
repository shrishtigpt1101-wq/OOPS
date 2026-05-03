 /* WOOP to Implement Linear Queue FIFO */

#include <iostream>
#include <cstdlib>
using namespace std;
#define max 10

class Queue
{
    int q[max];
    int front, rear;
public:
    void initialization()
    {
        front = rear = -1;
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is full\n";
            return;
        }

        if (front == -1)   // first insertion
            front = 0;
        rear++;
        q[rear] = x;
        cout << "Element inserted\n";
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Deleted element: " << q[front] << endl;

        if (front == rear)     // last element removed
            front = rear = -1;
        else
            front++;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements:\n";
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
        cout << endl;
    }

    int isEmpty()
    {
        return (front == -1);
    }

    int isFull()
    {
        return (rear == max - 1);
    }
};

int main()
{
    Queue q;
    q.initialization();

    int choice, x;

    while (1)
    {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> x;
            q.enqueue(x);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            exit(0);

        default:
            cout << "Invalid choice!!!\n";
        }
    }
    return 0;
}
