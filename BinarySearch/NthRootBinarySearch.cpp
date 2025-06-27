#include<iostream>
using namespace std ; 


long loop(long  mid , long n ){
    long ans = 1 ;
    for(long i = 1; i<=n ;i++){
        ans = ans*mid;
    }
    cout<<ans<<endl;
    return ans ; 
}



int nthsquareroot(int x , int n ){

    int low = 1 ; 
    int high = x ;
    
    while(low<=high){
        long mid = (low+high)/2;
        long val = loop(mid,n);

        if(val==x){
            return mid;
        }

        if(val<=x){
            low= mid+1;
        }else{
            high = mid-1;
        }
    }

    return high ;

}




int main (){
    int x ;
    int n ; 
    cin>>x;
    cin>>n;


    cout<<nthsquareroot(x,n);
}



//try long long for each varaible it will work for all 
