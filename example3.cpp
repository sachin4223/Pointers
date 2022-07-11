#include<bits/stdc++.h>
using namespace std;
int fun(int arr[], int n){
    int res=0;
    for(int i=1;i<n;i++){
        if((arr[i]-arr[i-1])<0){
           ++res;
        }
    }
    return res;

}
int main(){
   
   int n=6;
   int arr[]={6,4,8,14,12,5};
   cout<<fun(arr,n);


    return 0;
}