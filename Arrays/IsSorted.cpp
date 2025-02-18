//we will be implementing , is the array is sorted ?

#include<iostream>
using namespace std ; 

 // the complexity of this functionn is o(n)
bool IsSorted(int arr[],int n ){
    bool stage = true;
    for(int i = 1; i <n ; i ++){
        if(arr[i-1]>arr[i]){
        cout<<arr[i-1]<<">"<<arr[i];
        stage = false ;
            break;
        };
    }
    return stage ; 
}

int main(){
    int n ;
    
    cout<<"enter thge length of array"<<endl;
    cin>>n ;
    int arr[n];
    for (int i = 0 ; i < n ; i ++){
        int a ;
        cin>>a ; 
        arr[i]= a ; 
    }
    cout<<endl;

    //displaying the array 

    for (int i = 0 ; i <n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Is the array is in ascending order ???"<<IsSorted(arr,n);

    
}

//similarly can be done for descending order tooo ..........
