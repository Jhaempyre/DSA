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



//Deletion of linked list could be of the diffrent nature like deleting from the 
//head --dONE
//position --done
//value
//last--fonr


//Deletion from head 
Node* DeleteHead(Node* head){


    if(head==NULL)
    {
        return head;
    }
    //first we will take the head and store to a temp node

    Node* temp = head;
   //"Hey head you were storing or pointing the first element, now the pointer you — 
   //the head — please point to what is in your next part (the address of the next one)"
     head=head->next;
        free(temp);
     return head ;
}

//Delete from last(tail)
Node* DeleteFromLast(Node* head){
    
if((head==NULL)||(head->next==nullptr)) return head ;

Node* temp = head ;

while(temp->next->next!=NULL){
    temp=temp->next;
}

free(temp->next);
temp->next=nullptr;

return head ;

}


//print a linked list 
void print(Node* head ){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
//Delete from kth position
Node* DeleteFromK(Node* head , int k ){
    int count = 1;

    Node* temp = head ;
    Node* prev = NULL;
    while(temp!=NULL){
        
        if(count ==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        cout<<"intl"<<endl;
        print(prev);
        cout<<"end"<<endl;
        prev=temp;
        temp=temp->next;
        count++;
    }

    return head ;
}


//Dletel a particular unique element 

Node* DeleteAElement(Node* head , int k ){
    Node* temp = head ;
    Node* prev = NULL ; 

    while(temp!=NULL){
        if(temp->data==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }

    return head ;
}

//convert array to linked list
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

    vector<int> vect = {15,2,3,5,10,4,6};
    Node* head = ConvertArray2LL(vect);
    //Traversing through out thelikend list

    cout<<"Initail"<<'\n';
    print(head);

    cout<<endl;
    /*
    Node* bed = DeleteHead(head);
    Node* temp = bed;
    cout<<"FINAL"<<'\n';
    print(bed);

    */
/*
    Node* deleteLast  = DeleteFromLast(head);
    print(deleteLast);
*/
/*
    Node* deleteK= DeleteFromK(head,4);
    print(deleteK);

    */

    Node* DeleteaElement = DeleteAElement(head,5);
    print(DeleteaElement);
}