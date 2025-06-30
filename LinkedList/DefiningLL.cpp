#include<iostream>
#include<bits/stdc++.h>
using namespace std ; 

class Node{
    public:
    int data ;  // THE DATA VALUE
    Node* next ; // tHE POINTER TO THE GIVEN NODE 

    //cONSTRUCTOR

    Node(int data1){
        data = data1 ;
        next=nullptr;
    }

    Node(int data , Node* next){
        data = data ;
        next = next ; 
    }

};

int main(){

    vector<int> vect = {1,2,3,4,5,6};

    Node y = Node(vect[2]);//This is using stack and does have a problem like when after this 
    //been returned the lifetime of the data in memory is automaticaaly finished since we want a lifetimeof the storaged to be manually controlled 
    //we will use heap memory 
    //where we will point hte data as ptr or the refernce of the given .
    //as
    Node* x = new Node(vect[0],nullptr);
    cout<<y.data<<endl;
    cout<<x;


}
