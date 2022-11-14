#include <bits/stdc++.h>

using namespace std; 

class StringNode {
	private:
		string ele;
		StringNode* next;

		friend class StringLinkedList;
};

class StringLinkedList {
	public:
		StringLinkedList();
		~StringLinkedList();
		bool isEmpty() const;
		const string& front() const;
		void addFront(const string&);
		void removeFront();
		void displayList() const;
		const string& rear() const;
		void addRear(const string&);
		void removeRear();
	private:
		StringNode* head;	
};

StringLinkedList::StringLinkedList():
	head(NULL) { }

StringLinkedList::~StringLinkedList(){
	while(!isEmpty()){
		removeFront();
	}
}

bool StringLinkedList::isEmpty() const {
	return (head == NULL);
}

const string& StringLinkedList::front() const {
	return head -> ele;
}

void StringLinkedList::addFront(const string& ele) {
	StringNode *node = new StringNode;
	node -> ele = ele;
	node -> next = head;
	head = node;
}

void StringLinkedList::removeFront() {
	StringNode *currFrontNode = head;
	head = currFrontNode -> next;
	delete currFrontNode;
}

void StringLinkedList::displayList() const {
	StringNode *tempNode = head;
	while(tempNode -> next != NULL) {
		cout << tempNode -> ele << " ";
		tempNode = tempNode -> next;
	}
	cout << tempNode -> ele << endl;
}

const string& StringLinkedList::rear() const {
	StringNode *tempNode = head;
	while(tempNode -> next != NULL) {
		tempNode = tempNode -> next;
	}
	return tempNode -> ele;
}

void StringLinkedList::addRear(const string& ele) {
	StringNode *tempNode = head;
	StringNode *newNode = new StringNode;
	
	newNode -> ele = ele;
	newNode -> next = NULL;
	
	while(tempNode -> next != NULL) {
		tempNode = tempNode -> next;
	}
	tempNode -> next = newNode;
}

void StringLinkedList::removeRear() {
	StringNode *tempNode = head;
	StringNode *nodeDelete = head -> next;
	
	while(nodeDelete -> next != NULL) {
		nodeDelete = nodeDelete -> next;
		tempNode = tempNode -> next;
	}
	tempNode -> next = NULL;
	delete nodeDelete;
}

int main() {
	StringLinkedList l; 
	int choice;
	string ele;
	
	do {
		cout << endl;
		cout << "Enter Choice: " << "\n1. isEmpty() 2. front() 3. addFront() \n4.removeFront() 5. rear() 6. addRear() \n7.removeRear() 8. displayList() 0. exit()" << endl;
		cin >> choice;
	
		switch(choice){
			case 1:
				{
					if(l.isEmpty()) {
						cout << "List is Empty!!!" << endl;
					}else {
						cout << "List is Not Empty!!!" << endl;
					}
					break;
				}
			case 2:
				{
					cout << "Front Element of List: " << l.front() << endl;
					break;
				}
			case 3:
				{
					cout << "Enter Element to Add to List: ";
					cin >> ele;
					l.addFront(ele);
					cout << "Added Front Element" << endl;
					break;
				}
			case 4:
				{
					l.removeFront();
					cout << "Removed Front Element" << endl;
					break;
				}
			case 5:
				{
					cout << "Rear Element of List: " << l.rear() << endl;
					break;
				}
			case 6:
				{
					cout << "Enter Element to Add to List: ";
					cin >> ele;
					l.addRear(ele);
					cout << "Added Rear Element" << endl;
					break;
				}
			case 7:
				{
					l.removeRear();
					cout << "Removed Rear Element" << endl;
					break;
				}
			case 8:
				{
					l.displayList();
					break;
				}
		}	
	}while(choice != 0);

	return 0;
}
