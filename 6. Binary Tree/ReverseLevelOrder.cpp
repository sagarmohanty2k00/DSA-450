#include <bits/stdc++.h>
using namespace std;

struct node{
    struct node *lc;
    int data;
    struct node *rc;
};

int arr[100];

void deleteTree(struct node *root){
    queue<struct node *> q;
    stack<struct node *> s;
    struct node *temp;

    if(!root) return;

    q.push(root);
    while (!q.empty())
    {
        temp = q.front();
        q.pop();

        if(temp->rc) q.push(temp->rc);
        if(temp->lc) q.push(temp->lc);

        s.push(temp);
    }

    while(!s.empty()){
        cout << s.top()->data << " ";
        s.pop();
    }
    

    
}


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

int main(){

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    struct node *root = createTree(arr, 0, 11);

    deleteTree(root);
    cout << endl;

}