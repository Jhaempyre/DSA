// we will be finding the second largest element in the array :-;
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std ; 

//this function time complexity is O(n)
int SecondLargest(vector <int> &v){
    int max1 =v[0]; int max2 = v[0];
    //cout<<"control is here";
    for (int i = 0 ; i <v.size(); i++){
        if (v[i]>max1){
            //cout<<" max1 =\t"<<max1<<endl;
            max2 = max1 ;
            max1 = v[i];
            //cout<<"max2 \t"<<max2<<endl;
        }
        else if((v[i]>max2)&&(max1!=v[i])){
            max2 = v[i];
            cout<<"i"<<v[i];
        }
    };
    return max2 ;
}

int main(){
    //taking input in the vector 
    vector <int> vect;
    int n ;

    cout<<"enter element in the array ";
    cin>>n ;

    for (int i = 0 ; i<n ; i ++){
        cout<<"Enter"<<i<<"th elemnt";
        int x ; 
        cin>>x ; 
        vect.push_back(x);
    }

    //printing the array 

    for (int i = 0 ; i< vect.size();i++){
        cout<<vect[i]<<" ";
    }
    cout<<"The second largest element in the array is :-"<<SecondLargest(vect);
}

//second smallest can be find in the same way
