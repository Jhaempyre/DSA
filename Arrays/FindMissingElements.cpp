//In this section we will find the missing element in the array where array is the simple count from 1 to N

#include <iostream>

int findNumber(int arr[], int n ){
    int x ;
    for (int i = 0; i <n ; i++){
        if(arr[i]!=i+1){
            x = i;
        }
    }
    return x ; 
}

int main(){
    int n ; 
    std::cout<<"Enter the length of array ";
    std::cin>>n ;
    int arr[n];
    std::cout<<"Enter the elements of array ";
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
        }
    
    int x = findNumber(arr, n);

    std::cout<<"The missing element is:-"<<x;
}