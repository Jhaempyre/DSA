//factorial of the given number using recursion
#include<iostream>
using namespace std ; 

int factorial(int fact ,int n){
    if (n==0){
        return fact ;
    }else{
        fact = n*fact;
        n = n-1 ;
        cout<<fact;
        return factorial(fact,n);
    }
}

int main(){
int n ; 
int fact=1;
cout<<"Enter number for which you want factorial  ";
cin>>n;
cout<<factorial(fact , n );
}