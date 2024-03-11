#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int main()
{
    Node *head = NULL;
    int ch, data;
    while (true)
    {
        cout << "\n";
        cout << "1. Insert at First" << endl;
        cout << "2. Insert at Last" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice- ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value- ";
            cin >> data;
            insertAtHead(head, data);
            break;
        case 2:
            cout << "Enter the value- ";
            cin >> data;
            insertAtEnd(head, data);
            break;
        case 3:
            display(head);
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}
