#include<iostream>
using namespace std;

void binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            cout<<"Element found at index: "<<mid;
            break;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}


int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    int key;

    cout<<"Enter Array elements in sorted manner:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"Enter the element you want to find: ";
    cin>>key;

    binarySearch(arr,n,key);
    return 0;
}
