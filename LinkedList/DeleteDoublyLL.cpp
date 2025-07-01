#include<iostream>
#include<bits/stdc++.h>

using namespace std ; 


class Node{

    public:
    int data ; 
    Node* back ;
    Node* next ;

    public:
    Node(int data1 , Node* back1 , Node* next1){
        data = data1;
        back= back1;
        next= next1;
    }

    Node(int data1){
        data= data1;
        back=nullptr;
        next=nullptr;
    }


};


Node* ArrayToDoublyLL(vector<int> vect){
    Node* head = new Node(vect[0]);
    Node* prev = head ;

    for(int i = 1 ; i<vect.size();i++){
        Node* newNode = new Node(vect[i],prev,nullptr);
        prev->next=newNode;
        prev = newNode;
    }

    return head ;
}


Node* RemoveHeadFromDLL(Node* head ){
    Node* temp = head ;

    temp= temp->next;
    temp->back=nullptr;
    head->next=nullptr;
    delete (head);


    return temp;
}


Node* RemoveTailFromDLL(Node* head){
    Node* temp = head ; 

    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    Node* tail = temp->next;      // the last node
    temp->next = nullptr;         // remove tail link from 2nd last
    delete tail;                  // delete the actual last node
    return head ;
}


Node* RemoveFromKthElementInDLL(Node* head,int k){
    Node* temp = head ;
    Node* prev = nullptr; 

    int count = 0 ;
    while(temp!=nullptr){
        count++;
        if(count==k){
            break;
        }
        temp=temp->next;
    }
        Node* front = temp->next;
        Node* back = temp->back;

        if(front==nullptr && back==nullptr){
            return NULL ;
        }else if (front==nullptr){
            return RemoveHeadFromDLL(head);
        }else if (back==nullptr){
            return RemoveTailFromDLL(head);
        }

        back->next = front ; 
        front->back = back ;
        free ( temp );

    return head ;
}


Node* removeTheuniqueElementInDLL(Node* head , int val){
     Node* temp = head ;
    Node* prev = nullptr; 

    
    while(temp!=nullptr){
        
        if(temp->data==val){
            break;
        }
        temp=temp->next;
    }
        Node* front = temp->next;
        Node* back = temp->back;

        if(front==nullptr && back==nullptr){
            return NULL ;
        }else if (front==nullptr){
            return RemoveHeadFromDLL(head);
        }else if (back==nullptr){
            return RemoveTailFromDLL(head);
        }

        back->next = front ; 
        front->back = back ;
        free ( temp );

    return head ;
}


void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" <-->";
        head=head->next;
    }
    cout<<endl;
}


int main(){

vector<int> vect = {15,2,3,4,7,6};


Node* head = ArrayToDoublyLL(vect);
print(head);

/*
Node* newDLL= RemoveHeadFromDLL(head);
print(newDLL);

Node* newTailDLL = RemoveTailFromDLL(head);
print(newTailDLL);


Node* kthDeleteDLL = RemoveFromKthElementInDLL(head,5);
print(kthDeleteDLL);
*/

Node* uniqueDeleteDLL = removeTheuniqueElementInDLL(head, 7);
print(uniqueDeleteDLL);

}