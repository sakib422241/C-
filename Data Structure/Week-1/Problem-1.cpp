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

    cout << "\nArray in normal order: ";
    for (int i = 0; i <= size-1; i++)
    {
        cout << Arr[i] <<", ";
    }

    cout << "\n\nArray in reverse order: ";
    for (int i = size-1; i >= 0; i--)
    {
        cout << Arr[i] <<", ";
    }
    cout<<endl;
    return 0;
}

/*
int main() {
    int Arr[10] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};

    cout << "\nArray in normal order: ";
    for (int i = 0; i <= 9; i++)
    {
        cout << Arr[i] <<", ";
    }

    cout << "\n\nArray in reverse order: ";
    for (int i = 9; i >= 0; i--)
    {
        cout << Arr[i] <<", ";
    }
    cout<<endl;
    return 0;
}
*/
/*

*/
/**

}
**/


