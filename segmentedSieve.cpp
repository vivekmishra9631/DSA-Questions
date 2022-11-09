#include<bits/stdc++.h>
using namespace std;
const long long n=10e7;
vector<bool>prime(n+1,true);
long long primeProduct(long long L, long long R){
    
    prime[0]=prime[1]=false;
    for(long long i=2;i*i<=n;i++){
        if(prime[i]){
            for(long long j=i*i;j<=n;j+=i){
                prime[j]=false;
            }

        }
    }
    long long ans=1;
    for(long long k=L;k<=R;k++){
        if (prime[k]==true){
            ans=ans*k;
        }
    }
    return ans;

}



 
int main(){
    cout<<primeProduct(10,20);
return 0;
}