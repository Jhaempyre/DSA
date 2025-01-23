//we will use hash map for having array of size greater than 10^9
/*  since we can't use the things greater than 10^5 in main function 10^6 in global function and for string 10^6 and 10^7 as former*/

//using orderd map

#include<iostream>
//#include<map>
#include <unordered_map>
using namespace std ; 

int main(){
    int n ;
    cout<<"enter the array";
    cin>>n;
    int arr[n];
    //array input
    for (int i =0 ; i<n;i++){
        cin>>arr[i];
    }
    //orderedmap computaiton
    //map<int,int> d ; it will sort it out;
    //unorderedmap computation
    unordered_map<int,int> d;

    for(int j =0 ; j<n;j++){
        d[arr[j]]=d[arr[j]]+1;
    }

    for(auto it : d){
        cout<<it.first<<"->->"<<it.second<<endl;

    }


}


