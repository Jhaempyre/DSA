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



//The problem is to sort the Linked List on the 0,1 ,2 also as by interchanging link only otherwise this has nothing special

Node* SortLL012(Node* head ){
    Node* temp = head ;
    if(head->next==nullptr){
        return head ;
    }
    if (head==nullptr){
        return head ;
    }

    //let's do by linking it 

    Node* zero = new Node(-1);
    int ze=0;
    int on=0;
    int tw=0;

    Node* one = new Node(-1);
    Node* two = new Node(-1);

    while(temp!=nullptr){
        if((temp->data==0 )){
            ze++;
            zero->next=temp ;            
        }
        if((temp->data==1)){
            on++;
            one->next=temp;

        }
        if((temp->data==2)){
            tw++;
            two->next=temp ;
        }
       
        //trying with dumb1
        Node* dumb = new Node(0);
        if(temp->data==0){
            dumb->next=zero;
            temp->next=dumb;
            zero->next=nullptr;
            dumb=nullptr;            
        }
        if(temp->data==1){
            dumb->next=one;
            temp->next=dumb;
            one->next=nullptr;
            dumb=nullptr;            
        }
        if(temp->data==2){
            dumb->next=two;
            temp->next=dumb;
            two->next=nullptr;
            dumb=nullptr;            
        }
        temp=temp->next;

    }
    //now we have all the three linked list ready with us
    Node* head1 = zero->next ;
    Node* head2 = one->next ;
    Node* head3 = two->next ;
    
    Node* finalhead = new Node(-1);
    Node* mover = finalhead ;
    while(ze--){
        mover->next=head1;
        head1=head1->next;
        mover=mover->next;
    }
    while(on--){
        mover->next=head2;
        head2=head2->next;
        mover=mover->next;
    }
    while(tw--){
        mover->next=head3;
        head3=head3->next;
        mover=mover->next;
    }
    mover->next=nullptr;
    return finalhead->next ;
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


int main(){

    vector<int> vect = {1,2,0,1,2,0,1,0,2,1,0};
    Node* head = ConvertArray2LL(vect);
    //Traversing through out thelikend list
    print(head);

    Node * sortedOne = SortLL012(head);
    cout<<"sorted h bhai";
    print(sortedOne);

}







//kuch to panga hae dekhugaa baad mae 