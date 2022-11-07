#include<bits/stdc++.h>
using namespace std;
int modularExpo(int n,int b,int m){
    int ans=1;
    while(n!=0){
        if(n&1){
            ans=(((ans))*(n%m))%m;
        }
        n=((n)%m*(n)%m)%m;
        b=b>>1;

    }
    return ans;
}
int main(){
    cout<<modularExpo(121,4,27);
return 0;
}