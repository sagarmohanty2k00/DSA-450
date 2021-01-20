#include <bits/stdc++.h>
using namespace std;

void reverse(int *arr, int n){
    for(int i=0; i<n/2; i++){
        int temp = arr[n-i];
        arr[n-i] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        int v; cin >> v;
        arr[i] = v;
    }

    reverse(arr, n-1);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}