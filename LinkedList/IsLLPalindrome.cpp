#include<iostream>
#include<bits/stdc++.h>
using namespace std ; 

class Node{

    public :
    int data ;
    Node* next ;

    public:
    Node(int data1 ){
        data = data1;
        next = nullptr ;
    }

    Node(int data1 , Node* next1){
        data= data1;
        next = next1;
    }




};


Node* ConvertArray2LL(vector<int> v){

    Node* head = new Node(v[0]);
    Node* mover = head ;

    for(int i = 1 ;i < v.size() ; i++){
        Node* temp = new Node(v[i]);
        mover->next=temp;
        mover = temp ;
    }

    return head ;

}

void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<endl;
}


Node* reverseLinkedList(Node* head) {
    // Base case:
    // If the linked list is empty or has only one node,
    // return the head as it is already reversed.
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    // Recursive step:
    // Reverse the linked list starting 
    // from the second node (head->next).
    Node* newHead = reverseLinkedList(head->next);
    
    // Save a reference to the node following
    // the current 'head' node.
    Node* front = head->next;
    
    // Make the 'front' node point to the current
    // 'head' node in the reversed order.
    front->next = head;
    
    // Break the link from the current 'head' node
    // to the 'front' node to avoid cycles.
    head->next = NULL;
    
    // Return the 'newHead,' which is the new
    // head of the reversed linked list.
    return newHead;
}

bool isLLPalindrome(Node* head){
    Node* fast = head ;
    Node* slow = head ;

     if (head == NULL || head->next == NULL) {
        //single element or no elemnet
        return true; 
    }

    while (fast->next != NULL && fast->next->next != NULL) {
        
        slow = slow->next;  
        
        fast = fast->next->next;  
    }
  
    //Reversing the second half list 

     Node* newHead = reverseLinkedList(slow->next);
     Node* first = head ;
     Node* second = newHead ; 

     while(second!=nullptr){
        if(first->data!=second->data){
            return false ;
        }
        first = first->next; 
        second = second->next;

     }



    return true ;
}


int main(){

    vector<int> vect = {15,2,3,4,5,6,7};
    Node* head = ConvertArray2LL(vect);
    //Traversing through out thelikend list
    print(head);
    isLLPalindrome(head);
}


