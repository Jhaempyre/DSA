#include<iostream>
#include<bits/stdc++.h>
using namespace std ;


class ArrayStack
{
private:
    /* data */
    int* stackArray ;
    int capacity ;
    int topIndex;
public:
    ArrayStack(int size ){
        capacity=size;
        stackArray = new int[size];
        topIndex = -1 ;
    };
    ~ArrayStack(){
        delete[] stackArray;
    };


    void push(int x ){
        if(topIndex>=capacity-1){
            cout<<"Stack overflow";
            return ;
        }
        topIndex++;
        stackArray[topIndex]=x ;

    }

    int pop(){
        if(topIndex==-1){
            cout<<"stack is empty";
            return -1;
        }
        int x = stackArray[topIndex];
        topIndex--;
        return x ;
    }

    int top(){
        if(topIndex==-1){
            cout<<"nothing here go home ";
            return -1;
        }
        return stackArray[topIndex];
    }

    bool isEmpty(){
        if(topIndex==-1){
            return true;
        }
        return false;
    }
};

int main(){
    int size = 100;
    ArrayStack* as = new ArrayStack(size);
    //as->push(17);
    //as->push(19);
    cout<<"THE Stack is here"<<endl;
    vector<string> commands = {"Arraystack","push","push","pop","top","isEmpty"};
    vector<vector<int>> inputs = {{},{5},{},{},{}};


    //running the commands here ;

    for(int i = 0 ; i <commands.size();i++){
        if(commands[i]=="push"){
            as->push(inputs[i][0]);
            cout<<"null";
        }else if (commands[i] == "pop") {
            cout << as->pop() << " ";
        }else if (commands[i] == "top") {
            cout << as->top() << " ";
        }else if (commands[i] == "isEmpty") {
            cout << (as->isEmpty() ? "true" : "false") << " ";
        }
        else if (commands[i] == "ArrayStack") {
            cout << "null ";
        }
    }

return 0 ;

}