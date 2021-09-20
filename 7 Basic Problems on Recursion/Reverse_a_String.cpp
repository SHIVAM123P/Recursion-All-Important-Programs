#include<iostream>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        cout<<"The Reverse of the string is: ";

        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main(){
    reverse("Your name");
    return 0;
}