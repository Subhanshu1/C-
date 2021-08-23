#include<iostream>
#include"BinaryTreeNode.h"
using namespace std ;


void print(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<":";
	if(root->left!=NULL){
		cout<<"L"<<root->left->data;
	}
	if(root->right!=NULL){
		cout<<"R"<<root->right->data;
	}
}
BinaryTreeNode<int>* takeinput(){
	int rootdata;
	cin>>rootdata;
	if(rootdata==-1){
		return NULL;
	}
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootdata);
		BinaryTreeNode<int>* leftchild=takeinput();
		BinaryTreeNode<int>* rightchild=takeinput();
		root->left=leftchild;
		root->right=rightchild;
	
	return root;
}
int main(){
	BinaryTreeNode<int>* root=takeinput();
	print(root);
	return 0;
}
