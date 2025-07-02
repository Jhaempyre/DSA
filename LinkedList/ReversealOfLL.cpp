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

//well it can be done via recursion and also a single pass method 


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



// Function to reverse a linked list (single pass)
// using the 3-pointer approach
Node* reverseLinkedList(Node *head)
{
   // Initialize'temp' at
   // head of linked list
   Node* temp = head;  
   
   // Initialize pointer 'prev' to NULL,
   // representing the previous node
   Node* prev = NULL;  
   
   // Traverse the list, continue till
   // 'temp' reaches the end (NULL)
   while(temp != NULL){  
       // Store the next node in
       // 'front' to preserve the reference
       Node* front = temp->next;  
       
       // Reverse the direction of the
       // current node's 'next' pointer
       // to point to 'prev'
       temp->next = prev;  
       
        // Move 'prev' to the current
        // node for the next iteration
       prev = temp;  
       
        // Move 'temp' to the 'front' node
        // advancing the traversal
       temp = front; 
   }
   
   // Return the new head of
   // the reversed linked list
   return prev;  
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

