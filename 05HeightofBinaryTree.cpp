#include<iostream>
using namespace std;

struct node
{
    int key;
    node *left;
    node *right;

    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int height(node *root)
{
    if(root == NULL)
    return 0;
    else
    return (1+max(height(root->left),height(root->right)));
}

int main()
{
    node *root = new node(10);
    root->left = new node(8);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);

    cout<<height(root);

    return 0;
}