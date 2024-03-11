#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n], val;
    for (size_t i = 0; i < n; i++)
    {
        cout << "Enter the value " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "Enter the element you want to delete: ";
    cin >> val;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            count++;
            for (int k = i; k < n; k++)
            {
                arr[k] = arr[k + 1];
            }
            cout << "The updated array is.........." << endl;
            for (size_t j = 0; j < n - 1; j++)
            {
                cout << arr[j] << " ";
            }
            break;
        }
    }
    if (count == 0)
    {
        cout << "Element not found";
    }
}
