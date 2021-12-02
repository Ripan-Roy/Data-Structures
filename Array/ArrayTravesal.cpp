/*
ARRAY OPERATIONS
-------------------------
1. Traversal
2. Insertion
3. Deletion
4. Searching

*/
 //One dimentional array creation

//Array Traaversal



#include<iostream>
using namespace std;
int main(){
    int n,arr[n];
    cout<<"Enter Array Size: ";
    cin>>n;
    cout<<"Enter array elements: "<<endl;
    
    for(int i=0;i<n;i++){                   //Creating the array
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){                   //Printing the array by traversing
        cout<<arr[i]<<" ";      
    }
    return 0;
}