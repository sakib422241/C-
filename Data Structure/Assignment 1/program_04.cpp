#include <iostream>
using namespace std;
int main()
{
 int list[100],list2[100];
 int n;
 int i,j;

 cout<<" enter array size "<<endl;
 cin>>n;

 cout<<" enter array element"<<endl;


 for(i=0;i<n;i++)
 {
 cin>>list[i];
 }
 for(i=0;i<n;i++)
 {
 list2[i]=list[i];
 }
 cout<<"copied array "<<endl;
 for(i=0;i<n;i++)

 cout<<list2[i]<<endl;

}
