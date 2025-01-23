//we will try to do hashing for arrays to get fastet fetching 

#include<iostream>
using namespace std ; 

int main(){
    int n ;
    cout<<"Enter how much element you want in an array";
    cin>>n;
    int arr[n];
    int hash[n]={0};

    //taking input in the array]
    for (int i = 0;i<n; i++){
        int input ; 
        cin>>input;
        arr[i]=input;
    }

    for(int i = 0 ; i<n;i++){
        cout<<"enterd"<<endl;
        hash[arr[i]]+=1;
    }

    for(int i = 0; i<n ; i++){
        cout<<hash[i]<<" ";
    }

    while(n>0){
        cout<<"Enter a number to search in array"<<endl;
        int ind;
        cin>>ind;
        if(hash[ind]>=1){
            cout<<"Number is present in array"<<endl;
            cout<<hash[ind]<<"times";
        }else{
            cout<<"Number is not present in array"<<endl;
        }
        n = n-1 ; 

    }
    //do a case to exit from this loop

}