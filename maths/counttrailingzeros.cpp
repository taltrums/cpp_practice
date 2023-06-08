#include <iostream>
#include <limits.h>
using namespace std;

// count trailing zeros in factorial
int countTrailingZeros(int n) {
    int res = 0;
    for(int i = 5; i<=n;i=i*5){
        res = res + (n/i);
    }

    return res;
}

int main() {
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<countTrailingZeros(number);
}