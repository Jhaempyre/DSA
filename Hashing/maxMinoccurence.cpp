//we will ue unordered map for this problem 

#include<iostream>
#include<unordered_map>
#include<utility>
using namespace std ; 

int main(){
    cout<<"Enter the array length ";
    int n ;
    cin>>n;
    int arr[n];
    pair<int,int> dp ; 
    unordered_map<int,int>bc;
    cout<<"Enter arrayhere ";
    for(int i= 0; i<n;i++){
        cin>>arr[i];
        bc[arr[i]]=bc[arr[i]]+1;
        //to chek maximum
        if(bc[arr[i]]>dp.second){
            cout<<bc[arr[i]]<<" cheking bss"<<dp.first<<" ->>"<<dp.second;
            dp.first=arr[i];            
        }        
    }

    for (auto it : bc){
        cout<<it.first<<"->"<<it.second<<endl;
    }



}