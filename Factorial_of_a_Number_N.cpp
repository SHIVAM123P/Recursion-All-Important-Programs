#include<iostream>
using namespace std;

int factorial(int n){

    if(n==0){
        return 1;
    }
    int prevFactorial = factorial(n-1);
    return n * prevFactorial;
}

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"Factorial of the Number is: "<<factorial(n)<<endl;
}