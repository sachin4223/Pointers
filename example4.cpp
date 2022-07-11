#include <iostream>
using namespace std;

bool CanBePlaced(int arr[],int c,int x,int n){
	if(c>n){
		return false;
	}
	int count=1;
	int prev=arr[0];
	for(int i=1;i<n;i++){
		if(count==c){
			break;
		}
		if(prev+x<=arr[i]){
			count++;
			prev=arr[i];
		}
	}
	return (count==c);
}

int fun(int arr[],int n,int c){
	int low=1;
	int high=INT_MAX;
	int ans=0;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(CanBePlaced(arr,c,mid,n)){
			ans=mid;
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return ans;
}

int main() {
	
	// your code here
	int t;
	cin>>t;
	while(t--){
		int c,n;
		cin>>c>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		cout<<fun(arr,n,c);
	}