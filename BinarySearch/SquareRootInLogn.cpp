#include<iostream>
#include<bits/stdc++.h>
using namespace std ;


int sqrt(int n){
    int low = 1 ; 
    int high = n ;
    while(low<=high){
        int mid = (low+high)/2;
        int val = mid*mid;

        if(val<=n){
            low = mid +1 ; 

        }else{
            high = mid -1 ;
        }
    }

    return high ; 

}






int main(){
 int n ; 

 cin>>n;

 cout<<sqrt(n);
 
}
