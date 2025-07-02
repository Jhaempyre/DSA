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


int findLength(Node* slow, Node* fast){
    
    // count to keep track of 
    // nodes encountered in loop
    int cnt = 1;
    
    // move fast by one step
    fast = fast->next;
    
    // traverse fast till it 
    // reaches back to slow
    while(slow!=fast){
        
        // at each node increase
        // count by 1 and move fast
        // forward by one step
        cnt++;
        fast = fast->next;
    }
    
    // loop terminates when fast reaches
    // slow again and the count is returned
    return cnt;
}
// Function to find the length
// of the loop in a linked list
int lengthOfLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Step 1: Traverse the list to detect a loop
    while (fast != nullptr && fast->next != nullptr) {
        // Move slow one step
        slow = slow->next;     
        // Move fast two steps
        fast = fast->next->next;

        // Step 2: If the slow and fast pointers
        // meet, there is a loop
        if (slow == fast) {
            // return the number of nodes
            // in the loop
            return findLength(slow, fast);
        }
    }

    // Step 3: If the fast pointer
    // reaches the end, there is no loop
    return 0; 
}


int main(){

    vector<int> vect = {15,2,3,4,5,6};
    Node* head = ConvertArray2LL(vect);
    //Traversing through out thelikend list
    print(head);

}