#include<iostream>
using namespace std;

void rotate(int arr[], int n) {
    int i = 0, j = n-1;
    while(i != j){
        swap(arr[i], arr[j]);
        i++;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<< arr[i];
    }
    cout<<endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    rotate(arr, n);
    cout<<"Rotated Array "<< endl;
    printArray(arr, n);

}