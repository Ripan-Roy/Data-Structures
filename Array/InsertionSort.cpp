
//Insert an element in an unsorted array to its correct position in an sorted array


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: "<<endl;
    
    for(int i=0;i<n;i++){                   
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}