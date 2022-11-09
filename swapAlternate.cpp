#include<bits/stdc++.h>
using namespace std;


void swipeArray(vector<int> arr,int n ){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    

}
int main(){
    
    vector<int>array={1,2,3,4,5,6};
    swipeArray(array,6);
    
    
return 0;
}