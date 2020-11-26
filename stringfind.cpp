#include <iostream>
#include <string.h>
using namespace std;
//Coded by Sakib Shahriyar 
int main()
{
    char a, word[50];
    int i, freq = 0, flag = 0;
 
    cout<<"Enter character: ";
    cin>>a;
    cout<<"Now enter the word: ";
    cin>>word;
    cout<<"You Have Entered : "<<word;
    cout<<"\nPositions of " <<a <<" in "<< word <<" is/are: "<<i;

    for (i = 0; i < strlen(word); i++)

    {
//Coded by Sakib Shahriyar 
        if (word[i] == a)
        {
            flag = 1;
            cout<<(i + 1);
            freq++;
        }
    }
    if (flag)
    {
      cout<<" \nCharacter " <<a<<" occured for "<< freq<<" time";
    }
    else
    {
        cout<<"None";
    }
 
    return 0;
}
//Coded by Sakib Shahriyar 