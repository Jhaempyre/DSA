//here we are trying to find longest subarray with sum k and then in response return the length of subarray

#include <iostream>
#include <vector>
#include<map>
using namespace std ;



//Bruteforce approach with thora dimag (will work for negative elements too)    
int longestSubarray(vector<int>&nums, int l){
    int length = 0;
    int n = nums.size();
    for (int i = 0 ; i<n;i++){
        for(int j=i ; j<n;j++){
            int sum = 0 ;
            for (int k = i ; k<=j;k++){
                
                sum = sum + nums[k];
            }
                if(sum==l){
                    int currentlength=j-i+1;
                    if (currentlength>length){
                        length=currentlength;
                    }
                } 
                
            }
        }
    return length ;
} 

//using maps and the array (//this works for negative array element too)
int longestSubarrayUsingMap(vector<int>&nums, int l){
    map<int,int> m;
    int n = nums.size();
    m[0]=-1;
    int sum = 0 ; 
    int length = 0 ;
    for (int i = 0; i <n ; i++){
        sum = sum + nums[i];
         // if sum not present, store first occurrence
        if (m.find(sum) == m.end()) {
            m[sum] = i;
        }
        int leftover = sum - l;
        auto it = m.find(leftover); //this find return an iterator if succes else return m.end() 
        if(it!=m.end()){
            int ci = it->second ;
            int lex = i-ci;
            if(lex>length){
                length = lex ;
            }
        }
     
    }
   // for (auto it = m.begin(); it != m.end(); ++it) {
    //std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
      return length ; 
}

//using pointers (Doesn't work for negative elements)
int longestSubarrayUsingTwoPointers(vector<int>&nums, int l){
    int left=0;
    int right = 0 ; 
    int n = nums.size();
    int length = 0;
    int sum = 0;
    while(right<n){
        sum = sum+nums[right];
        while(sum>l&&left<=right){
            sum= sum - nums[left];
            left++;
        }
        if(sum==l){
            int ci = right-left+1;
            if(ci>length){
                length = ci;
            }
        }
        right++;
    }
return length;
}

int main(){
    vector <int> ver ; 
    int n ;
    int k ; 
    cout<<"Enter the size of array"<<endl ;
    cin>>n ;
    cout<<"Enter the sum"<<endl;
    cin>>k;
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

    //uncomment the line you want to use ;-
    //int length = longestSubarray(ver,k);
    //cout<<length<<endl;
    //int length = longestSubarrayUsingMap(ver,k);
    //cout<<length<<endl;
    //int length = longestSubarrayUsingTwoPointers(ver,k);
    //cout<<length<<endl;

}