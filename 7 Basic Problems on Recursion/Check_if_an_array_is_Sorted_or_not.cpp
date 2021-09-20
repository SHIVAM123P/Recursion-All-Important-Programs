#include<iostream>
using namespace std;

//output=1 means True i.e The Array is Sorted.
//output=0 means False i.e. The Array is not Sorted.
bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    bool restArray = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restArray);
}

int main(){
    int arr[]={1,2,3,4,5};
    cout<<sorted(arr,6)<<endl;
}

