#include<bits/stdc++.h>

using namespace std;

vector<int> twosum(int arr[], int n,int target){

    map<int, int> num;

    for(int i=0;i<n;i++){

        // if(target<arr[i]) continue;

        int a=arr[i];
        int b=target-a;

        if(num.find(b)!=num.end()){
            return {num[b], i};
        }

        num[a]=i;
    }

    return {-1,-1};
}

int main(){

  int n;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int target;
  cin>>target;

vector<int> result;
  result=twosum(arr,n,target);

  cout<<"TWO sum of index is "<<endl;

    for(int i=0;i<=1;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

}
