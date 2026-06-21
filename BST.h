#pragma once
#include<iostream>
using namespace std;
class BSTNODE{
    public:
    string data;
    BSTNODE* left;
    BSTNODE* right;
    BSTNODE(string data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
class BST{
    private:
        BSTNODE*root;
        long long size=0;
        void insert(BSTNODE*&root,string data){
            if(!root){
                root=new BSTNODE(data);
                return;
            }
            if(data>root->data)
            insert(root->right,data);
            else
            insert(root->left,data);
        }// this is root is just an argument parameter and i wrote this to make it reccursion
        // but not to make user enter an extra argument
    public:
        BST(){
        root=nullptr;// so only the insert attribute can be made to put values
        }
        void insert(string data){
            insert(root,data);// here we are using the actual root
            size++;
        }
        long long getsize(){
            return size;
        }
        
};