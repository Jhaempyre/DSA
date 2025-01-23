//print 1 to N using recusrsion 

#include<iostream>
using namespace std ; 

int i = 1 ;

void print1toN(int n){
    if(i<=n){
        cout<<i<<" ";
        i = i+1;
        print1toN(n);
    }
    
}

int main(){
    int n ;
    cout<<"Enter a number: ";
    cin>>n;
    print1toN(n);
}


//trying another method which will also help in acknowleding the actual working of recursion stack (using backtracking)
/*
#include<iostream>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i<1) return;
   
   // Function call to print (n-1) integers.
   func(i-1,n);
   cout<<i<<endl;

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n = 4;
  func(n,n);
  return 0;

}
*/