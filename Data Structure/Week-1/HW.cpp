#include <iostream>
using namespace std;

int main() {
    int size, i=0, j=0;
    cout << "Enter the size of your Full name: ";
    cin >> size;

    char Name[size], ReverseName[size];
    cout << "\nPlease enter your full name into an Array: ";
    for (i = 0; i <= size-1; i++)
    {
        cin >> Name[i];
    }

    /// Reverse order name store in a different array
    for (i = size-1; i >= 0; i--)
    {
        ReverseName[j] = Name[i];
        j++;
    }

    cout << "\nName in normal order: ";
    for (i = 0; i <= size-1; i++)
    {
        cout << Name[i] <<" ";
    }

    cout << "\n\nName in reverse order: ";
    for (i = 0; i <= size-1; i++)
    {
        cout << ReverseName[i] <<" ";
    }

    cout<<endl;
    return 0;
}


