#include <iostream>
using namespace std;
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


Node *evenAfterOdd(Node *head)
{
	Node *even_head=NULL;
    Node *even_tail=NULL;
    Node *temp=head;
    while(temp!=NULL){
    if((temp->data%2)==0){
        if(even_head==NULL){
            even_head=temp;
            even_tail=temp;
        }
        else{
        even_tail->next=temp;
        head=head->next;
        even_tail=even_tail->next;
        }
    }
    else{
        temp=temp->next;
        }
    }
    even_tail->next=NULL;
    return even_head;
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
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}
