#include <iostream>
#include <limits.h>
using namespace std;

int fact(int num){
    if(num == 0){
        return 1;
    }
return(num * fact(num -1));
}

int main() {
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<fact(number);
    return 0;
}