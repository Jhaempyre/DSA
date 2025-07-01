#include<iostream>
#include<bits/stdc++.h>

using namespace std ; 


class Node{

    public:
    int data ; 
    Node* back ;
    Node* next ;

    public:
    Node(int data1 , Node* back1 , Node* next1){
        data = data1;
        back= back1;
        next= next1;
    }

    Node(int data1){
        data= data1;
        back=nullptr;
        next=nullptr;
    }


};


Node* ArrayToDoublyLL(vector<int> vect){
    Node* head = new Node(vect[0]);
    Node* prev = head ;

    for(int i = 1 ; i<vect.size();i++){
        Node* newNode = new Node(vect[i],prev,nullptr);
        prev->next=newNode;
        prev = newNode;
    }

    return head ;
}

void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" <-->";
        head=head->next;
    }
    cout<<endl;
}


int main(){

vector<int> vect = {15,2,3,4,5,6};

Node* head = ArrayToDoublyLL(vect);
print(head);

}