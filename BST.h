#include<iostream>
using namespace std;
class Node{
    public:
    string data;
    Node* left;
    Node* right;
    Node(string data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
class BST{
    public:
        Node*root;
    public:
        BST(){
        root=nullptr;// so only the insert attribute can be made to put values
        }
};