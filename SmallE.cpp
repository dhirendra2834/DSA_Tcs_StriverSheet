#include<bits/stdc++.h>
using namespace std;

void Arraysort(int arr[], int n){
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min){
            swap(min,arr[i]);
        }
    }
    cout<<min<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Arraysort(arr,n);

   
}