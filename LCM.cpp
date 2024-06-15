#include<bits/stdc++.h>
using namespace std;

int HCF(int a, int b){
    int hcf=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
           hcf=i;
           break;
        }
    }
    return hcf;
}

int LCM(int a, int b){
    int lcm=a*b/HCF(a,b);
    return lcm;
}
int main(){
    int a,b,hcf;
    cin>>a>>b;
    
    hcf=LCM(a,b);
    cout<<hcf<<endl;
}
