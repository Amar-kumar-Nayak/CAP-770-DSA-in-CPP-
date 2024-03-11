#include <iostream>
using namespace std;
int stack[100], n = 100, top = -1, count = 0;
void push(int val)
{
    if (top >= n - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = val;
        cout << "Inserted Successfully!!:)" << endl;
    }
}
void pop(int val)
{
    if (top <= -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            if (stack[i] == val)
            {
                count++;
                for (int j = i; j < top; j++)
                {
                    stack[j] = stack[j + 1];
                }
                top--;
            }
        }
        if (count>0)
        {
            cout << "Deleted Successfully!!:)" << endl;  
        }
        else{
            cout<<"Element not found:("<<endl;
        }
        
    }
}
void display()
{
    if (top <= -1)
    {
        cout << "Please enter any value first" << endl;
    }
    else
    {
        cout << "\nElements of stack are: ";
        if (count > 0)
        {
            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << " ";
            }
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int ch, val;
    cout << "Choose the option:" << endl;
    cout << "PRESS 1 => To insert into stack" << endl;
    cout << "PRESS 2 => To delete from stack" << endl;
    cout << "PRESS 3 => To display the stack" << endl;
    cout << "PRESS 4 => Exit()" << endl;
    do
    {
        cout << "Enter the option number: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value you want to insert: ";
            cin >> val;
            push(val);
            break;
        case 2:
            cout << "Enter the value you want to delete: ";
            cin >> val;
            pop(val);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid Option!!";
            break;
        }
    } while (ch != 4);
    return 0;
}
