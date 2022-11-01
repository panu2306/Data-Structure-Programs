#include <bits/stdc++.h>

using namespace std; 

struct LinkedListStruct {
	int data; 
	LinkedListStruct *next;
};

void pushFront(LinkedListStruct *head) {
	LinkedListStruct *node = new LinkedListStruct();
	int value;

	LinkedListStruct *temp = head;

	cout << "Enter Value: ";
	cin >> value;

	node -> data = value;
	node -> next = head;
	head = node;
}

void topFront(LinkedListStruct *head) {
	cout << head -> data << endl;
}

void popFront(LinkedListStruct *head) {
	if(head -> next == NULL) {
		head -> data = 0;
	}else {
		LinkedListStruct *temp = head;
		temp -> next = NULL;
		head = head -> next;
	}
}
void pushBack(LinkedListStruct *head) {
	LinkedListStruct *node = new LinkedListStruct();
	int value;

	cout << "Enter Value: ";
	cin >> value;
	
	node -> data = value;
	node -> next = NULL;

	if(head -> next == NULL) {
		head -> next = node;
		node -> next = NULL;
	}else {
		LinkedListStruct *temp = head;
		while(temp -> next != NULL) {
			temp = temp -> next;
		}
		temp -> next = node;
	}
}

void displayLinkedList(LinkedListStruct *head) {
	LinkedListStruct *temp = head;
	while(temp -> next != NULL) {
		cout << temp -> data << endl;
		temp = temp -> next;
	}	
	cout << temp -> data << endl;
}

int main() {
	LinkedListStruct *head = new LinkedListStruct();
	
	head -> data = 10;
	head -> next = NULL;
	
	int op; 
	int pos;


	do{
		cout << "Enter Operation - \n 0. exit() \n 1. pushFront() \n 2. topFront() \n 3. popFront() \n 4. pushBack() \n 5. topBack() \n 6. popBack() \n 7. find(key) \n 8. erase() \n 9. isEmpty() \n 10. addBefore \n 11. addAfter \n 12. displayList()" << endl;
		cin >> op;
		
		switch(op) {
			case 1:
				cout << "Pushing element at front of Linked List" << endl;
				//pushFront(head);
				break;
			case 2:
				cout << "Displaying first element of Linked List" << endl;
				topFront(head);
				break;
			case 3:
				cout << "Poping up first element of Linked List" << endl;
				popFront(head);
				break;
			case 4:
				cout << "Pushing element at the end of Linked List" << endl;
				pushBack(head);
				break;
			case 5:
				cout << "Displaying last element of Linked List" << endl;
				//topBack();
				break;
			case 6:
				cout << "Poping up last element of Linked List" << endl;
				//popBack();
				break;
			case 7:
				cout << "Finding the given element in Linked List" << endl;
				//find(key);
				break;
			case 8:
				cout << "Erase entire Linked List" << endl;
				//erase();
				break;
			case 9:
				cout << "Check if Linked List is Empty" << endl;
				//isEmpty();
				break;
			case 10:
				cout << "Adding element before the given position in the Linked List" << endl;
				cout << "enter position - ";
				cin >> pos;
				//addBefore();
				break;
			case 11:
				cout << "Adding element after the given position in the Linked List" << endl;
				cout << "enter position - ";
				cin >> pos;
				//addAfter();
				break;
			case 12:
				cout << "The entered list - " << endl;
				displayLinkedList(head);
				break;
		}
	}while(op != 0);

	//pushLinkedListNode(head);
	//pushLinkedListNode(head);

	//printLinkedList(head);

	return 0;
}
