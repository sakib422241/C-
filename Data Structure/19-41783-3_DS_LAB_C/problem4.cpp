#include <iostream>
using namespace std;
struct node *root = NULL;
struct node
{
    int id;
    string name;
    float cgpa=0;
    node *left;
	node *right;
};
void insert(int id, string name, float cgpa, node *leaf)
{
    if(root == NULL)
    {
		root = new node;
		root -> id = id;
		root -> name = name;
		root -> cgpa = cgpa;
		root -> left = NULL;
		root -> right = NULL;
	}
	else
    {
        if(id < leaf->id)
        {
            if(leaf->left != NULL)
            {
                insert(id, name, cgpa, leaf->left);
            }
            else
            {
                leaf->left = new node;
                leaf->left->id = id;
                leaf->left-> name = name;
                leaf->left-> cgpa = cgpa;
                leaf->left->left = NULL;
                leaf->left->right = NULL;
            }
        }
        else if(id > leaf->id)
        {
            if(leaf->right != NULL)
            {
                insert(id, name,  cgpa, leaf->right);
            }
            else
            {
                leaf->right = new node;
                leaf->right-> id = id;
                leaf->right-> name = name;
                leaf->right-> cgpa = cgpa;
                leaf->right->right = NULL;
                leaf->right->left = NULL;
            }
        }
    }
}
void MostSenior(node *node){
    struct node *curr = node;
    while (curr->left != NULL){
        curr = curr->left;
    }
    cout << "Student ID: " << curr -> id;
    cout << "\nStudent NAME: " << curr -> name;
    cout << "\nStudent CGPA: " << curr -> cgpa;
}
void MostJunior(node *node){
    struct node *curr = NULL;
    curr = node;
    while (curr->right != NULL){
        curr = curr->right;
    }
    cout << "Student ID: " << curr -> id;
    cout << "\nStudent NAME: " << curr -> name;
    cout << "\nStudent CGPA: " << curr -> cgpa;
}
struct node *search(int id, node *leaf)
{
	if(leaf != NULL)
    {
		if(id == leaf->id)
		{
		    cout << "Found." << endl;
			return leaf;
		}
		else if(id < leaf->id)
        {
			return search(id, leaf->left);
		}
		else
        {
			return search(id, leaf->right);
		}
	}
	else
    {
        cout << "Not Found." << endl;
		return NULL;
	}
}
void inorder_print(node *leaf)
{
	if(leaf != NULL)
    {
		inorder_print(leaf->left);
		cout << "Student ID: " << leaf -> id;
        cout << "\nStudent NAME: " << leaf -> name;
        cout << "\nStudent CGPA: " << leaf -> cgpa;
		inorder_print(leaf->right);
	}
}
void postorder_print(node *leaf)
{
	if(leaf != NULL)
    {
		postorder_print(leaf->left);
		postorder_print(leaf->right);
		cout << "Student ID: " << leaf -> id;
        cout << "\nStudent NAME: " << leaf -> name;
        cout << "\nStudent CGPA: " << leaf -> cgpa;
	}
}
void preorder_print(node *leaf)
{
	if(leaf != NULL)
    {
		cout << "Student ID: " << leaf -> id;
        cout << "\nStudent NAME: " << leaf -> name;
        cout << "\nStudent CGPA: " << leaf -> cgpa;
		preorder_print(leaf->left);
		preorder_print(leaf->right);
	}
}
int main()
{
	insert(3, "Sakib", 3.57, root);
	insert(5,"Mou", 3.21, root);
	insert(8,"Asif", 3.25, root);
	insert(4,"Tonni", 3.87, root);
	insert(2,"Akib", 3.93, root);
	insert(7,"Maruf", 3.81, root);
	insert(1,"Monta", 3.13, root);
	insert(6,"Masud", 3.26, root);
    cout << "Most senior student information: " << endl;
	MostSenior(root);
	cout << "\n\nMost junior student information: " << endl;
	MostJunior(root);
    return 0;
}