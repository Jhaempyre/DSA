//In this section what we will do is push all the zero in array from all position to end and
//slide the dgits left 

#include<iostream>
using namespace std ; 


//we will do this using  a temporary array 
void moveZero(int arr[],int n ){
    int temp[n]={0};
    int c=0 ; 
    for(int i = 0 ; i<n;i++){
        if(arr[i]==0){
            temp[i]=0;
            c++;
            continue;
        }else{
            temp[i-c]=arr[i];

        }   

    }    
    for (int i =0 ; i<n;i++){
        arr[i]=temp[i];
    }
    
}
//Let's do the same using pointers 
void  moveZeroAtEnd(int arr[],int n){
    int i{},j{};
    for (j; j<n;j++){
        if(arr[j]=0){
            i++;
        } //will do this way too someday 
    }
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
    moveZero(arr,n);
    cout<<"zero at end wala array"<<endl;
    for (int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<" ";
    }
}