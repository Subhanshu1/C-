#include<iostream>
#include"BinaryClassTree.h"
using namespace std ;

BinaryTreeNode<int>* takeinput(){
	int rootdata;
	cin>>rootdata;
	if(rootdata==-1){
		return NULL;
	}
	BinaryTreeNode<int>* root=new BinaryNode<int>(rootdata);
		BinaryTreeNode<int>* leftchild=takeinput();
		BinaryTreeNode<int>* rightchild=takeinput();
		root->left=leftchild;
		root->right=rightchild;
	}
	return root;
}
void print(BinaryTreeNode* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<":";
	if(root->left!=NULL){
		cout<<"L"<<root->left->data;
	}
	if(root->right!=NULL){
		cout<<"L"<<root->right->data;
	}
}
int main(){
	BinaryTreeNode<int>* root=takeinput();
	print(root);
	return 0;
}
