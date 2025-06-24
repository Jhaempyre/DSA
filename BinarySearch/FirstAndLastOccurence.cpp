#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

     int LeftBiased(vector<int>&nums,int target){
        int n = nums.size();
        int low = 0 ;
        int high = n-1;
        int first = -1 ;

        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]<target){
                low = mid+1;
            }else if(nums[mid]>target){
                high=mid-1;
            }else if (nums[mid]==target){
                first=mid ;
                high=mid-1;
            }
        }

        return first ;

    }
    int RightBiased(vector<int>&nums,int target){
        int n = nums.size();
        int low = 0 ;
        int high = n-1;
        int last = -1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<target){
                low = mid+1;
            }else if(nums[mid]>target){
                high=mid-1;
            }else if (nums[mid]==target){
                last=mid ;
                low=mid+1;
            }
        }

        return last ; 
    }
    
    vector<int> searchRange(vector<int>&nums, int target) {
        int first = LeftBiased(nums,target);
        int last = RightBiased(nums,target);
        
        return {first,last};
    }






int main(){
   std:: vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    
    vector<int> x = searchRange(a,target);

    cout<<"["<<x[0]<<","<<x[1]<<"]";

    return 0;
}