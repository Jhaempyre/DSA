#include<iostream>
using namespace std ;
int count = 6;
//showing healthy recursion
void recursion(){
    //it must have base case ; this is base case
    if(count==0){
        cout << "Count last to  \t"<<count ;
    }
    else{
        cout<<"current count is \t"<<count<<endl;
        count--;
        recursion();
    }
}
//main function
int main(){
    recursion();
    return 0 ;
}