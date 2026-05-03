/* WOOP to Implement Stack LIFO */

#include <iostream>
#include <cstdlib>
using namespace std;

#define max 10

class Stack
{
    int stk[max];
    int top;

public:
    void initialisation()
    {
        top = -1;
    }

    void push(int x)
    {
        if (isFull())
            cout << "Stack is full\n";
        else
        {
            top++;
            stk[top] = x;
            cout << "Element pushed successfully\n";
        }
    }

    void pop()
    {
        if (isempty())
            cout << "Stack is empty\n";
        else
        {
            cout << "Popped element: " << stk[top] << endl;
            top--;
        }
    }

    void display()
    {
        if (isempty())
            cout << "Stack is empty\n";
        else
        {
            cout << "Stack elements:\n";
            for (int i = top; i >= 0; i--)
                cout << stk[i] << " ";
            cout << endl;
        }
    }

    int isempty()
    {
        return (top == -1);
    }

    int isFull()
    {
        return (top == max - 1);
    }
};

int main()
{
    Stack s;
    s.initialisation();

    int choice, x;

    while (1)
    {
        cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> x;
            s.push(x);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.display();
            break;

        case 4:
            exit(0);

        default:
            cout << "Invalid choice!!!\n";
        }
    }
    return 0;
}
