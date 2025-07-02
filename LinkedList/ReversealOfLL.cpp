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



//Reverse a LINKED List using iterative method ;


Node* ReverseTheLL(Node* head ){

    if(!head)return nullptr;
     vector<int> vect ;
        int i = 0 ;
        Node* temp = head ;
        while(temp!=nullptr){
            int x = temp->data;
            vect.push_back(x);
            temp = temp->next;
            i++;
        }
        reverse(vect.begin(),vect.end());

        Node* newhead = new Node(vect[0]);
        Node* bkl = newhead ;
        for (int i = 1 ; i<vect.size();i++){
            Node* temp = new Node(vect[i]);
            bkl->next = temp ;
            bkl = temp ;
        }


         return newhead ;
        
}





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

  Node* newhead = ReverseTheLL(head);
    print(newhead);
  

}

