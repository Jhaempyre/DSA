#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void Sort_0_1_2(vector<int>&arr){
    int n = arr.size();
     int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) cnt0++;
        else if (arr[i] == 1) cnt1++;
        else cnt2++;
    }

    //Replace the places in the original array:
    for (int i = 0; i < cnt0; i++) arr[i] = 0; // replacing 0's

    for (int i = cnt0; i < cnt0 + cnt1; i++) arr[i] = 1; // replacing 1's

    for (int i = cnt0 + cnt1; i < n; i++) arr[i] = 2; // replacing 2's

     for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
    
}


//this a something called dutch national flag algorithm i will do it later on 


int main(){
    vector <int> ver ; 
    int n ;
    cout<<"Enter the size of array"<<endl ;
    cin>>n ;
   
    //taking input in array
    for(int i = 0 ; i < n ; i++)
    {
        int x ; 
        cout<<"Enter the element "<<i+1<<endl ;
        cin>>x ;
        ver.push_back(x) ;
    }

    //priting the array
    for(int i = 0 ; i<n ; i++)
    {
        cout<<ver[i]<<" " ;
    }
    cout<<endl;
    Sort_0_1_2(ver);
}