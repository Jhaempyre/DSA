//here in this section we are just rotating the array in left direction by 1 element 

#include<iostream>
using namespace std ; 

//Time complexity is O(n)

int RotateBy1(int arr[],int n){  // people are saying it bruteforce
    int x = arr[0];
       cout<<x<<"last";

    int temp[n];
    for(int i = 0; i <n-1;i++){
        temp[i] = arr[i+1];
    }   
    temp[n-1] = x;
    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
        }
    return 0 ;     
}

//Time complexity is O(n)
int RotateBy_1(int arr[],int n ){
    int x = arr[0];
    for(int i =1 ; i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1] = x ;
    return 0 ;
}

int main(){
    cout<<"Enter the length of array";
    int n ; 
    cin>>n;
    int arr[n] ;
    for(int i = 0 ; i < n ; i ++)
    {
        cin>>arr[i] ;
    }

    //Display the original array 

    cout<<"original array"<<endl;

    for (int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    //RotateBy1(arr,n);//brute force method  as it uses n array
    RotateBy_1(arr,n);//THIS IS OPTIMAL as it uses a single array 
    cout<<"Left rotated array by 1 element"<<endl;
    for (int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<" ";
    }
}