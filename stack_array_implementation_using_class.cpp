#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE 100

class StackImpl {
	int top = -1;
	int arr[MAX_SIZE];

	public:
		void push(int ele) { 
			top += 1;
			arr[top] = ele;
		}
		
		int returnTop() {
			if(top == -1){
				cout << "There is no element in the stack" << endl;
			}
			return arr[top];
		}
		
		bool isEmpty() {
			if(top == -1) { 
				return true;
			}else {
				return false;
			}
		}

		int pop(){
			if(top == -1){
				cout << "No element in stack" << endl;
			}
			top -= 1;
			return arr[top+1];
		}

		int size(){
			return top+1;
		}

		void printStack(){
			for(int i = 0; i <= top; i++) cout << arr[i] << " ";
			cout << endl;
		}
};

int main(){
	StackImpl s;
	int op = -1;
	int ele;

	cout << "Choose the operation - 0. No Operation and Exit 1. Push 2.Pop 3.Return Top 4. Stack is Empty? 5. Size of Stack 6. Print Stack" << endl;

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
				break;
			       }
			case 5:{
				cout << "Size of stack: " << s.size() << endl;
				break;
			       }
			case 6:{
				s.printStack();
				break;
			       }
		}
	}
	return 0;	
}

