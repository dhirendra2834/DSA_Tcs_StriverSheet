// Count frequency of each element in the array

#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n){

            vector<bool>v(n,false);
            
        for(int i=0;i<n-1;i++){

            // skip the next step inside loop if already visited 
            if(v[i]==true){
                continue;
            }
                int count =1;
               
            for(int j=i+1;j<n;j++){

                if(arr[i]==arr[j]){
                    v[j]=true;
                    count++;
                }
            }

            cout<<arr[i]<<" "<<count<<" its is frquency\n";
        }
}

int main(){
    int n;
    cin>>n;


int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    frequency(arr,n);
}