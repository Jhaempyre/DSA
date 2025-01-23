//Hashing is peocesss for counting the no of items 

//this was done  by brute force method

#include<iostream>
using namespace std ;

int arr[]= {1,2,3,4,5,6,6,5,3,2,1,9,8,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
int n = sizeof(arr)/sizeof(arr[0]);
int x;


int main(){

cout<<"The array is : "<<arr<<endl;
cout<<"Please enter your query";
cin>>x;
int count;

for (int i = 0 ; i <n ; i++){
    if(arr[i]==x){
        cout<<"The element is present at index "<<i<<endl;
    count++;
        break;
    }
    if(i==n-1){
        cout<<"The element is not present in the array"<<endl;
    }
}

cout<<"The element"<<x<<"is present "<<count<<" times in the array";
}
