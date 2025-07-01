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


void print(Node* head ){
    while(head!=NULL){
        cout<<head->data<<" -->  ";
        head=head->next;
    }
}


int lengthOFLL(Node* head ){
    int count = 0 ; 

    while(head!=NULL){
        count++;
        head= head->next;
    }

    return count ;
}


Node*  ConvertArray2LL(vector<int> &arr){
    Node* head =new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;  i < arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover= temp ;
    }

    return head;
}


int main(){

    vector<int> vect = {15,2,3,4,5,6,18,52,13};
    Node* head = ConvertArray2LL(vect);
    //Traversing through out thelikend list
    print(head);

    cout<<endl;

    cout<<"Length of Linked List = "<<lengthOFLL(head);


}