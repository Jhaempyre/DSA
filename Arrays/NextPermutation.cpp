//here we wre trying to find the next arrangement of the number in just next lexicographical order 
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

void NextPermutation(vector<int>&nums){
    int n = nums.size();
    int pivIndex=-1;
    for (int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            pivIndex=i;
            break;
        }
    }
    if(pivIndex==-1){ 

        reverse(nums.begin(), nums.end());
        return ;
    } 

    for(int i = n-1;i>pivIndex;i--){  
        if(nums[i]>nums[pivIndex]){  
        swap(nums[i],nums[pivIndex]); 
        break;
        }
    } 
    reverse(nums.begin()+pivIndex+1,nums.end());
    for(int i = 0 ; i<n ; i++)
    {
        cout<<nums[i]<<" " ;
    }
    cout<<endl;
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

    NextPermutation(ver);
}