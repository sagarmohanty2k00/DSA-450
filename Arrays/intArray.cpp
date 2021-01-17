#include <iostream>
using namespace std;

void insert(int num, int pos, int arr[]){
    int size = sizeof(arr)/sizeof(int);
    for(int i=size-1; i>=pos; i--){
        arr[i+1] = arr[i];
    }

    arr[pos] = num;
}


void remove(int pos, int arr[]){
    int size = sizeof(arr)/ sizeof(int);

    for(int i=size-2; i>=pos; i--){
        arr[i] = arr[i+1];
    }
}


void traverse(int arr[]){
    int size = sizeof(arr)/sizeof(int);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[40];
    for(int i=0; i<40; i++){
        cin >> arr[i];
    }


    int arr2[] = {1, 2, 3, 4, 5 ,6};
}