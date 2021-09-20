#include<iostream>
using namespace std;

string moveallX(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans = moveallX(s.substr(1));

    if(ch=='x' || ch=='X'){
        return ans+ch;
    }
    else{
    return ch+ans;

    }
}

int main(){
    cout<<moveallX("aabxcdxxrdXsexxfdrefXdsefecxghdxscs");

    return 0;
}