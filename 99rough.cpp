#include<iostream>
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

void inorder(node *root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }


}

int main(){
    node *root = new node(0);
    root->left = new node(1);
    root->right = new node(2);
    root->right->left = new node(6);
    root->right->left->right = new node(8);
    root->right->left->right = new node(8);
    root->right->left->left = new node(7);
    root->left->right = new node(3);
    root->left->right->left = new node(4);
    root->left->right->right = new node(5);
    
    inorder(root);

    return 0;
}