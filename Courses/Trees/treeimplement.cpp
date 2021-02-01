#include<bits/stdc++.h>
using namespace std;

struct Node{
   int data;
   Node* left =NULL;
   Node* right=NULL ;

};
//recursive implementation of preorder,inorder,postorder.

void preorder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);
    return;

}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
////end of recursive defn.

int main()
{
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);

     ///taking in input
int t;cin>>t;
int size=t;
///for 1 based indexing
Node* arr[t+1];

for(int i=0;i<t+1;i++)
{
    arr[i]=new Node();
}
t--;
///we will have to pass the size of distinct pairs of prent and child and not the number of nodes
while(t--)
{
int parent;
int child;char side;
cin>>parent>>child>>side;
if(side=='L')
{
    arr[parent]->left=arr[child];
}
if(side=='R')
{
    arr[parent]->right = arr[child];
}
}

///taking data 1 based indexing
for(int j=1;j<size+1;j++)
{
    
    cin>>arr[j]->data;
    
    
}


cout<<'\n';
preorder(arr[1]);
cout<<'\n';
postorder(arr[1]);
cout<<'\n';
//inorder(arr[1]);  

    return 0;
}
