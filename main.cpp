#include<iostream>
#include"FileReader.h"
#include"BST.h"
using namespace std;
int main(){
    BST*bst=new BST();
    bst=ReadFile("Dictionary.txt");
    cout<<bst->getsize();
    return 0;
}