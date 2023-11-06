// in this take user input int then first and last digit of digit and sum it 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int dup,rem,sum=0;

    dup=n;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }

    cout<<"duplicate is "<<sum<<endl;
    if(dup==sum){
        cout<<"it is palidrone Number";
    }else{
        cout<<"It is not palindrone Number";
    }
}