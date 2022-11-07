#include<bits/stdc++.h>
using namespace std;

int sieveOfErasthones(int n){
    int cnt=0;
    vector<bool> prime(n+1,true);
    prime[0]= prime[1] = false;
    for(int i=2; i<n;i++){
        if(prime[i]){
            cnt++;
            for(int j=2*i;j<n;j+=i){
                prime[j]=false;
            }


        }
        
    }
    return cnt;


}
int main(){
    cout<<sieveOfErasthones(400)<<endl;

    
return 0;
}