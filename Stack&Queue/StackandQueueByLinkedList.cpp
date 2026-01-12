#include<iostream>
#include<bits/stdc++.h>

using namespace std ;


class Node{
    public:
        int x ;
        Node* next ;

    Node(int a){
        x = a ;
        next= nullptr;
    }
    
};

class Stack{
    private:
    Node* head ;
    int size ;

    public:
    Stack( ){
        head = NULL;
        size = 0;
    }

    void push(int a ){
        Node* temp = new Node(a);
        temp->next=head;
        head = temp;
    }

    int pop(){
        //first to check if stack is empty
        if(head==nullptr){
            return -1 ;
        }
        int poop = head->x;
        Node* temp = head ;
        head= head->next;
        delete temp ;
        size--;

        return poop;
    }

    int top(){
        if(head==nullptr){
            return -1;
        }

        return head->x;
    }

    bool isEmpty(){
        return (size==0);
    }


};

class Queue{
    Node* start ;
    Node* end ;
    int size ;

    public:
    Queue(){
        start = nullptr;
        end =nullptr;
        size = 0;
    }

    void push(int x ){
        Node* newer = new Node(x);
        if(start==nullptr){
            start=end = newer;
        }else{
            end->next=newer;
            end=newer;
        }
        size++;
    }


    int pop(){
        if(start==nullptr){
            return -1;
        }
        int val = start->x;

        Node* temp = start->next;
        delete start ;
        start = temp ;
        size -- ; 
        
        if(start==nullptr){
            end=nullptr;
        }
        return val ;
    }


    int top(){
        //first checking if the top is empty or not 
        if(start=nullptr){
            return -1;
        }
        return start->x;
    }


    bool isEmpty(){
        return (size==0);
    }

};
int main(){

    Stack st ;
    Queue q;
    // List of commands
    vector<string> commands = {"Stack", "push", "push", 
                               "pop", "top", "isEmpty"};
    // List of inputs
    vector<vector<int>> inputs = {{}, {3}, {7}, {}, {}, {}};

    for (int i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            st.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << st.pop() << " ";
        } else if (commands[i] == "top") {
            cout << st.top() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (st.isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "Stack") {
            cout << "null ";
        }
    }


    // List of commands
    vector<string> command = {"Queue", "push", "push", 
                               "top", "pop", "isEmpty"};
    // List of inputs
    vector<vector<int>> inputs = {{}, {3}, {7}, {}, {}, {}};

     for (int i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            q.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << q.pop() << " ";
        } else if (commands[i] == "peek") {
            cout << q.top() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (q.isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "LinkedListQueue") {
            cout << "null ";
        }
    }



    return 0;


}