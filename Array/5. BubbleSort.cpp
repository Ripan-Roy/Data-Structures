//Repetedly Swap two adjacent elements if they are in wrong order

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
    int counter=1;
    while (counter < n-1){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    cout<<"The sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
