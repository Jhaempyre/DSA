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

string pointertoString(Node* head){
    ostringstream oss ;
    oss<<head;
    return oss.str();
}

bool checkForCycleInLL(Node* head){
    unordered_set<string> st ; 
    Node* temp = head ;
    while(temp!=nullptr){
        auto inres=st.insert(pointertoString(temp));
        if(inres.second){
            temp= temp->next;
        }else{
            return true ;
        }
    }
    return false ;
}





//The solution is one of the best but another way of doing is it tortoise khargosh algorithm 

bool checkForCycleInLL(Node* head){
           Node *slow = head;
       Node *fast = head;
       while(fast != NULL  and fast->next != NULL){
        
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
       }
       return false;
        
    }



void print(Node* head ){
    while(head!=NULL){
        cout<<head->data<<" -->  ";
        head=head->next;
    }
}



int main(){

    vector<int> vect = {15,2,3,4,5,6};
    Node* head = ConvertArray2LL(vect);
    //Traversing through out thelikend list
    print(head);

    bool result = checkForCycleInLL(head);
    cout<<result;

}