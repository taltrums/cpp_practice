#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k){
    sort(arr, arr+n);
    int ans = arr[n-1] - arr[0];
    int tempmin, tempmax;
    tempmin = arr[0];
    tempmax = arr[n-1];

    for (int i = 1; i< n ; i++) {
        if (arr[i] -k < 0) {
            continue;
        }

        tempmin = min(arr[0] + k, arr[i] - k);
        tempmax = max(arr[i-1] + k, arr[n-1]- k);
        ans = min(ans, tempmax - tempmin);
    }

    return ans;
}

int main(){
    int n= 6, k = 6;
    int arr[n] = {2, 4 ,6, 7, 8 ,9};
    int ans = getMinDiff(arr, n , k);
    cout<<ans;
}