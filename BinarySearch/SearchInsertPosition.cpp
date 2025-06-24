//Given a sorted array of distinct integers and a target value, return the index if
// the target is found. If not, return the index where it would be if it were inserted in order.
//You must write an algorithm with O(log n) runtime complexity.
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;


int SearchAndInsert(vector<int>&nums,int k){
    int n = nums.size();
    //the thinking is if we have to enter a number then it should be in between low and high and no element between them 

        int low = 0 ; 
        int high = n-1 ;
        int ans = n ;
        while(low<=high){
            int mid = (low+high)/2;
                if(nums[mid]>=k){
                    ans = mid;
                    high = mid-1;
                    
                }else{
                    low = mid+1;
                }
        }

        return ans ;
    }






int main(){
   std:: vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = SearchAndInsert(a, target);
    return 0;
}