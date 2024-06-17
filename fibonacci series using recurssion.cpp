#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main(){
    int n;
    cin>>n;
    
    if(n>0)
    cout<<fibo(n)<<endl;
    else{
        cout<<"Invalid number"<<endl;
    }

    return 0;
}
