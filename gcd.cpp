#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    while(a!=b){
        if(a>b){
            a-=b;
        }
        if(b>a){
            b-=a;
        }
    }
    return a;
}
int main(){
    cout<<gcd(20,90);

return 0;
}