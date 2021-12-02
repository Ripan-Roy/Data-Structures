

//Find the minimum element in unsorted array and swap it with the element at the begining

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];

    cout<<"Enter Array elements:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"The Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
