#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node*Head=NULL;
node*Tail=NULL;
void create_link_list(int value)
{
    node*newnode=new node;
    newnode->data=value;
    newnode->next=NULL;
    if(Head==NULL)
    {
        Head=newnode;
        Tail=newnode;
    }
    else
    {
       Tail->next=newnode;
       Tail=Tail->next;
    }
}
void reverse(node*current)
{
    if(Head=NULL)
    {
        cout<<"List is empty";
        return;
    }
    else
    {
        if(current->next==NULL)
        {
            cout<<current->data;
            return;
        }
        reverse(current->next);
        cout<<"  "<<current->data;
    }
}
void display()
{
    node*current=Head;
    if(Head==NULL)
    {
        cout<<"List is empty";
        return;
    }
    while(current!=NULL)
    {
        cout<<"  "<<current->data;
        current=current->next;
    }
}
int main()
{
    create_link_list(11);
    create_link_list(3);
    create_link_list(12);
    create_link_list(7);
    create_link_list(21);
    create_link_list(16);
    cout<<"-------------------------";
    cout<<"\nLinked List= ";
    display();
    cout<<"\n-----------------------";
    cout<<"\nReverse Order Linked List= ";
    reverse(Head);
    cout<<"\n-------------------------";

}