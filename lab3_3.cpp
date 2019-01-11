#include<iostream>
using namespace std;

int main(){
    int i=0,n=2,m=69;
    double sum;
    
    while(i<m){
        sum=sum+1/n;
        i=i+1;
        n=n+i;
    }

    cout << sum;

return 0;
}