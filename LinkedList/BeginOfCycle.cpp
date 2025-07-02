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


Node* BeginOfCycle(Node* head){
    Node* kachuaa = head ;
    Node* khargosh = head ;

    while(khargosh!=nullptr && khargosh->next!=nullptr){
            kachuaa=kachuaa->next;
            khargosh= khargosh->next->next;

            if(kachuaa==khargosh){
                //here we will return the befining of the loop 

                kachuaa = head ;
                while(kachuaa!=khargosh){
                
                kachuaa=kachuaa->next;
                khargosh=khargosh->next;
                }
                return khargosh;
            }

        }

        return nullptr ;


}


int main(){

    vector<int> vect = {15,2,3,4,5,6};
    Node* head = ConvertArray2LL(vect);
    //Traversing through out thelikend list
    print(head);

}