#include<iostream>
#include<vector>
#include<map>
#include <bits/stdc++.h>//for sort

using namespace std ;

//brute force approach
string DoesPairExsist(vector<int>&nums,int sum ){
    int n = nums.size();
    for (int i = 0;i <n;i++){
        for(int j=i;j<n;j++){
            if(nums[i]+nums[j]==sum){
                return "true";
            }
        }
    }
    return "false" ;
}


//{for varity 2 when asked with index then send them in vectors [i,j] or pairs
// and then get those elemtn get current value of the funciton and then pass them}

//using hashmaps
//{for varity 2 when asked with index then send them in vectors [i,j] or pairs
// and then get those elemtn get current value of the funciton and then pass them}
string DoesPairExsistByHashMap(vector<int>&nums,int sum ){
    map<int,int> m ;
    int n = nums.size();
    for(int i = 0 ; i <n ; i++){
        int num = nums[i];
        int needed = sum -i;
        if(m.find(needed)!=m.end()){
            return "true";
        }
        m[nums[i]]=i;
    }
    return "false";
    
}

//using sliding window or two pointers (variety 2 of returing index is not possible here without using any other data strucutures)
string DoesPairExsistByTwoPointer(vector<int>&nums,int sum ){
    int left = 0 ; 
    int n = nums.size();
    int right = n-1 ;
    sort(nums.begin(),nums.end());

    while(left<right){
        int suck = nums[left]+nums[right];
        if(suck==sum){
            return "true";
        }
        else if(suck<<sum){
            left++;
        }else{
            right--;
        }
       
    }

    return "false";
    
    
}



int main(){
    vector <int> ver ; 
    int n ;
    int sum ; 
    cout<<"Enter the size of array"<<endl ;
    cin>>n ;
    cout<<"Enter the sum"<<endl;
    cin>>sum;
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

    cout<<DoesPairExsist(ver,sum);

}