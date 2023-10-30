// Sort first half in ascending and second half in descending

#include <bits/stdc++.h>
using namespace std;

void HalfSort(int arr[], int n)
{

    int nums[n];
    cout<<"Sorting increasing manner \n";
    for (int i = 0; i < n; i++)
    {
        nums[i] = arr[i];
        cout << nums[i] << " ";
    }
    cout << endl;

    int j=0;
    for(int i=0;i<=(n/2-1);i++){
        arr[j]=nums[i];
        j++;
    }
    for(int i=n-1;i>=n/2;i--){
        arr[j]=nums[i];
        j++;
    }

    // display half increasing and Decreasing order 
        cout<<"Sorting increasing manner \n";
    for (int i = 0; i < n; i++)
    {
      
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    HalfSort(arr, n);
}