#include <iostream>
using namespace std;

int  main()
{
    int arr1[100], fr1[100];
    int n, i, j, ctr;


       cout<<" Count frequency of each element of an array : "<<endl;
       cout<<"------------------------------------------------"<<endl;

       cout<<"Input the number of elements to be stored in the array : "<<endl;
       cin>>n;

       cout<<"Input elements in the array "<<endl ;
       for(i=0;i<n;i++)
            {

	      cin>>arr1[i];
		  fr1[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        ctr = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                fr1[j] = 0;
            }
        }

        if(fr1[i]!=0)
        {
            fr1[i] = ctr;
        }
    }
    cout<<"The frequency of all elements of array : " <<endl;
    for(i=0; i<n; i++)
    {
        if(fr1[i]!=0)
        {
            cout<<arr1[i]<<" occurs "<< fr1[i] << "times" << endl;
        };
    }
}
