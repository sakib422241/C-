#include<iostream>
using namespace std;

int main()
{
    int a[5] ,sum =0;
    cout<<"Enter 5 element\n";
    for(int i=0;i<5;i++)
    {
        cout <<i+1 << " out of 5 = ";
        cin >> a[i];
    }
    cout << "sum :\n";
    for(int i=0;i<5;i++)
    {
     sum = sum + a[i];
        cout << sum << "\n";
    }
    return 0;
}
