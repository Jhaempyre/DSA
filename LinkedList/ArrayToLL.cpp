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

    Node(int data1 , Node* next1){
        data = data1 ;
        next = next1 ; 
    }

};


Node*  ConvertArray2LL(vector<int> &arr){

    //creating new Node head beacuse head is most important , since each node is called node so even head is node thus 
    //we will say it as head ;
    Node* head =new Node(arr[0]);
    //Since head is need to be immovavale otherwise we will loose our all acess to it thus 
    //we will appoint a mover that will keep data and keep moving 
    Node* mover = head;
    for(int i = 1;  i < arr.size();i++){
        //We will create a temporary node which we will be attaching later .
        Node* temp = new Node(arr[i]);
        
        //Here comes the great explanation , like temp is also the pointer it stores the node adress where the actual thing is stored in heap
        //remember heap not stack if it was then it was so easy to just do .operaotr thing but we only have adress we don't want to 
        //just store the data and adress we want to pint whole new node 
        //that's y the line mover->next!=temp->next
        mover->next=temp;

        //after this we will send mover to point temp beacuse we have to move ahead wother
        mover= temp ;

    }

    return head;
}


int main(){

    vector<int> vect = {15,2,3,4,5,6};

    //Node y = Node(vect[2]);//This is using stack and does have a problem like when after this 
    //been returned the lifetime of the data in memory is automaticaaly finished since we want a lifetimeof the storaged to be manually controlled 
    //we will use heap memory 
    //where we will point hte data as ptr or the refernce of the given .
    //as
    //Node* x = new Node(vect[0],nullptr);
    //cout<<y.data<<endl;
    //cout<<x;

    Node* head = ConvertArray2LL(vect);
    cout<<head->data;

}