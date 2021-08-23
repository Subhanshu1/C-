#include <iostream>
#include<queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeinput(){
	int rootdata;
	cout << "Enter root data" << endl;
	cin>>rootdata;
	TreeNode<int>* root=new TreeNode<int>(rootdata);
	cout<<"No of children ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		TreeNode<int>* child=takeinput();
		root->children.push_back(child);
	}
	return root;
}

TreeNode<int>* takeinputLevelWise(){
	int rootdata;
	cin>>rootdata;
	TreeNode<int>* root=new TreeNode<int>(rootdata);
	queue<TreeNode<int>*> PendingNodes;
	PendingNodes.push(root);
	while(!PendingNodes.empty()){
		TreeNode<int>* front=PendingNodes.front();
		PendingNodes.pop();
		int n;
		cout<<"Enter no of children"<<front->data<<endl;
		cin>>n;
		for(int i=0;i<n;i++){
			int childdata;
			cin>>childdata;
			TreeNode<int>* child=new TreeNode<int>(childdata);
			front->children.push_back(child);
			PendingNodes.push(child);
		}
	}
	return root;
}
void printTree(TreeNode<int>* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++){
		printTree(root->children[i]);
	}
}
int main(){
	TreeNode<int>* root=takeinputLevelWise();
	printTree(root);
	return 0;
	
}
