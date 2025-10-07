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



Node* RemoveNodeFromBackOfLL(Node* head , int n  ){
    Node* kachuaa = head ;
    int kachuastepcount = 0;
    Node* khargosh = head ;
    Node* starter = head ;
    int targetfruit = n ;
    int totalcount ; 

    /* the first thing is to come at mid when we are at mid we can think of like we will count the step up to 1/2 
    if the given value if more than half what we will do is we will see that it is right of middle and hence we will like we have  ll of 8 counts and half
     is for to remove from back is 2 it means the postion is 6 which is 2 more than the current mid thus we will break the loop and then we will just move the counter that n times and getting at that point we will drop it , 
     i guess yeass it saves the mazor proprtion of our thinkings will see edge cases lastly .*/

     while((khargosh!=nullptr) && (khargosh->next!=nullptr)){
       kachuaa= kachuaa->next;
       khargosh= khargosh->next->next;
       kachuastepcount++;
    }
    totalcount = kachuastepcount*2;
    if((totalcount-n)>kachuastepcount){
         //this means it will go right 
         //now we need to delete the loop
        int rassi = totalcount-n ;
        targetfruit= rassi - kachuastepcount;
        for(int i = 1 ; i<targetfruit; i++){
            kachuaa= kachuaa->next;
            if(targetfruit-i==1){
                kachuaa->next=kachuaa->next->next;
                kachuaa->next->next=nullptr;
                break;
            }
        }
        return kachuaa;
    }else{
        //should be started directly from start
        int rassi = totalcount-n ;
        targetfruit= rassi - kachuastepcount;

        for(int i = 1 ; i<targetfruit; i++){
            starter= starter->next;
            if(targetfruit-i==1){
                starter->next=starter->next->next;
                starter->next->next=nullptr;
                break;
            }
        }

        return starter ;
    } 
    
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

    vector<int> vect = {1,2,3,4,5,6};
    Node* head =ConvertArray2LL(vect);
    cout<<"your converted array to linked list is:\t";
    print(head);
    cout<<endl;
    Node* deletedhead = RemoveNodeFromBackOfLL(head,2);
    cout<<"your deleted linked list is here man , i hope you like it :\t";
    print(deletedhead);
}