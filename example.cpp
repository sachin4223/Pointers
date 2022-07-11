#include<bits/stdc++.h>
using namespace std;

double fun(string s){
     double str=0;
     double n=s.length();
     double x=0.0;
     for(int i=0;i<n;i++){
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
             str=str+2;
         }
         else{
             str=str+1;
         }
     }
      x=str/n;
     return x;

}
void word(int n,string s[]){
    if(n==0){
        cout<<0;
    }
    double arr[n];

    for(int i=0;i<n;i++){
       arr[i] =fun(s[i]);
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }

    
}

int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    word(n,s);
    
    return 0;
}