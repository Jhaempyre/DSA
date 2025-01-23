//to find fiboanci number
/*we can use multiple method for fibonacci number the thing is f(n)= f(n-1)+f(n-2) can be done from vvarious 
iterative process since we are in recursion we tried to had this recursive appproach.*/

#include<iostream>
using namespace std ; 

void fibonacci(int n , int a , int b){
    if (n == 1){
        cout<<a;
        return;
    }
    else{
        cout<<a<<" ";
        fibonacci(n - 1 , b , a + b);
    }
}

int main(){
    int n ;
    cout<<"Enter the number of terms you want in the sequence"<<endl;
    cin>>n ;
    int a = 0 ; 
    int b = 1;

    fibonacci(n,a,b);
    
}