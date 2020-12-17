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

int MaxElement(struct node *root){
    if(!root){
        return -99999;
    }

    int max = root->data;
    int maxLeft = MaxElement(root->lc);
    int maxRight = MaxElement(root->rc);

    if(max<maxLeft){
        max = maxLeft;
    }
    if(max<maxRight){
        max = maxRight;
    }

    return max;

}

int main(){

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    struct node *root = createTree(arr, 0, 11);

    cout << MaxElement(root);
    cout << endl;

    return 1;
}