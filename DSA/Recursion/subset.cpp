#include<iostream>
using namespace std;

void subset(string s, string curr=" " , int i=0){

    if(s.length()==i){
        cout<<curr<<"";
        return;
    }

    subset(s,curr,i+1);
    subset(s,curr+s[i],i+1);
}


int main(){
    string s;
    s="abc";
    subset(s);
    return 0;
}