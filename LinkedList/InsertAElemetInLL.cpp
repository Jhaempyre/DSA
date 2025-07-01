#include<iostream>
#include<bits/stdc++.h>

using namespace std ; 

class Node{

    public:
    int data ;
    Node* next ; 

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }

    Node(int data1, Node* next1){
        data=data1;
        next = next1;
    }


};


void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" --> ";
        head=head->next;
    }
    cout<<endl;
}


Node* convertArrayToLL(vector<int>vect){
    Node* head = new Node(vect[0]);
    Node* mover = head;

    for (int i = 1 ;i<vect.size();i++){
        Node* temp = new Node(vect[i]);
        mover->next=temp;
        mover= temp ;
        
    }

    return head ;
}


//Insert the head in LL

Node* headInsertion(Node* head , int k  ){
    Node* newhead = new Node(k);
    newhead->next=head ;
    return newhead ;
}

//Insertion at Tail 
Node* tailInsertion(Node* head , int k ){
    Node* temp = head ;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    Node* newNode = new Node(k) ; 
    temp->next = newNode ;
    
    return head ;
}


//Insertion at kth place 

Node* InsertionaTkth(Node* head, int k , int val){
    Node* temp = head ;
    int count = 1 ;

    Node* prev = NULL;

    while(temp!=NULL){
        
        if(count==k){

            Node* newnode = new Node(val,prev->next->next);
            temp->next=newnode;
            break;
        }
        prev=temp;
        temp=temp->next;
        count++;
    }

    return head ;
}



//Insertion after k value

Node* InsertionAfterValue(Node* head , int k , int val){
     Node* temp = head ;
    

    Node* prev = NULL;

    while(temp!=NULL){
        
        if(temp->data==k){

            Node* newnode = new Node(val,prev->next->next);
            temp->next=newnode;
            break;
        }
        prev=temp;
        temp=temp->next;
    }

    return head ;
}





int main(){
    vector<int> vect = {15,2,3,4,5,6};
    Node* head = convertArrayToLL(vect);
    cout<<"iNITAALLYY"<<endl;
    print(head);
    /*
    cout<<"Finally"<<endl;
    Node* newLL = headInsertion(head,17);
    print(newLL);
    */
 /*
    cout<<"Finally"<<endl;
    Node* newLL = tailInsertion(head,17);
    print(newLL);*/

    /*
    cout<<"Finally"<<endl;
    Node* newLL = InsertionaTkth(head,3,17);
    print(newLL);
    */

    cout<<"Finally"<<endl;
    Node* newLL = InsertionAfterValue(head,3,18);
    print(newLL);


}