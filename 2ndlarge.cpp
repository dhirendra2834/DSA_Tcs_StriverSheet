#include <bits/stdc++.h>

using namespace std;



	int print2largest(int arr[], int n) {
	    
	    if(n==0 || n==1){
	        return -1;
	    }
	    
	    // code here
	    int large=arr[0];
	    int x=INT_MIN;
	    for(int i=1;i<n;i++){
	        if(arr[i]>large){
	           x=large;
	           large=arr[i];
	        }
	        else if(arr[i]<large && arr[i]>x){
	            x=arr[i];
	        }
	    }
	    if(x==INT_MIN){
	        return -1;
	    }
	    return x;
	};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
      
        auto ans =print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

