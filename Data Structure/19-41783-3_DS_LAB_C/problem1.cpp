#include<iostream>
using namespace std;

struct student{
    int id;
    double midR;
    double finalR;
};

int main(){
    student students[10];

    cout<<" Students records:\n"<<endl;
    for(int i=0;i<10;i++)
        {
        cout<<"Enter Record for number "<<i+1<<" : "<<endl;
        bool isUnique = true;
        while(isUnique){
            cout<<"Enter Student ID: ";
            cin>>students[i].id;
            isUnique = false;
            for(int j=0;j<i;j++){
                if(students[j].id==students[i].id){
                    cout<<"This ID is already Used!"<<endl;
                    isUnique = true;
                    break;
                }
            }
        }
        cout<<"  Mid Result: ";
        cin>>students[i].midR;
        cout<<"Final Result: ";
        cin>>students[i].finalR;
        cout<<endl;
    }

    cout<<"Student's ID more than 80% in their Final Result:"<<endl;
    for(int i=0;i<10;i++){        double midR = students[i].midR;        double finalR = students[i].finalR;        double result = (0.4*midR)+(0.6*finalR);        if(result>=80) cout<<"Student ID: "<<students[i].id<<endl;    }

    cout<<"Student's ID  fail in their Final Result"<<endl;
    for(int i=0;i<10;i++){        if(students[i].midR<50) cout<<"Student ID: "<<students[i].id<<endl;        else if(students[i].finalR<50) cout<<"Student ID: "<<students[i].id<<endl;    }
    return 0;
}
