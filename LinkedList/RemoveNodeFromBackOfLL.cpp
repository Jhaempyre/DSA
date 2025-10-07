#include<iostream>
#include<bits/stdc++.h>
using namespace std ;


class Node{
    public:
    int data ;
    Node* next ; 

    Node(int data1){
        data = data1 ;
        next = nullptr;
    }

    Node(int data1 , Node* next1 ){
        data= data1;
        next = next1;
    }





};



Node* RemoveNodeFromBackOfLL(Node* head , int n ){
    Node* slow = head ;
    Node* fast = head ;

    
    return slow ;
}

Node* deleteatk(Node* head , int k ){
    int count = 1 ;
    Node* temp = head ;
    Node* prev = NULL;



    while(temp!=NULL){

        if(count==k){
            //deletion begins;
            Node* ekaur = temp->next;
            temp->next= temp->next->next;
            free(ekaur);
            break ;
        }

        prev= temp ;
        temp = temp->next ;

        count++;
    
    }
    return head ;

}


Node* ConvertArray2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head ;

    //now traversing in array and adding all the elements
    for(int i = 1 ; i<arr.size();i++){
        cout<<"again\t";
        Node* temp = new Node(arr[i]);
        mover->next=temp ;
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

int main(){

    vector<int> vect = {1,2,3,4,5,6,7};
    Node* head =ConvertArray2LL(vect);
    cout<<"your converted array to linked list is:\t";
    print(head);
    Node* delhead = deleteatk(head,4);
    print(delhead);
    cout<<endl;
    Node* deletedhead = RemoveNodeFromBackOfLL(head,2);
    cout<<"your deleted linked list is here man , i hope you like it :\t";
    print(deletedhead);
}