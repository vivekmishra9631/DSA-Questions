#include<bits/stdc++.h>
using namespace std;
int factorial(int n,int m){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=(1LL*(ans)*(i)%m)%m;

    }
    return ans;
    
}
int main(){
    cout<<factorial(212,10e9+7);
return 0;
}