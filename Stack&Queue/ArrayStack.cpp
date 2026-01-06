#include<iostream>
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

}