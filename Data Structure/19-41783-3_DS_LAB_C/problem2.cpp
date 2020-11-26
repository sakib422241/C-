#include<iostream>
#include<conio.h>
using namespace std;

int main  ()
{
    int size;
    cout<<"ENTER THE ARRAY SIZE:"<<endl;
    cin>>size;

    char arr[size];
    cout<<"ENTER THE ARRAY ELEMENTS(ALPHABET):"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"THE UNSORTED ALPHABET :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<i<<"="<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<"THE PROCESS OF BUBBLE SORT: "<<endl;
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                char change=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=change;
                cout<<"STEP-"<<count<<"|";
                for(int i = 0; i<size; i++)
                {
                    cout<<arr[i]<<" ";
                }
                count++;
                cout<<endl;
             }
         }
}

    getch();
}


