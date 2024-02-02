#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int key;
    node *left;
    node *right;

    node(int k){
        key = k;
        left = right = NULL;
    }
};

void printlevelOrderLine(node *root)
{
    if(root == NULL) return;
    queue<node *>q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();

        for(int i=0; count>i; i++)
        {
            node *curr = q.front();
            q.pop();
            cout<<(curr->key)<<" ";
            if(curr->left != NULL)  q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        }
        cout<<"\n";
    }
    
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(60);

    printlevelOrderLine(root);

    return 0;
}