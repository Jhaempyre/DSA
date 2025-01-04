//Reversing an array using recursion:::

#include<iostream>
using namespace std ; 
int arr[200];
int l , r ;
/*
void reverseArray(int arr[],int n){  // works well in the while loop but we need recursion:
    int l = 0 ; 
    int r = n-1 ;
    while(l<=r){
        int a = arr[r];
        arr[r]= arr[l];
        arr[l]=a;
        l = l+1;
        r = r-1 ;
    }
}*/


//can also be done using an extra array::(so easy)
//just take last element from the original array and then add it in new array


void reverseArray(int arr[], int n ){ //this gonna be by recursion..
    if(l<r){
        int a = arr[r];
        arr[r]= arr[l];
        arr[l]=a;
        l = l+1;
        r = r-1 ;
        reverseArray(arr,n);
    }
}

void inputArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    };
    l = 0 ;
    r = n-1 ;
}

void printArray(int arr[],int n ){
    cout<<"[";
    for (int i =0 ; i<n ; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;

}

int main(){
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n ;
    inputArray(arr,n);
    reverseArray(arr,n);
    printArray(arr,n);

}