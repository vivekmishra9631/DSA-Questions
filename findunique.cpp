#include<bits/stdc++.h>
using namespace std;
int findUnique(vector<int>arr){
    int ans=0;
    int n;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    
return 0;
}