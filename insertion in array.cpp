#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n, pos, value;
    cout << "Enter the size of the array: ";
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cout << "Enter the value " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "\nEnter the position where you want to insert the value: ";
    cin >> pos;
    cout << "Enter the value which you want to inster: ";
    cin >> value;
    for (size_t i = n; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = value;

    n += 1;
    cout << "\nThis is your updated array........" << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
