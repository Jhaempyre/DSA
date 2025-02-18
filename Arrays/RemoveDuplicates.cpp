//we will write here a program that will focus on to remove elements which are appearing more than once 

// yet i have thought it in two ways 

/*
*********first************
we will create a hash table and will store all the unique element with 1 
*/

//this all is with O(N) complexity.


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ;


unordered_map<int,int> findDuplicate(vector<int> &v){

    //the concept is to count the whole data in one loop that how many time it appears
    //and then get all the keys printed alone.
    int n = v.size();
    unordered_map<int,int> map;
    for(int i = 0 ; i < n ; i++){
        map[v[i]]= map[v[i]]+1; //here map[v[i]] is getting that key things
    }
    return map;
}

int main(){
    vector <int> v ;
    vector<int> ne ;
    int c =0; 
    int d = 0; 
    int n ; 
    cout<<"Enter the length of array";
    cin>>n ;

    //taking input in array
    for(int i = 0 ; i < n ; i++)
    {
        int x ; 
        cout<<"Enter the element "<<i+1<<endl ;
        cin>>x ;
        v.push_back(x) ;
    }

    //Displaying the array 
    for (int i = 0 ; i <n ; i ++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector <int> vec;

    cout<<"started cheking the array if they are duplicates"<<endl;
    for (int i = 0; i <n ; i++){

        //first i am thinking to just chek the size of vetor vec
        //if it's just zero i should just push the first element (given)
        //it's all sorted , 

        if (vec.size()==0){
            vec.push_back(v[i]) ;
            c++;
            //here we got our first element after this we will never be visiting this condition again 
        }else{

        //so now it's time to make genric thing what to do when there is a new comparison 
        //while moving forward in vector v we will chek wethrt the last element of the vec, if in case then
        //it is a duplicate we will just skip that iteration
        if (v[i]==vec[c-1]){
            cout<<"Duplicate element found"<<endl ;
            cout<<v[i]<<"=="<<vec[c-1]<<endl;
            d++;
            cout<<d<<endl;
            continue ;
        }else{
            vec.push_back(v[i]) ;
            c++;
        };
        cout<<endl;
    }
}

        //at this  point we have just got both array the original one and the one which is just created.
        //now we just need to print the array which is created and the size of that array which we will be
        //like printing the array and also printing underscore as may time duplicate is found 
        cout<<"printing array"<<endl;
        for (auto it = vec.begin();it!=vec.end();++it){
            cout<<*it<<endl;
        }
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
    


        //creating the function by using hash function the unordered map ;
        cout<<"It's being done by hastable"<<endl;
        unordered_map<int,int> count = findDuplicate(v);
        cout<<"printing the map"<<endl;
        for(auto it : count){
            cout<<it.first<<":"<<it.second<<endl;
        }
        cout<<"print array here"<<endl;
        for (auto it : count){
            ne.push_back(it.first);
        }


        for(auto it = ne.rbegin(); it < ne.rend(); ++it){
            cout<<*it<<endl;
        }
}





