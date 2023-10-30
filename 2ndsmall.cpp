#include <bits/stdc++.h>
using namespace std;


vector<int> small2nd(int arr[], int n){
vector<int> v;
    if(n==0 || n==1)
    {
        v.push_back(-1);
        return v;
    }

int small=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]<small)
    swap(arr[i],small);
}
v.push_back(small);

int x=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]>small && arr[i]<x)
    {
        x=arr[i];
    }
}

v.push_back(x);
vector<int> v1;
if (v.empty() || v[1]==INT_MAX) {
    v1.push_back(-1);
    return v1;
}

return v;
}
int main()
{

    int n;
    cin >> n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

vector<int>ans=small2nd(arr,n);

if(ans[0]==-1)
cout<<-1<<endl;
else {
    cout<<ans[0]<<"smallest Element \n";
    cout<<ans[1]<<" Second smallest Element \n";
}

}