//printing N to 1 using recursion 

#include<iostream>
using namespace std ; 

void printNumber(int n ){
    if (n!=0){
        cout<<n<<" ";
        printNumber(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    printNumber(n);
    
}