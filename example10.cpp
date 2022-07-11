#include<bits/stdc++.h>
using namespace std;
void letterCaseP(string str1,int i,string str2){
    if(i==str1.length()){
        cout<<str2<<endl;
        return;
    }
    letterCaseP(str1,i+1,str2+char(tolower(str1[i])));
    letterCaseP(str1,i+1,str2+char(toupper(str1[i])));


}

int main(){
    string str1="abc";
    string str2="";
    int i=0;
    letterCaseP(str1,i,str2);

    //return 0;
}