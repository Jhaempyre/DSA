//In this section we are going to get the things like moving the array by 1 elements
//have only kept left reversal same concept for right reversal 
#include<iostream>
using namespace std ;

//this has worked with time complexity O(n)
int RotationByK(int arr [], int n , int k ){
    int temp[k];
    //keepting the rotating element with me 
    for (int i = (n-k); i<n;i++){
        temp[i-(n-k)]=arr[i];
    }//passed
    //shifting the elements to its location
    for (int j = (n-k) ; j>0;j--){
        arr[j+(k-1)]=arr[j-1];
        }

    for (int l = 0 ; l<k ; l++){
        arr[l]=temp[l];
    }
    return 0 ;
}
//BY reversing the array 
//this also has O(N) notation

int RotateByKReversal(int arr[],int n , int k ){
    int c = 0 ;
   auto reverse = [c](int arr[],int a , int b )mutable{// this c is capture list which is monstly unmutable but using mutable makes it mutable also can be done by using refrence of variable.
    int temp ;
    /*for (int i = a ; i<((b-a)/2) ; i++){
        cout<<"i ran"<<endl;
        temp = arr[i];
        arr[i]=arr[b-i];
        arr[b-i]=temp ;
    }*/
   /*for (int i = a ; i>c;i++){
    cout<<"i ran"<<endl;
        temp = arr[i];
        arr[i]=arr[b-i];
        arr[b-i]=temp ;
        c++;
    if(c>((b-a)/2)-1){
        break;
    }    
   }*/
  // we will use while loop

  while(a<=b){
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp ;
    a++;
    b--;
  }
   };
   //first reverse k elements 
   reverse(arr, 0, k-1);
   //reverse rest of the array
   reverse(arr, k, n-1);
   //reverse the whole array again
   reverse(arr, 0, n-1);
   return 0;
}

int main(){
    cout<<"Enter the array length";
    int n ; 
    cin>>n;
    int k ;
    cout<<"Enter the time array should be rotated"<<endl;
    cin>>k;
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
    //after result
    cout<<"Left rotated array by " <<k<<" element"<<endl;
    for (int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //RotationByK(arr,n,k);
    RotateByKReversal(arr,n,k);
    for (int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

}