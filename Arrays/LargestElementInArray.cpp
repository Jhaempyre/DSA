//We will be finding largest element in array

//naive approach 

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;


//this function is being done by doing sorting the array and get the last element ;
//Time Complexity: O(N*log(N))
int largest_In_Array(vector<int> &v){
    sort(v.begin(),v.end());
    return v[v.size()-1];
}

//by remembering the largest element while travesring 
int sort_By_Loop(vector<int> &v){
    if(v.size() == 1){
        return v[0];
    };
    int max = v[0];
    for(int i = 0;i < v.size();i++){
        if (v[i]>max){
            max = v[i];
        }
    }
    return max;
}

int main(){
    //sort the array the largest element at last 
    vector <int> ver ; 
    int n ; 
    cout<<"Enter the size of array"<<endl ;
    cin>>n ;

    //taking input in array
    for(int i = 0 ; i < n ; i++)
    {
        int x ; 
        cout<<"Enter the element "<<i+1<<endl ;
        cin>>x ;
        ver.push_back(x) ;
    }

    //priting the array
    for(int i = 0 ; i<n ; i++)
    {
        cout<<ver[i]<<" " ;
    }

    cout<<"The largest element is : "<<largest_In_Array(ver);
    cout<<"The largest element is : "<<sort_By_Loop(ver);
   

}




