1.#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

void printArray(int a[],int s,char ch[]){
    cout<<"Printing "<<ch<<"[]:"<<endl;
    for(int i=0;i<s;i++){
        cout<<ch<<"["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<"\n";
}

int main(){
    int a[10];
    inputArray(a,10,"a");
    printArray(a,10,"a");
    return 0;
}
2.
#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

void printArrayInRevers(int a[],int s,char ch[]){
    cout<<"Printing "<<ch<<"[] in Revers:"<<endl;
    for(int j=s-1;j>=0;j--){
        cout<<ch<<"["<<j<<"] = "<<a[j]<<endl;
    }
    cout<<"\n";
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    int a[s];
    inputArray(a,s,"a");
    printArrayInRevers(a,s,"a");
    return 0;
}
3.#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

int sumOfArray(int a[],int s){
    int sum = 0;
    for(int i=0;i<s;i++){
        sum+=a[i];
    }
    return sum;
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    int a[s];
    inputArray(a,s,"a");
    cout<<"The sum of the a[] is: "<<sumOfArray(a,s)<<endl;
    return 0;
}



4.#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

void printArray(int a[],int s,char ch[]){
    cout<<"Printing "<<ch<<"[]:"<<endl;
    for(int i=0;i<s;i++){
        cout<<ch<<"["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<"\n";
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");
    int b[s];
    for(int i=0;i<s;i++){
        b[i] = a[i];
    }
    cout<<"a[] copied into b[]."<<endl;
    printArray(b,s,"b");
    return 0;
}
5.#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");

    int countOfDuplicateNumbers[s];
    int countedNumbers[s];
    int lastIndexOfCountedNumbers = 0;

    for(int i=0;i<s;i++){
        //cout<<"i = "<<i<<endl;
        bool isCounted = false;
        for(int k=0;k<lastIndexOfCountedNumbers;k++){
            //cout<<"k = "<<k<<endl;
            //cout<<a[i]<<" == "<<countedNumbers[k]<<endl;
            if(a[i]==countedNumbers[k]){
                isCounted = true;
                //cout<<"True"<<endl;
                break;
            }
        }
        //cout<<boolalpha<<isCounted<<endl;
        if(isCounted) continue;
        countedNumbers[lastIndexOfCountedNumbers] = a[i];
        int countOfDuplicate = 0;
        for(int j=0;j<s;j++){
            //cout<<"j = "<<j<<endl;
            if(j==i) continue;
            if(a[i]==a[j]) countOfDuplicate++;
        }
        countOfDuplicateNumbers[lastIndexOfCountedNumbers] = countOfDuplicate;
        lastIndexOfCountedNumbers++;
    }

    int len = 0;
    for(int n=0;n<lastIndexOfCountedNumbers;n++){
            if(countOfDuplicateNumbers[n]!=0) len++;
    }

    if(len!=0){
        cout<<"There is "<<len<<" Elements which has Duplicate Elements:"<<endl;
        int total = 0;
        for(int l=0;l<lastIndexOfCountedNumbers;l++){
            if(countOfDuplicateNumbers[l]!=0){
                cout<<countedNumbers[l]<<" has "<<countOfDuplicateNumbers[l]<<" Duplicate Elements."<<endl;
                total+=countOfDuplicateNumbers[l];
            }
        }
        cout<<"a[] has total "<<total<<" Duplicated Elements."<<endl;
    }else{
        cout<<"There is no Duplicate Elements."<<endl;
    }

    return 0;
}

6.#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");

    int countedNumbers[s];
    int lastIndexOfCountedNumbers = 0;

    for(int i=0;i<s;i++){
        bool isCounted = false;
        for(int k=0;k<lastIndexOfCountedNumbers;k++){
            if(a[i]==countedNumbers[k]){
                isCounted = true;
                break;
            }
        }
        if(isCounted) continue;
        countedNumbers[lastIndexOfCountedNumbers] = a[i];
        lastIndexOfCountedNumbers++;
    }

    cout<<"There is "<<lastIndexOfCountedNumbers<<" Unique Elements:"<<endl;
    for(int l=0;l<lastIndexOfCountedNumbers;l++){
        cout<<countedNumbers[l]<<endl;
    }

    return 0;
}


7.#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");

    int numbersFrequency[s];
    int countedNumbers[s];
    int lastIndexOfCountedNumbers = 0;

    for(int i=0;i<s;i++){
        bool isCounted = false;
        for(int k=0;k<lastIndexOfCountedNumbers;k++){
            if(a[i]==countedNumbers[k]){
                isCounted = true;
                break;
            }
        }
        if(isCounted) continue;
        countedNumbers[lastIndexOfCountedNumbers] = a[i];
        int countOfFrequency = 0;
        for(int j=0;j<s;j++){
            if(a[i]==a[j]) countOfFrequency++;
        }
        numbersFrequency[lastIndexOfCountedNumbers] = countOfFrequency;
        lastIndexOfCountedNumbers++;
    }

    cout<<"Printing Frequency of each Elements:"<<endl;
    for(int l=0;l<lastIndexOfCountedNumbers;l++){
        cout<<countedNumbers[l]<<" has "<<numbersFrequency[l]<<" Frequency."<<endl;
    }

    return 0;
}


8.#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

int findMax(int a[],int s){
    int maxNumber = a[0];
    for(int i=1;i<s;i++){
        if(a[i]>maxNumber) maxNumber = a[i];
    }
    return maxNumber;
}

int findMin(int a[],int s){
    int minNumber = a[0];
    for(int i=1;i<s;i++){
        if(a[i]<minNumber) minNumber = a[i];
    }
    return minNumber;
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");
    cout<<findMax(a,s)<<" is the Maximum Number in a[]."<<endl;
    cout<<findMin(a,s)<<" is the Minimum Number in a[]."<<endl;
    return 0;
}

9.#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

void printArray(int a[],int s,char ch[]){
    cout<<"Printing "<<ch<<"[]:"<<endl;
    for(int i=0;i<s;i++){
        cout<<ch<<"["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<"\n";
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");

    int countOdd = 0;
    for(int i=0;i<s;i++){
        if(a[i]%2==1) countOdd++;
    }
    int countEven = s - countOdd;

    int odds[countOdd];
    int evens[countEven];

    countOdd = 0;
    countEven = 0;

    for(int i=0;i<s;i++){
        if(a[i]%2==1){
            odds[countOdd] = a[i];
            countOdd++;
        }else{
            evens[countEven] = a[i];
            countEven++;
        }
    }

    if(countOdd!=0) printArray(odds,countOdd,"odds");
    if(countEven!=0) printArray(evens,countEven,"evens");

    return 0;
}


10.
#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

void printArray(int a[],int s,char ch[]){
    cout<<"Printing "<<ch<<"[]:"<<endl;
    for(int i=0;i<s;i++){
        cout<<ch<<"["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<"\n";
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");
    printArray(a,s,"a");

    while(1){
        int option;
        cout<<"Enter 0 to Delete an Element or 1 to Exit"<<endl;
        cout<<"Option: ";
        cin>>option;
        cout<<"\n";
        if(option==0){
            if(s!=0){
                int element;
                cout<<"Enter Index of the Element you want to be Deleted: ";
                cin>>element;
                if(element<s&&element>=0){
                    for(int i=element;i<s;i++){
                        a[i] = a[i+1];
                    }
                    s-=1;
                    cout<<"\nDeleted\n"<<endl;
                    printArray(a,s,"a");
                }else{
                    cout<<"\nIndex must be between "<<0<<" to "<<s-1<<"\n"<<endl;
                }
            }else{
                cout<<"There is no Element to be Deleted\n"<<endl;
            }
        }else if(option==1){
            cout<<"Exited"<<endl;
            break;
        }else{
            cout<<"Invalid Option\n"<<endl;
        }
    }

    return 0;
}


11.
#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[](at least 2): "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

void printArray(int a[],int s,char ch[]){
    cout<<"Printing "<<ch<<"[]:"<<endl;
    for(int i=0;i<s;i++){
        cout<<ch<<"["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<"\n";
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");

    int largest;
    int secondLargest;

    if(a[0]>a[1]){
        largest = a[0];
        secondLargest = a[1];
    }else{
        largest = a[1];
        secondLargest = a[0];
    }

    for(int i=2;i<s;i++){
        if(a[i]>largest){
            secondLargest = largest;
            largest = a[i];
        }else if(a[i]>secondLargest){
            secondLargest = a[i];
        }
    }

    cout<<"The Second Largest Element in a[] is: "<<secondLargest<<endl;

    return 0;
}


