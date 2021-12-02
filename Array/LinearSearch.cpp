#include<iostream>
using namespace std;


void linearSearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at index: "<<i;
        }
    }
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    int key;

    cout<<"Enter Array elements:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"Enter the key you want to find: ";
    cin>>key;
    linearSearch(arr,n,key);
    return 0;
}