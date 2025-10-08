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

Node* deleteMiddle(Node* head){
    //first get to middle 
    //slow and fast algo for getting to middle and keep track of jut before middle 
    Node* slow = head ;
    Node* fast = head ;
    Node* prev = NULL ; 
    int count=0 ;
    

    while(fast!=nullptr&&fast->next!=nullptr){
        count++;       
        cout<<"interuptionstarted"<<endl;
        print(prev);  
        cout<<"ended"<<endl;
        prev= slow ; 
        slow= slow->next;
        fast= fast->next->next;  
             
    };
    //since we are here this mean we have exactly get the middle but we need to stay at a step before 
    count =  prev->data;
    //now we have landed just before the middle one in this case 
    Node* temp = prev->next;
    prev->next=prev->next->next;
    free(temp);
    return head;
  // reaarange the ll 
    // return the ll
}


int main(){

    vector<int> vect = {2,1};
    Node* head = ConvertArray2LL(vect);
    //Traversing through out thelikend list
    print(head);
    Node* newhead = deleteMiddle(head);
    cout<<"finalanswer:";
    print(newhead);
}