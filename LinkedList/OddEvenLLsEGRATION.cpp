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



Node* oddEvenList(Node* head){
    if(head==nullptr || head->next==nullptr){
            return head ;
        }

        Node* odd = head ;
        Node* even = head->next;
        Node* evenHead = head->next;

        while(even!=nullptr && even->next!=nullptr){
            odd->next = odd->next->next;
            even->next= even->next->next; 

            odd= odd->next;
            even = even->next;
        }
        odd->next=evenHead;

return head ;
    
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

    print(oddEvenList(head));
  
  

}

