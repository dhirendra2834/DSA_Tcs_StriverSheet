#include<iostream>
using namespace std;


// average find 

void average(int arr[], int n){

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    cout<<"Average of Array is "<<sum/n<<endl;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    average(arr,n);

   

}
