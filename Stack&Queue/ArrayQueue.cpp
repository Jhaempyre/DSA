#include<iostream>
#include<bits/stdc++.h>

using namespace std ;


class ArrayQueue{

    int* arrayqueue;
    int start,end;
    int currSize , maxSize; 



    public :

    void push(int x ){
        //to check if the size is full
        if (currSize == maxSize) {
            cout << "Queue is full\nExiting..." << endl;
            exit(1);
        }
        //if not full ; 
        //either it is completly  empty ;
        if(end==-1){
            start=0;
            end =0;

        }else{
            //here means the qeueu already has some element ; 
            //we are not enforcing any circular qeuee
            end++;
            arrayqueue[end]=x ;
            currSize++;

        }

    }

    int pop(){
        //cheking if queue is empty
        if(end==-1){
            cout<<"Nothing in queue, exting"<<endl;
            exit(1);
        }
        //queueu is not empty thus poping from start
        int poop = arrayqueue[start];
        start++;
        currSize--;
        if (start > end) {
        start = -1;
        end = -1;
        }

        return poop;
    }

    int peek(){
        //cheking for emptiness 
        if(start==-1){
            cout << "Queue is Empty" << endl;
            exit(1);
        }
        return arrayqueue[start];
    }

    bool isEmpty(){
        return (currSize == 0);
    }

};

ArrayQueue::ArrayQueue(){
    arrayqueue= new int[20];
    start=-1;
    end=-1;
    currSize=0;
    maxSize= 100;
}





int main(){
    cout<<"implementing the Queue using array";
    ArrayQueue* queue = new ArrayQueue();
    vector<string> commands = {"ArrayQueue", "push", "push", 
                               "peek", "pop", "isEmpty"};
    vector<vector<int>> inputs = {{}, {5}, {10}, {}, {}, {}};
    for (int i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            queue->push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << queue->pop() << " ";
        } else if (commands[i] == "peek") {
            cout << queue->peek() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (queue->isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "ArrayQueue") {
            cout << "null ";
        }
    }
}
