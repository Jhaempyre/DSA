#include <iostream>
#include <vector>
using namespace std ;


int kadanesSum(vector<int>&vect){
     int currentSum=0;
        int maxSum = INT_MIN;
        for (int i = 0 ; i<vect.size();i++){
            currentSum=currentSum+vect[i];
            maxSum = max(currentSum,maxSum);
            if(currentSum<0){
                currentSum=0;
            }
        }
        return maxSum;
    


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
}



//in some case you may be askd to print the array in that case you have to keep track of last time the sum became zero in that if clause also when the sum becomes zero
//at that pont you have to keep track of that .. and boom print it .