#include<iostream>
using namespace std ; 

int count = 1;
//showing infinite recursion example
int infinite_Recursion(){
if ( count==0){
    cout << "condition met" ;
}
else{
    count++;
    cout<<"conditon didn't met asked \t"<<count<<"\t times"<<endl;
    infinite_Recursion();
}
return 0 ;
}
//main function
int main(){
    
    
    infinite_Recursion();

    return 0 ;
}