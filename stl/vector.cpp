#include<iostream>
#include<vector>
#include <algorithm>
#include<bits/stdc++.h>//profound copy 
using namespace std ;



int sortArr(vector<int>& v) {
    sort(v.begin(), v.end());
    return v[v.size() - 1];
}


int main (){
    vector<int> v ;
    vector <int> v1(5) ;
    vector <int> v2(5,10);
    vector <int> v3 = {13,12,8,3,5,11,7,2,5,3};
    vector<int> a = {1, 2, 3}, b = {4, 5, 6};
    
    
    //push back operation (we are pushing elements back in array from back )
    cout << v.size()<<endl; 
    cout << v1.size()<<endl;
    cout << v2.size()<<endl; 
    cout << v3.size()<<endl; 

    cout<<"capacity afterward";
    cout << v.size()<<endl; 
    cout << v1.size()<<endl; 
    cout << v2.size()<<endl; 
    cout << v3.size()<<endl; 

    v.push_back(13);
    v.push_back(12);
    v.push_back(6);
    v1.push_back(7);
    v1.push_back(12);
    v1.push_back(6);
    v2.push_back(5);
    v2.push_back(19);
    v2.push_back(7);
    v2.push_back(9);
    v3.push_back(1);
    v3.push_back(7);
    v.emplace_back(40);//moee efficient for complex data_type

    cout<<"size after ward";
    cout << v.size()<<endl; 
    cout << v1.size()<<endl; 
    cout << v2.size()<<endl; 
    cout << v3.size()<<endl; 

    cout<<"capacity afterward" ;

    cout << v.capacity()<<endl; 
    cout << v1.capacity()<<endl; 
    cout << v2.capacity()<<endl; 
    cout << v3.capacity()<<endl; 

    cout<<"symbolism"<<&v[0]<<endl;
    cout<<"symbolism"<<&v[1]<<endl;
    cout<<"symbolism"<<&v[2]<<endl;


    //iterator done at vetor 

    for (auto it = v.begin(); it!=v.end();++it){
        cout<<*it<<endl;
    }
    for(auto it = v1.begin();it!=v1.end();++it){
        cout<<*it<<endl;
    }
    for(auto it = v2.begin();it!=v2.end();++it){
        cout<<*it<<endl;
    }
    for(auto it = v3.begin();it!=v3.end();++it){
        cout<<*it<<endl;
    }           //for something like reverse begining and end use rend() , rbegin()

    //removing element 
    v.pop_back();
    v1.pop_back();
    v2.pop_back();
    v3.pop_back();


    v3.erase(v.begin()+2);

    //v3.erase(v.begin(),v.begin()+3);              (delete element between the intervals)
    //v.clear();  //(what happens to its space and capapcity at clearing )

    cout<<v2.at(3);
    cout<<v1[2];

    if (v.empty()) {
    cout << "Vector is empty";
    };

    //inserting element 

    v1.insert(v1.begin()+1,5);
    v2.insert(v2.begin()+1,5);
    v3.insert(v3.begin()+6,3);

    //checking if vector is empty 
    if (v.empty()) {
    cout << "Vector is empty";
    }
    cout<<"gali tang ahe ";

    //v.resize(5);  // Vector grows/shrinks to size 5
    //swapping vectors

    cout<<"jai shree ram1";
    a.swap(b);
    cout << "a: "<<a.at(2);
    cout << "b: "<<b.at(2);

    vector<int> c = {1, 2, 3};
    vector<int> d = c;  // Copying c to d 

        //2d vectors 
        vector<vector<int>> matrix(3, vector<int>(3, 0));  // 3x3 matrix initialized to 0

        matrix[0][1] = 5;  // Modifying element

    //reversing 
    reverse(v2.begin(), v2.end());
    cout<<"jai shree ram";
}
