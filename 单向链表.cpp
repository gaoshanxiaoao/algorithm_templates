#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node(int val)
	{
		data = val;
		next = nullptr;
	}
};

Node *head=nullptr;

void insertAtHead(int val)
{
	Node *newNode = new Node(val);
	newNode->next = head;
	head = newNode;
}
void insertAtTail(int val)
{
	Node *newNode = new Node(val);
	if(!head)
	{
		head = newNode;
		return ;
	}
	Node *temp = head;
	while(temp->next)
	{
		temp = temp->next;
	}
	temp->next = newNode;
}
void deleteNode(int val)
{
	if(!head) return ;
	if(head->data == val)
	{
		Node* temp = head;
		head = temp->next;
		delete temp;
		return ;
	}
	Node *cur = head;
	while(cur ->next && cur->next->data !=val)
	{
		cur= cur ->next;
	}
	if(cur ->next)
	{
		Node* temp = cur->next;
		cur->next = temp->next;
		delete temp;
	}
}
void display()
{
	Node *temp = head;
	while(temp)
	{
		cout << temp->data<<" ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	// int x = 10;
	// int *p = &x;
	// cout << p<<endl;
	// cout << &x<<endl;	
	insertAtHead(10);
	insertAtHead(20);
	insertAtHead(30);
	display();
	insertAtTail(14);
	insertAtTail(21);
	insertAtTail(18);
	display();

	cout <<"hello world"<<endl;



	return 0;
}