#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int n){

    int i=0;
    while(i<=n/2){
        if(n%2==1){
 swap(arr[i], arr[n-1-i]);
 
        }
        else if(n%2==0 && i<=(n/2-1)){
             swap(arr[i], arr[n-1-i]);
             
        }
        i++;
       
    }

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

    Reverse(arr,n);

   

}

