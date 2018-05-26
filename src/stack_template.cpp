/*
 * stack_template.cpp
 *
 *  Created on: May 26, 2018
 *      Author: tengjiaochen
 */

#include <stack>
#include <iostream>
using namespace std;

void Stack_Usage(){
	//stack initialization
	stack <int> stk1;

	//push the element into stack
	stk1.push(10);

	for (int i = 0; i< 10; i++){
		stk1.push(i);
	}


	//pop the top of stack
	cout<< "get the top of the stack: "<< stk1.top() <<endl;
	stk1.pop();
	//get the top of stack without deleting the top element
	cout<< "get the top of the stack: "<< stk1.top()<<endl;

	//check whether the stack is empty
	if (stk1.empty()){
		cout<< "The stack is empty. "<<endl;
	}
	else{
		cout<< "The stack is not empty. "<<endl;
	}

	//clear the stack
	cout<< "Clearing the stack...... "<<endl;
	while(!stk1.empty()){
		stk1.pop();
	}

	if (stk1.empty()){
		cout<< "The stack is empty. "<<endl;
	}
	else{
		cout<< "The stack is not empty. "<<endl;
	}

}


