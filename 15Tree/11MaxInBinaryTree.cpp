#include<iostream>
#include<climits>
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

int getMax(node *root)
{
    if(root == NULL)
    return INT_MIN;
    else
    return max(root->key,max(getMax(root->left),getMax(root->right)));

}

int main(){
    node *root = new node(20);
    root->left = new node(80);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);

    cout<<getMax(root);

    return 0;
}