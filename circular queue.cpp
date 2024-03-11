#include <iostream>
#define size 20
using namespace std;
int cir_que[size];
int front = -1;
int rear = -1;
void enqueue(int val)
{
    if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
    {
        cout << "Overflow";
    }
    else if (front == -1)
    {
        front = rear = 0;
    }
    else if (rear == size - 1 && front != 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    cir_que[rear] = val;
    cout << "Inserted Successfully!!!" << endl;
}
void dequeue()
{
    if (front == -1)
    {
        cout << "Underflow" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == size - 1)
    {
        front = 0;
    }
    else
    {
        front++;
        cout << "Deleted Successfully!!" << endl;
    }
}
void display()
{
    if (front == -1)
    {
        cout << "No element found!!" << endl;
    }
    else
    {
        cout << "The circular queue: ";
        for (int i = front; i <= rear; i++)
        {
            cout << cir_que[i] << " ";
        }
        cout << "\n";
    }
}

void peek()
{
    if (front == -1)
    {
        cout << "No element found!!" << endl;
    }
    else
    {
        cout << cir_que[front] << " is on the peek" << endl;
    }
}
string isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return "> YES";
    }
    else
    {
        return "> NO";
    }
}

int main()
{
    int ch, val;
    while (true)
    {
        cout << "***************************************************" << endl;
        cout << "1 =====> Enqueue Operation" << endl;
        cout << "2 =====> Dequeue Operation" << endl;
        cout << "3 =====> Display the Queue" << endl;
        cout << "4 =====> Show Peek value" << endl;
        cout << "5 =====> Check Queue is Empty or not" << endl;
        cout << "6 =====> Exit" << endl;
        cout << "***************************************************" << endl;
        cout << "Enter the option: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> val;
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            enqueue(val);
            cout << "-----------------------------" << endl;
            break;
        case 2:
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            dequeue();
            cout << "-----------------------------" << endl;
            break;
        case 3:
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            display();
            cout << "-----------------------------" << endl;
            break;
        case 4:
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            peek();
            cout << "-----------------------------" << endl;
            break;
        case 5:
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            cout << isEmpty() << endl;
            cout << "-----------------------------" << endl;
            break;
        case 6:
            exit(0);
        default:
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            cout << "Invalid option\nEnter again\n";
            cout << "-----------------------------" << endl;
            break;
        }
    }
    return 0;
}
