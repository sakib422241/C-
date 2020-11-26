#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout<<"Enter 10 element\n";
    for(int i=0;i<10;i++)
    {
        cout <<i+1 << " out of 10 = ";
        cin >> a[i];
    }
    cout << "Elements are:\n";
    for(int i=0;i<10;i++)
    {
        cout << a[i] << "\n";
    }
    return 0;
}
