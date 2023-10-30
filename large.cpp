#include<bits/stdc++.h>
using namespace std;

void Arraylarge(int arr[], int n){
    int large=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>large){
            swap(large,arr[i]);
        }
    }
    cout<<large<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Arraylarge(arr,n);

   
}