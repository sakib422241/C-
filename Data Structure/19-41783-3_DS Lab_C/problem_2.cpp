
#include <iostream>
#include<cstring>
using namespace std;
string encode(string s, int j)
{
    int asci;
    int count=0;
    for(int i = 0; s[i] != '\0'; i++)
    {
      count++;
    }
    while(j<count)
    {
        asci=int(s[j]);
        asci=asci+2;
        s[j]=char(asci);
        j=j+3;
    }
    return s;
}
int main()
{
    string str;
    int n;
    cout << "Enter String: " << endl;
    getline(cin, str);
    cout << "Enter Int: " << endl;
    cin>>n;
    cout<<"Encoded form of string: "<<encode(str, n)<<endl;
    return 0;
}
