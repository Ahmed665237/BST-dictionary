#include<iostream>
using namespace std;
class Node{
    public:
        string data;
        Node*next;
        Node(string data){
            this->data=data;
            next=nullptr;
        }
};
class Stack{
    private:
        Node*top;
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
};
// here this is the stack used in DFS still unkown what data fields to use 