#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n){
    int i = 0;

    for(int j=0; j<n; j++){
        if(arr[j] < 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
        }
        
    }
}

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    rearrange(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}