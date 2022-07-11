#include<bits/stdc++.h>
using namespace std;

void fun(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int minInd=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minInd]){
                minInd=j;
            }
        }
        swap(arr[i],arr[minInd]);
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