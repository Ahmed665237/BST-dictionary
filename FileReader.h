#include<iostream>
#include"BST.h"
using namespace std;
#include<fstream>
// this header file is responsible for:
/*1- reading the txt file*/
BST ReadFile(const string& filename){
    BST tree;
    string input;
    ifstream file(filename);
    //this creates a filestream object called file
    // file attempts to open file name
    if(!file){
        cout<<"error opening file\n";
        return tree;
    }
     while(getline(file,input))
        tree.insert(input);
        /*this is a while loop condition which runs till the end
        of the file and inserts inside a binary search tree*/
    file.close();
    return tree;

} // this a fn where it reads the file of dictionary then stores it in vector