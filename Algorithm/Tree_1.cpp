#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

struct Node
{

    int data;///node element data
    Node *left;//node's or root's left node
    Node *right;//Node's right child or child

};

void preOrder( Node *root )
{

    //  cout<<"I am here"<<endl;

    if( root == NULL)
    {

//        cout<<endl;

        return;

    }

    cout<<root->data << " ";


        preOrder(root->left);




        preOrder(root->right);


}

Node* createNode(int x)
{

    struct Node *temp=new Node();

    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;

    return temp;

}

void insertLeft(struct Node *&head,int x)
{

    /*Node *node=head;

    Node *temp=new Node();

    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;

    while( node->left!=NULL ){

        node=node->left;

    }

    node->left=temp;*/

    if(head==NULL)
    {

        head=createNode(x);

        return;

    }

    if(head->left==NULL)
    {

        head->left=createNode(x);

    }
    else
    {

        head->left->left=createNode(x);

    }

    //return head->left;

    // temp=node;

    //return node;

}

void insertRight(struct Node *&head,int x)
{

    /*Node *node=head;

    Node *temp=new Node();

    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;

    while( node->right!=NULL ){

        node=node->right;

    }

    node->right=temp;*/

    if(head==NULL)
    {

        head=createNode(x);

        return;

    }

    if(head->right==NULL)
    {

        head->right=createNode(x);

    }
    else
    {

        head->right->right=createNode(x);

    }

    //return head->right;

}

Node* insert(struct Node *head,int x,int side)
{

    if( head==NULL )
    {

        head=createNode(x);

        return head;

    }

    Node *temp=head;

    if(side==0)
    {

        insertLeft(temp,x);

    }
    else
    {

        insertRight(temp,x);

    }

    preOrder(temp);

    cout<<endl;

    return temp;

}

void printPostorder(struct Node* node)
{
	if (node == NULL)
		return;


	printPostorder(node->left);


	printPostorder(node->right);


	cout << node->data << " ";
}


void printInorder(struct Node* node)
{
	if (node == NULL)
		return;


	printInorder(node->left);


	cout << node->data << " ";


	printInorder(node->right);
}


void printPreorder(struct Node* node)
{
	if (node == NULL)
		return;


	cout << node->data << " ";


	printPreorder(node->left);


	printPreorder(node->right);
}

Node *head=NULL;

int main()
{

    int n;

//cout<<"enter the number of node's: "<<endl;

    cin>>n;

    //  cout<<"enter the data's"<<endl;

  //  struct Node *head=NULL;

    for(int i=0; i<n; i++)
    {

        int x,y;

        cin>>x;

        cin>>y;



        head=insert(head,x,y);

    }

 //  printPostorder(head);
     preOrder(head);

    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(head);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(head);

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(head);

    return 0;
}


/*

5
1 1
2 0
3 1
4 0
5 1

*/
