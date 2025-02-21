//Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

#include<iostream>

int FindMissingNumber(int arr[], int n )
{
    int totalSum = (n * (n + 1)) / 2;
    int sumOfArray = 0;
    for(int i = 0; i < n-1; i++)
    {
        sumOfArray += arr[i];
        }
        return totalSum - sumOfArray;
}

int main(){
    int n ; 
    std::cout<<"Enter the length of array ";
    std::cin>>n ;
    int arr[n];
    std::cout<<"Enter the elements of array ";
    for(int i=0;i<n-1;i++){
        std::cin>>arr[i];
        }
    int num = FindMissingNumber(arr,n);
    std::cout<<"The missing number is :-"<<num ;

}