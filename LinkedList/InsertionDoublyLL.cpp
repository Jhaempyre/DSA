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

Node* InsertAtHead(Node* head, int val) {
    Node* newHead = new Node(val, nullptr, head);
    if (head != nullptr) head->back = newHead;
    return newHead;
}

Node* InsertAtTail(Node* head, int val) {
    if (head == nullptr) return new Node(val);

    Node* temp = head;
    while (temp->next != nullptr) temp = temp->next;

    Node* newNode = new Node(val, temp, nullptr);
    temp->next = newNode;

    return head;
}

Node* InsertAfterK(Node* head, int k, int val) {
    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < k) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) return head;

    Node* newNode = new Node(val, temp, temp->next);
    if (temp->next != nullptr)
        temp->next->back = newNode;
    temp->next = newNode;

    return head;
}

Node* InsertBeforeK(Node* head, int k, int val) {
    if (k == 1) return InsertAtHead(head, val);

    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < k) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) return head;

    Node* newNode = new Node(val, temp->back, temp);
    if (temp->back != nullptr)
        temp->back->next = newNode;
    temp->back = newNode;

    return head;
}


Node* InsertAfterValue(Node* head, int target, int val) {
    Node* temp = head;

    while (temp != nullptr && temp->data != target) {
        temp = temp->next;
    }

    if (temp == nullptr) return head;

    Node* newNode = new Node(val, temp, temp->next);
    if (temp->next != nullptr)
        temp->next->back = newNode;
    temp->next = newNode;

    return head;
}


Node* InsertBeforeValue(Node* head, int target, int val) {
    Node* temp = head;

    while (temp != nullptr && temp->data != target) {
        temp = temp->next;
    }

    if (temp == nullptr) return head;

    if (temp == head) return InsertAtHead(head, val);

    Node* newNode = new Node(val, temp->back, temp);
    if (temp->back != nullptr)
        temp->back->next = newNode;
    temp->back = newNode;

    return head;
}


void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" <-->";
        head=head->next;
    }
    cout<<endl;
}


int main(){

vector<int> vect = {15,2,3,4,5,6};

Node* head = ArrayToDoublyLL(vect);
print(head);

}