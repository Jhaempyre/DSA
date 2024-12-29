//printing names n times (using recursion)

#include<iostream>
using namespace std;


void print_name(string name,int n){
    if(n!=0){
        cout<<name<<endl;
        n = n-1;
        print_name(name,n);
    }
}

int main(){
string name;
int n ; 
cout<<"please enter the name you want to enter";
cin>>name ;
cout<<"Enter the number of times you want this to happen";
cin>>n;

print_name(name,n);
return 0 ; 
}