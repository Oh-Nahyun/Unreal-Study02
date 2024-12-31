//
//  2_1_링크드리스트.cpp
//  CppProject
//
//  Created by 오나현 on 12/31/24.
//

/*
/// 간단한 링크드 리스트 (싱글)

#include <iostream>

using namespace std;

class Node
{
public:
	int data;
	Node* next;	// 자기 참조
};

Node* Insert(Node* head, int new_data)
{
	if (head == NULL)
	{
		cout << "The Head ID NULL";
		return head;
	}

	Node* new_node = new Node();

	new_node->data = new_data;
	new_node->next = head->next;
	head->next = new_node;

	return head;
}

Node* deleteNode(Node* head, int key)
{
	if (head == NULL)
	{
		cout << "The Head ID NULL";
		return head;
	}

	Node* cursor = new Node();
	cursor = head;

	while (cursor->next->data != key)
	{
		cursor = cursor->next;
	}

	Node* temp = new Node();
	temp = cursor->next;
	cursor->next = cursor->next->next;

	delete temp;

	return head;
}

void printList(Node* head)
{
	Node* cursor = new Node();

	if (head == NULL)
	{
		cout << "The Head ID NULL";
	}
	else
	{
		cursor = head->next;
		while (cursor != NULL)
		{
			cout << cursor->data << ", ";
			cursor = cursor->next;
		}
	}
}

int main()
{
	Node* head = new Node();

	head = Insert(head, 1);
	head = Insert(head, 2);
	head = Insert(head, 3);
	head = Insert(head, 4);
	head = Insert(head, 5);

	printList(head);
	cout << endl << endl;

	head = deleteNode(head, 2);

	printList(head);
	cout << endl << endl;

	head = deleteNode(head, 4);

	printList(head);
	cout << endl << endl;

	return 0;
}
*/
