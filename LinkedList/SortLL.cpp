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
    cout<<"enterd ";
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


Node* GetMiddle(Node* head){

    if(head->next==nullptr ){
        return head;
    }
    if(head==nullptr){
        return head ;
    }

    Node* slow = head ;
    Node* fast = head ;

    while((fast!=NULL)&&(fast->next!=nullptr)){
        slow= slow->next;
        fast=fast->next->next;
    }

    return slow ;

}

Node* MergeTheSort(Node* left , Node* right){

    //creating a dummy 
    Node* extranode =new Node(-1);
    Node* temp = extranode ; 

    while((left!=nullptr) && (right!=nullptr)){
        if(left->data>=right->data){
            temp->next=right;
            right=right->next; 
        }else{
            temp->next=left ; 
            left= left->next;
        }
        temp= temp->next;  
     }
        if(left!=nullptr){
            temp->next=left;
        }else{
            temp->next=right; 
        }
     return extranode->next ;

}

Node* SortLL(Node* head){
    //brute force apprach would be to use a array and then write into array sort the array and then again write into the linked list 
    /* easy to code */
    //this part need to oprimized like may be recursion or something i will think just like array 

    // for this purpose we aare using merge sort to sort this things 
    //this includes step like 
    //finf the middle 
    //once got the middle think of recursion to base step 
    //to merge the ll and get the orignial ll 



    //base case 
     if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* middlehead = GetMiddle(head);

    //Dividing list into two halves

    Node* right = middlehead->next;
    middlehead->next = nullptr;

    Node* left = head ;

    left = SortLL(left);
    right = SortLL(right);


    return MergeTheSort(left,right);
}


int main(){

    vector<int> vect = {15,5,4,3,2,1,6};
    Node* head = ConvertArray2LL(vect);
    //Traversing through out thelikend list
    print(head);

    // print the sorted Linked list  ; 
    Node* sortedLL = SortLL(head);
    cout<<"heheh";
    if(sortedLL==nullptr){
        cout<<"hatt dallee";
    }
    print(sortedLL);
}