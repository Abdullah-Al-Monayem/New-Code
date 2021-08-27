

#include <iostream>
using namespace std;


struct Node
{
    int data;
    struct Node *left, *right;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }

};



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

Node* root = NULL;

void push(int d)
{
    Node* newNode = new Node(d);
    if(root == NULL)
    {
        root = newNode;
        return;
    }

    Node* temp = root;
    while(temp!=NULL)
    {
        if(d<=temp->data)
        {
            if(temp->left == NULL)
            {
                temp->left = newNode;
                return;
            }
            temp = temp->left;
        }
        else
        {
            if(temp->right == NULL)
            {
                temp->right = newNode;
                return;
            }
            temp = temp->right;
        }
    }

}


int main()
{
    push(10);
    push(5);
    push(14);
    push(4);
    push(6);

    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);

    return 0;
}
