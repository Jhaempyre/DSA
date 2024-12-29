//sum of numvers using recursion
#include<iostream>
using namespace std ;

int addNumbers(int sum,int n){
   if(n==0){
    return sum ; 
   }else {
    return addNumbers(sum+n,n-1);
   }
}

int main(){
    int n, sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout<<addNumbers(sum,n);
    return 0 ;
}