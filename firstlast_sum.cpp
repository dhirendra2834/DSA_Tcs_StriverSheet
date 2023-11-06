// in this take user input int then first and last digit of digit and sum it 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int last,first,rem,sum=0;

    last=n%10;
    while(n>1){
        n=n/10;
        first=n;
    }

    int total=first+last;
    cout<<total;
}