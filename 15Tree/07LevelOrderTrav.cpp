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

void printLevel(node *root)
{
    if(root == NULL) return;
    queue<node *>q;
    q.push(root);
    
    while(q.empty() == false){
        
        node *curr = q.front();
        q.pop();
        cout<<(curr->key)<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }

    }

}

int main(){
    node *root = new node(10);
    root->left = new node(15);
    root->left->left = new node(30);
    root->right = new node(20);
    root->right->right = new node(50);
    root->right->left = new node(40);
    root->right->left->right = new node(70);
    root->right->left->left = new node(60);

    printLevel(root);

    return 0;
}