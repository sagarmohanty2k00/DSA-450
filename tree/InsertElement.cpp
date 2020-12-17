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

void InsertElement(struct node* root, int ele){
    if(!root){
        root = (struct node*)malloc(sizeof(struct node));
        root->data = ele;
        root->lc = root->rc = NULL;
        return;
    }

    struct node* newEle = (struct node *)malloc(sizeof(struct node));
    newEle->data = ele;
    newEle->lc = newEle->rc = NULL;

    struct node* temp;
    queue<struct node*> q;
    q.push(root);
    while(!q.empty()){
        temp = q.front();
        q.pop();

        if(temp->lc) q.push(temp->lc);
        else{
            temp->lc = newEle;
            cout << "Element Added as the left child of " << temp->data; 
            return;
        }

        if(temp->rc) q.push(temp->rc);
        else{
            temp->rc = newEle;
            cout << "Element Added as the right child of " << temp->data;
            return;
        }
    }
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


    int n; cout << "Element: "; cin >> n;
    InsertElement(root, n);
    cout << endl;

    return 1;
}