#include <bits/stdc++.h>
using namespace std;

int Sum(int n){
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum += i;
    }

    return sum;
}

int main(){

    int n;
    cin >> n;

    cout << Sum(n) << endl;
    
    return 0;
}