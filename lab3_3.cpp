#include <iostream>
using namespace std;

int main(){
    double n=2,m=69,sum;
    while(n<=m){    
        sum+=1/n;
        n=n+1;
    }

    cout <<"sum is " << sum;

return 0;
}