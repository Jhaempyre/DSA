//here we are obliged to find longest common subsequence ;

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

//brute force thinking only one such sequence is valid 
int LongestConsecutiveElementsSequence(vector<int>nums){
    sort(nums.begin(),nums.end());
    int lces = 1;
    for(int i = 0;i<nums.size()-1;i++){
        if((nums[i]-nums[i+1])==-1){
            lces++;
        }
    }

    return lces;
}

//using unordered set
int LongestConsecutiveElementsSequence(vector<int>nums){
    int n = nums.size();
    unordered_set<int> st;
    if(n==0){
        return 0;
    }
    int longest=1;
    for(int i =0 ; i<n ; i++){
        st.insert(nums[i]);
    }
    for (auto it:st){
        if(st.find(it-1) == st.end()){
            int count = 1 ;
            int x = it ;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                count++;
               
            }
            longest= max(longest,count);
        }
    }
    return longest;
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

    cout<<LongestConsecutiveElementsSequence(ver);
}