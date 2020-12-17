#include <bits/stdc++.h>
using namespace std;

struct node{
    struct node *lc;
    int data;
    struct node *rc;
};

struct node* newNode(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->lc = NULL;
    newnode->rc = NULL;

    return newnode;
}

struct node* createTree(int arr[], int i, int n){
    struct node* root = newNode(arr[i]);

    if((2*i + 1) < n){
        root->lc = createTree(arr, (2*i + 1), n);
    }

    if((2*i + 2) < n){
        root->rc = createTree(arr, (2*i + 2), n);
    }

    return root;

}

bool bfs(struct node *root, int num){
    if(!root){
        return false;
    }
    if(root->data == num){
        return true;
    }
    if(bfs(root->lc, num)){
        return true;
    }
    if(bfs(root->rc, num)){
        return true;
    }

    else{
        return false;
    }
}

int main(){

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    struct node *root = createTree(arr, 0, 11);

    int num1 = 11;
    int num2 = 10;
    if(bfs(root, num1)){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }
    cout << endl;

    if(bfs(root, num2)){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }
    cout << endl;

    return 1;
}