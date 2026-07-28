#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
  public:

  int data;
  Node* left;
  Node* right;

  Node(int val){
    data = val;
    left = right = NULL;
  }
};
static int idx = -1;

Node* buildTree(vector<int> preorder){
  idx++;
  if(preorder[idx] == -1) return NULL;
  Node* root = new Node(preorder[idx]);
  root->left = buildTree(preorder);
  root->right = buildTree(preorder);
  return root;
}

void pre(Node* root){
   if(root == NULL) return;
   cout<< root->data << " ";
   pre(root->left);
   pre(root->right);
}

void inorder(Node* root){
   if(root == NULL) return;
   inorder(root->left);
   cout<< root->data << " ";
   inorder(root->right);
}

void post(Node* root){
   if(root == NULL) return;
   post(root->left);
   post(root->right);
   cout<< root->data << " ";
}

void level(Node* root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  while(q.size()>0){
    Node* curr = q.front();
    q.pop();
    if(curr == NULL){
      if(!q.empty()){
        cout<<endl;
        q.push(NULL);
        continue;
      }else{
        break; 
      }
    }
    cout << curr->data << " "; 
    if(curr->left != NULL){
      q.push(curr->left);
    }
     if(curr->right != NULL){
      q.push(curr->right);
    }
  }
}

int main(){
  vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
  Node* root =  buildTree(preorder);
  pre(root);
  cout<<endl;
  inorder(root);
  cout<<endl;
  post(root);
  cout<<endl;
  level(root);
  return 0;
} 