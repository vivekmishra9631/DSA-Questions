#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    int count=0;
    for(int i=1;i<=(int)sqrt(n);i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
                }
            }
        }
    if(count==2){
        return true;
        }

    else{
        return false;
    }


    // for(int i=2; i<(int)sqrt(n);i++){
    //     if(i==2){
    //         return true;
    //         continue;
    //     }
    //     if(n%i == 0){
    //         return false;
    //     }
    // }
    // return true;


} 

int kthPrime(int k){
    int j=2;
    int cnt=0;
    while(cnt!=k){
        if (checkPrime(j)){
            cnt++;
        }
        j++;
    }
    return j-1;
    // if(k == 1)
    //     return 2;
    // else if(k == 2)
    //     return 3;
    // else if((k-2)%2 == 1)
    //     return 6*((k-2)/2) - 1;
    // else
    //     return 6*((k-2)/2) + 1;
}

int main(){
    cout<<kthPrime(10);
return 0;
}