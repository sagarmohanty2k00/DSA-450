#include <bits/stdc++.h>
using namespace std;

int factorial(int f){
	if(f == 0){
		return 1;
	}
	else{
		return f*factorial(f-1);
	}
}

int main(){
	int num;
	cout << "Enter the number to calculate the factorial: ";
	cin >> num;

	int fact = factorial(num);
	cout << fact << "\n";
}
