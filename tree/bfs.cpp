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

string bfs(struct node *root, int num){
    struct node* temp;
    int max = -1;

    queue<struct node*> tq;
    tq.push(root);
    while(!tq.empty()){
        temp = tq.front();
        tq.pop();

        if(temp->data == num){
            return "Found";
        }

        if(temp->lc) tq.push(temp->lc);
        if(temp->rc) tq.push(temp->rc);
    }

    return "Not Found";
}

int main(){

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    struct node *root = createTree(arr, 0, 11);

    int num = 7;
    cout << bfs(root, num);
    cout << endl;

    return 1;
}