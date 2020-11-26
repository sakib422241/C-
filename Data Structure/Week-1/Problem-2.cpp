#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int Arr[size];
    cout << "\nPlease enter the element of an Array: ";
    for (int i = 0; i <= size-1; i++)
    {
        cin >> Arr[i];
    }

    cout << "\nThe Array is: ";
    for (int i = 0; i <= size-1; i++)
    {
        cout << Arr[i] <<", ";
    }

    int odd_count = 0, even_count = 0;
    for (int i = 0; i <= size-1; i++)
    {
        if(Arr[i]%2 == 0)
        {
            even_count = even_count + 1;
        }
        else
        {
            odd_count = odd_count + 1;
        }
    }
    cout<<endl<<endl;
    cout<<"Number of odd integer in this array: " << odd_count << endl;
    cout<<"Number of even integer in this array: " << even_count << endl;
    return 0;
}

