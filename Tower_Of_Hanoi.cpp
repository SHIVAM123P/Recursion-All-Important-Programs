#include<iostream>
using namespace std;

void toweOfHanaoi(int n, char src, char dest, char helper){
    if(n==0){
        return;
    }

    toweOfHanaoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    toweOfHanaoi(n-1,helper,dest,src);
}

int main(){
    toweOfHanaoi(3,'A', 'C','B');

    return 0;
}