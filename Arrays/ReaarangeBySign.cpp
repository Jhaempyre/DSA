#include<iostream>
#include<vector>
using namespace std ;


void rearrageArray(vector<int>&vect){
    vector<int>disp(vect.size(),0);
    int po=0;
    int ne=1;
    for(int i = 0 ; i<vect.size();i++){
        if(vect[i]>0){
            disp[po]=vect[i];
            po=po+2;
        }else{
            disp[ne]=vect[i];
            ne=ne+2;
        }
    }
    for(int i = 0 ; i<disp.size();i++){
        cout<<disp[i]<<" ";
    }
    
    
}

int main(){
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
    cout<<endl;

    rearrageArray(ver);
    
}