#include <bits/stdc++.h>

using namespace std; 

class StackImpl {
	private:
		int top = -1;
		vector<int> stk;
	
	public:
		void push(int ele);
		int pop();
		int returnTop();
		bool isEmpty();
		int returnSize();
		void printStack();
};

void StackImpl::push(int ele) {
	top += 1;
	stk.push_back(ele);
}

int StackImpl::pop() {
	if(top == -1){
		return 0;
	}
	auto ele = int(*stk.end());
	stk.pop_back();
	return ele;
}

int StackImpl::returnTop() {
	if(top == -1){
		return 0;
	}
	return top;
}

bool StackImpl::isEmpty() {
	if(top == -1) {
		return true;
	}
	return false;
}

int StackImpl::returnSize() {
	return stk.size();
}

void StackImpl::printStack() {
	for(auto i = stk.begin(); i != stk.end(); i++) cout << *i << " ";
	cout << endl;
}

int main() {
	StackImpl s;
	int op = -1;
	int ele;

	cout << "Choose the operation - 1. Push 2.Pop 3.Return Top 4. Stack Empty? 5. Size of Stack " << endl;
	
	while(op != 0){
		cin >> op;
		switch(op){
			case 1:{
				cout << "Enter ele to insert into stack: ";
				cin >> ele;
				s.push(ele);
				break;
			       }
			case 2:{
				int e = s.pop();
				cout << e << " is popped!" << endl;
				break;
			       }
			case 3:{
				cout << "Top is: " << s.returnTop() << endl;
				break;
			       }
			case 4:{
				s.isEmpty() ? cout << "True" << endl : cout << "False" << endl;
				break;}
			case 5:{
				cout << "Size of stack: " << s.returnSize() << endl;
				break;}
			case 6:{
				s.printStack();
				break;}
			default:{
				cout << "Enter Valid Operation" << endl;
				break;	}
		}
	}
	return 0;	
}
