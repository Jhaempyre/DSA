//In this section we are counting how much consecutives ones are presenet in the the array
#include <iostream>
#include<vector>
using namespace std ; 

int FindOnes(vector<int> &v,int n){
    int count{} ; 
    int max{}; 

    for(int i = 0 ; i <n;i++){
        if(v[i]==1){
            count++;
            if(count>max){
            max++;
        }
        }else{
            count = 0 ;

        }
    }

    return max;
}


int main(){
    int n ; 
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    vector<int> v;
    cout<<"Enter the element of array"<<endl;
    for(int i =0 ; i < n ; i++){
        int x ; 
        cin>>x;
        v.push_back(x);
    }

    cout<<"Array Inserted"<<endl;

    int max = FindOnes(v,n);
    cout<<"The maximum time 1 appeared consecutively is :-"<<max;
}