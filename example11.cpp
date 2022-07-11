#include<bits/stdc++.h>
using namespace std;
int main() {
     int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=0;
    if(n<3){
        cout<<count;
    }   
    for(int i=0;i<n;i++){
        int k=target-arr[i];
        
        int l=i+1;
        int h=n-1;
        while(l<h){
            if(arr[l]+arr[h]<k){
                l++;
            }
           else if(arr[l]+arr[h]>k){
                h--;
            }
            else{
                //cout<<arr[i]<<" "<<arr[l]<<" "<<arr[h]<<endl;
                if((arr[i]+arr[l]+arr[h])==target){
                    count++;
                }
                l++;
                h--;
            }
        }

    }
    cout<<count;
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}