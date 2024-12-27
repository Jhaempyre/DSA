#include<iostream>
using namespace std ;

void thepair(){
    //accessing pairs:
    pair<int,int > p = {10,15} ;
    cout << p.first << endl ;
    cout << p.second << endl ;
    //accessing pairs in pair:
    pair<int, pair<int , int>> x = {17,{13,12}};
    cout<<"accesing the second's first\t"<<x.second.first<<endl;
    //accesing pair in an arrray:
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<"accesing array element using pairs"<<arr[2].first;
}

int main(){
thepair();
}