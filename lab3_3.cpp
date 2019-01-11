#include<iostream>
using namespace std;

int main(){
    int i,n=2,m=69;
    double sum=0;
    i=n;
    while(i<=m){
        sum=sum+1/i;
        i=i+1;
    }

    cout << sum;

return 0;
}