#include<iostream>
#include<bits/stdc++.h>

using namespace std ; 


//creating single Linked List 

class Node {
    public:
    int data ;
    Node* next ;


    public:
    Node(int data1){
        data = data1;
        next = nullptr;

    }

    Node(int data1 , Node* next1){
        data = data1;
        next = next1 ;
    }
};



//Creatinf array to linked list ;

Node* ArrayTOLinekdList(vector<int>vect)
{
    Node* head = new Node(vect[0]);
    Node* temp = head ;

    for(int i = 1 ; i < vect.size();i++){
        Node* newhead = new Node(vect[i]);
        temp->next = newhead ; 
        temp = newhead ;
    }

    return head ;
}



//Finding middle of the Linked list Usinf tortoise and rabbit algorithm 

Node* FindMiddle(Node* head){
    Node* kachuaa = head;
    Node* khargosh = head;
   
    while((khargosh!=nullptr) && (khargosh->next!=nullptr)){
       kachuaa= kachuaa->next;
       khargosh= khargosh->next->next;
    }

    return kachuaa ;
    
};





void print(Node* head ){
    while(head!=nullptr){
        cout<<head->data<<"-->";
        head=head->next;
        
    }
    cout<<endl;
}



int main(){

    vector<int> vect = {15,2,3,4,5,6};

    Node* head = ArrayTOLinekdList(vect);
    print(head);

    cout<<FindMiddle(head)->data;

}

