//we will see character hasing using maps

#include<iostream>
#include<map>
//#include<unordered_map>
#include<string>

using namespace std ; 

int main(){
    //for unordered
    //unordered_map<char,int> m ;
    map<char,int> m;
    string s ;
    cout<<"Enter a string : ";
    cin>>s;

    for(int i = 0; i<s.size();i++){
        m[s[i]]=m[s[i]]+1;
    }
    
    for(auto it : m){
        cout<<it.first<<"->->"<<it.second<<endl;
    }
}


//can be done using unordered map which will just not sort it



//now you can have code for fetching the elements
