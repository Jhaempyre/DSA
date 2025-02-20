//In this section we will  implement the linear search will will search the element in array and wiil give index 
#include<iostream>

int main(){
    int n ; 
    std::cout<<"Enter the length of array ";
    std::cin>>n ;
    int arr[n];
    std::cout<<"Enter the elements of array ";
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
        }
        int x ; 
    std::cout<<"Enter the number you want to search";
    std::cin>>x;
    int index = -1;
    for(int i = 0 ; i <n ; i++){
        if(arr[i]==x){
            index = i;
        }
    }
    if(index==-1){
    std::cout<<"it is not in array"<<index;
}else{
    std::cout<<"it is in array at index "<<index;
}
}