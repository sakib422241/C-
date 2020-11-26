#include <iostream>
using namespace std;
int main()
{
  int arr1[50],i,pos,n;

       cout<<"Delete an element at desired position from an array : " <<endl;
       cout<<"---------------------------------------------------------"<<endl;

       cout<<"Input the size of array : ";
       cin>>n;

       cout<<"Input  elements in the array in ascending order: " <<endl;
       for(i=0;i<n;i++)
            {

	   cin>>arr1[i];
	    }

  cout<<" Input the position where to delete: " <<endl;
  cin>>pos;

  i=0;
  while(i!=pos-1)
            i++;
  while(i<n){
            arr1[i]=arr1[i+1];
            i++;
  }
  n--;
   cout<<"The new list is : " <<endl;
  for(i=0;i<n;i++)
        {
		   cout<<arr1[i]<<endl;
		}


}

