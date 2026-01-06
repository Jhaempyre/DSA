/*
1
01
101
0101
10101
*/

#include<iostream>
using namespace std;
int main(){
    for(int i =1 ; i<=5;i++){
        for(int j = 1;j<=i;j++){
            if(i%2==0){
                if(j%2!=0){
                    cout<<"0"<<"\t";
                }else{
                    cout<<"1"<<"\t";
                }
            }
            else{
                if(j%2!=0){
                    cout<<"1"<<"\t";
                }else{
                    cout<<"0"<<"\t";
                }
            }
        }
        cout<<"\n";
    }
    return 0 ; 
}