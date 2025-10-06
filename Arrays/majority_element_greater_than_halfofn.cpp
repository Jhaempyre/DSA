#include<iostream>
#include<bits/stdc++.h>
using namespace std ;



int FindMajorityElement(vector<int>vect){
    int n = vect.size();
    map<int, int > m ;
    for (int i = 0; i<n ; i++){
        m[vect[i]]++;
    }
    for (auto it : m){
        if(it.second>(n/2)){
            return it.first;
        }
    }
    return -1 ;
}



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
}