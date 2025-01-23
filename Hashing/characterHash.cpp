//we will thing for charachter hashing in this segment 
//ascii value will be used here 

#include<iostream>
#include<string>
using namespace std ; 

int main(){
    string s ;
    int hash[256]={0};
    cout<<"Enter a string : ";
    cin>>s ;

    for(char c : s){
        int asciii = (int)c;
        hash[asciii]++;
        cout<<c<<hash[asciii]<<endl;
    }

    int query;
    cout<<"Enter a character to search : ";
    cin>>query;
    while(query>0){
        cout<<"Enter a character to search : ";
        char d;
        cin>>d;
        int ascii = (int)d ;
        cout<<d<<" "<<hash[ascii]<<endl;
    }

}



//this could also be done using 

/*
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    //precompute:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c] << endl;
    }
    return 0;
}
*/