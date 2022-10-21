#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE 100

void push(int ele);
int pop();
int size();
bool isEmpty();
int returnTop();

int arr[MAX_SIZE];
int top = -1;

int main(){
	int op = -1;
	int ele;
	cout << "choose the operation - 1. Push 2.Pop 3.Return Top 4. Return if stack empty 5. size of stack " << endl;
	while(op != 0){
		cin >> op;
	switch(op){
		case 1:{
			cout << "Enter ele to insert into stack: ";
			cin >> ele;
			push(ele);
			break;
		       }
		case 2:{
			int e = pop();
			cout << e << " is popped!" << endl;
			break;
		       }
		case 3:{
			cout << "Top is: " << returnTop() << endl;
			break;
		       }
		case 4:{
			isEmpty() ? cout << "True" << endl : cout << "False" << endl;
			break;}
		case 5:{
			cout << "Size of stack" << size() << endl;
			break;}
		default:{
			cout << "Enter Valid Operation" << endl;
			break;	}
	}}
	return 0;	
}

void push(int ele){
	top += 1;
	arr[top] = ele;
}

int returnTop(){
	return arr[top];
}

bool isEmpty(){
	if(top == -1){
		return true;
	}else{
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
