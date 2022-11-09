#include<bits/stdc++.h>
using namespace std;
const int N=10e7;
bool sieve[N+1];
vector<int> ds;
void Createsieve(){
    for(int i=2;i<=N;i++){
        sieve[i]=true;
    }

    
    for(int i=2;(i*i)<=N;i++){
        if (sieve[i]==true){
            for(int j=(i*i);j<=N;j+=i){
                sieve[j]=false;
            }
        }
    }

    for(int i=2;i<=N;i++){
        if (sieve[i]==true){
            ds.push_back(i);
        }
    }
}
int main(){
    Createsieve();
    int k;
    cin>>k;
    cout<<ds[k-1];
    

return 0;
}