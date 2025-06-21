//In this section we are concerned for how in array if all the element are appearing 
///twice then how to get element that 
///appears once . 

#include <iostream>
#include <map>
using namespace std ;

class Solution{
    private:
    int n ;
    int *array; //cant't use flexible array[] in c++ classes 
    map<int,int> m ;

    public:
    Solution(int arr[],int n ){
        this->n=n;
        this->array= new int [n]; // allocate memory dynammicaly 
        //array = new int[n]
        for( int i = 0 ; i < n ; i++){
            this->array[i]=arr[i];
        }        
    } 

    ~Solution(){
        delete [] array ; //to free the memory
    }
    


        int ElementOnce(){
            //first we want to have an hashmap that stores how many time an
            /// element in array is occuring then print the lowest one 
            for(int i = 0 ; i<n ; i++){
                m[array[i]]= m[array[i]]+1;
            }
            int ans ;
            for (auto it = m.begin(); it != m.end(); it++){
                if(it->second==1){
                    ans = it->first;
                    break;
                }
            }
            return ans ;
        }


        int elementxor(){
            int xorrr = 0 ; 
            for(int i =0 ; i <n ; i++){
                xorrr = xorrr ^ array[i];

            }
            return xorrr;
        }

        void display(){
            for(int i = 0 ; i < n ; i++){
                cout<<array[i]<<" ";
                }
        }
    
    
};

int main(){
    int n ; 
    std::cout<<"Enter the length of array ";
    std::cin>>n ;
    int* arr = new int[n];
    std::cout<<"Enter the elements of array ";
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
        }
    Solution ye(arr,n);
    ye.display();
    std::cout<<"tHE ELEMENT APPAEARD ONECE IS "<<ye.ElementOnce()<<endl;
    std::cout<<"the element appeared once using xor is "<<ye.elementxor();

    delete[] arr ;
    
        
}