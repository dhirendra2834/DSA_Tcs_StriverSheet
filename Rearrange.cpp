// rearrange the array increasing and Decreasing Order

#include<iostream>
using namespace std;


void increase(int arr[], int n){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    // display the array 
    cout<<"Increasing Order";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void decrease(int arr[], int n){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    // display the array 
    cout<<"Decreasing Order";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;

int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    increase(arr,n);

    decrease(arr,n);
}