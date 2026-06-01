#include<iostream>
using namespace std;
#include<fstream>
#include<bits/stdc++.h>
// this header file is responsible for:
/*1- reading the txt file*/
vector<string> ReadFile(const string& filename){
    vector<string>v;
    string input;
    ifstream file(filename);
    //this creates a filestream object called file
    // file attempts to open file name
    if(!file){
        cout<<"error opening file\n";

    }
     while(getline(file,input))
        v.push_back(input);
        /*this is a while loop condition where till i reach the 
        end of the file i will keep reading each line in string 
        input and then push it inside the vector*/
    file.close();
    return v;

} // this a fn where it reads the file of dictionary then stores it in vector