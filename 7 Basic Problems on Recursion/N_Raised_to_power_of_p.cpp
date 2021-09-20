#include<iostream>
using namespace std;

int power(int n, int p){

    if(p==0){
        return 1;
    }
    int prevPower = power(n, p-1);
    return n*prevPower;
}

int main(){
    int n,p;
    cout<<"Enter the number :"<<endl;

    cin>>n;
    cout<<"Enter power of the number :"<<endl;
    cin>>p;

    cout<<"The Required number is: "<<power(n,p);
}