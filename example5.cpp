#include<bits/stdc++.h>
using namespace std;

void fun(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int x=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                x=1;
            }
        }
        if(x==0){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            return;
        }
    }
    for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    fun(arr,n);



}