//to check wether a string is palindrome or not  by recursion


#include<iostream>
using namespace std;
int l,r;

bool checkPalindrome(string str,int l,int r){
    if(l<r){
        if(str[l]==str[r]){
            checkPalindrome(str,l+1,r-1);
        }
        else{
            return false;
        }    
        }
    return true;  
}

int main(){
    string str;
    cout<<"Enter the string (case sensitive) ";
    cin>>str;
    int n = str.length();    

    if(checkPalindrome(str,0,n-1)){
        cout<<"The string """<<str<<""" is palindrome";
    }else{
        cout<<"The string """<<str<<""" is not palindrome";
    };
}