//In this section we are gonnaa implement the Union operation on 2 arrays :
#include<iostream>
using namespace std;


int UnionOfArrays(int arr1[],int n1,int arr2[],int n2,int arr3[]){
//will use while loop
int i=0, j=0;

int z=0;
//comparing the element inspired from merge sort*_*
while(i<n1 && j<n2){
    if(arr1[i]==arr2[j]){
        arr3[z]=arr1[i];
        z++;
        i++;
        j++;
    }else if ( arr1[i]<arr2[j]){
        arr3[z]=arr1[i];
        z++;
        i++;
    }else{
        arr3[z]=arr2[j];
        z++;
        j++;
    }
}

//here we are gonna check if there are any elements left in arr1[]
while(i<n1 && j==n2){
    arr3[z]=arr1[i];
    z++;
    i++;
    }
//here we are gonna check if there are any elements left in arr2[]
while(j<n2 && i==n1){
    arr3[z]=arr2[j];
    z++;
    j++;
}


return z ; 
}

int main(){
    int n1;
    cout<<"Enter the length of 1st array";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the elements of 1st array";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }

    int n2;
    cout<<"Enter the length of 2nd array";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the elements of 2nd array";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"ENd of inputs"<<endl;
    int arr3[n1+n2];
    cout <<endl;
    int x = UnionOfArrays(arr1,n1,arr2,n2,arr3);
    cout<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<arr3[i]<<endl;
    }

}