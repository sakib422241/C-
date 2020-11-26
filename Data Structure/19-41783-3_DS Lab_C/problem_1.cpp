#include<iostream>
using namespace std;

int main()
{
    int A[3][4];

    cout<<"Enter the elements:"<<"\n";

    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<"A["<<row<<"]["<<col<<"]=";
            cin>>A[row][col];
        }
    }
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            //cout<<"A["<<row<<"]["<<col<<"]=";
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix="<<endl;

     for(int col=0;col<4;col++)
    {
       for(int row=0;row<3;row++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }
}
