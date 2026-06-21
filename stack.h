#include<iostream>
#include"BST.h"
using namespace std;
class STACKNODE{
    public:
        BSTNODE*data;
        STACKNODE*next;
        STACKNODE(BSTNODE* data){
            this->data=data;
            next=nullptr;
        }// this is where the data stored in the stack is the node of BST
};
class Stack{
    private:
        STACKNODE*top;
        long long height;
    public:
        Stack(){
            top=nullptr;
            height=0;
        }
        void insert(string data){
            if(!top){
                
            }
        }
        void push(BSTNODE*root){
            STACKNODE*temp=new STACKNODE(root);
            if(!top)
                top=temp;
            else{
                temp->next=top;
                top=temp;
            }
            // push and the argument is the node of the BST
        }
        BSTNODE*pop(){
            if(!top)
                return nullptr;
            STACKNODE*temp=top;
            BSTNODE*x=temp->data;
            top=top->next;
            delete temp;
            return x;
        }
        // the push method
};