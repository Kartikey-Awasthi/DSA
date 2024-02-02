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

void printlevelLine(node *root)
{
    if(root == NULL)  return;
    queue<node *>q;
    q.push(root);
    q.push(NULL);
    while (q.size()>1)
    {
        node *curr = q.front();
        q.pop();
        if(curr == NULL)
        {
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<(curr->key)<<" ";
        
        if(curr->left != NULL)
        q.push(curr->left);
        if(curr->right != NULL)
        q.push(curr->right);

    }
    
}

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    printlevelLine(root);

    return 0;
}