// maximum subarray

#include<bits/stdc++.h>
using namespace std;

int largenumber(int maxi, int sum){
    if(maxi<sum)
    maxi=sum;

    return maxi;
}

int maximumSubArray(int arr[],int n){

    int sum=0;
    int maxi=arr[0];

    for(int i=0;i<n;i++){

        sum=sum+arr[i];
        maxi=largenumber(maxi,sum);

        if(sum<0){
            sum=0;
        }
    }


    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

  int result= maximumSubArray(arr,n);

  cout<<"maximum subarray of given array is "<<result<<endl;
}
