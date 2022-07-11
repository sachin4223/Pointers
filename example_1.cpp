#include<bits/stdc++.h>
using namespace std;

int fun(int arr[],int n){
    if(n==0){
        return 0;
    }
    sort(arr,arr+n);
    int res= arr[1]-arr[0];
    for(int i=1;i<n;i++){
        res=min(arr[i]-arr[i-1],res);

    }
    return res;
}

int main(){
   
   int n=4;
   int arr[]={4,6,8,14};
   cout<<fun(arr,n);


    return 0;
}