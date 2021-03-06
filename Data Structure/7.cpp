#include<iostream>
using namespace std;

struct Data{
   int id;
   string name;
   double cgpa;
};

struct Node{
   Node *l, *r;
   Data data;
}
*r = NULL, *p = NULL, *np = NULL, *q;

void insertData(Data v){
    if(r == NULL){
        r = new Node;
        r->data = v;
        r->r = NULL;
        r->l = NULL;
      }else{
        p = r;
        while(true){
            if(v.id < p->data.id){
               if(p->l == NULL){
                  p->l = new Node;
                  p = p->l;
                  p->data = v;
                  p->l = NULL;
                  p->r = NULL;
                  break;
               }else if(p->l != NULL){
                  p = p->l;
               }
            }else if(v.id >p->data.id){
               if(p->r == NULL){
                  p->r = new Node;
                  p = p->r;
                  p->data = v;
                  p->l = NULL;
                  p->r = NULL;
                  break;
               }else if (p->r != NULL){
                  p = p->r;
               }
            }
        }
    }
}

void inorder(Node *p) {
   if(p != NULL){
      inorder(p->l);
      cout<<p->data.id<<" ";
      inorder(p->r);
   }
}

void preorder(Node *p) {
   if(p != NULL){
      cout<<p->data.id<<" ";
      preorder(p->l);
      preorder(p->r);
   }
}

void postorder(Node *p){
   if(p != NULL){
      postorder(p->l);
      postorder(p->r);
      cout<<p->data.id<<" ";
   }
}

Node* search(Node *p, int id){
    if(p!=NULL){
        if(p->data.id == id) return p;
        else if(p->data.id < id) return search(p->r, id);
        else if(p->data.id > id) return search(p->l, id);
    }
    return p;
}

int main() {
    cout<<"Enter student data(enter student id -1 to end): "<<endl;
    Data data;
    int id = 0;
    string name;
    double cgpa;
    while(id!=-1){
        cout<<"\nEnter Student Id: ";
        cin>>id;
        if(id!=-1){
            cout<<"Enter Student Name: ";
            cin.ignore();
            getline(cin, name);
            cout<<"Enter Student CGPA: ";
            cin>>cgpa;
            data.id = id;
            data.name = name;
            data.cgpa = cgpa;
            insertData(data);
            cout<<endl;
        }
    }

    cout<<"\nPostorder: ";
    postorder(r);
    cout<<"\nPreorder: ";
    preorder(r);
    cout<<"\nInorder: ";
    inorder(r);

    cout<<"\n\nEnter an Id to search: ";
    int sId;
    cin>>sId;
    Node* node = search(r,sId);
    if(node==NULL){
        cout<<"\nStudent Not Found!!"<<endl;
    }else{
        cout<<"\nStudent Found!!"<<endl;
        cout<<"Student ID: "<<node->data.id<<endl;
        cout<<"Student NAME: "<<node->data.name<<endl;
        cout<<"Student CGPA: "<<node->data.cgpa<<endl;
    }

    return 0;
}