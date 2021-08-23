#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;

 Node* sumNumber(Node* head, int k) {
        Node* temp = head;
        while(--k && temp->next!=NULL) {
            temp = temp->next;
        }
        Node *fromStart = temp, *fromEnd = head;
        while(temp->next!=NULL) {
            temp=temp->next;
            fromEnd=fromEnd->next;
        }
        fromEnd->data = fromStart->data + fromEnd->data;
        fromStart->data = fromEnd->data;
        return head;
    }
    
Node* SumofNodes(Node* head){
	Node* temp=head;
	int count=0;
	
	while(temp!=NULL){
		temp=temp->next;
		count++;
}
count--;
	for(int i=0;i<count/2;i++){
		sumNumber( head,  i);
	}
	return head;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{

	int k;
	cin>>k;
	
		Node *head = takeinput();
		head = SumofNodes(head);
		print(head);
	
	return 0;
}
