#include<bits/stdc++.h>
using namespace std;
bool fun(int arr[],int n,int sum){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==sum){
            return true;
        }
        else if((arr[low]+arr[high])>sum){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main(){
      int n;
    cin>>n;
    int sum;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    fun(arr,n,sum);
}

