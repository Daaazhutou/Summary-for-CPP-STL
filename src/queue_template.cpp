/*
 * queue_template.cpp
 *
 *  Created on: May 26, 2018
 *      Author: tengjiaochen
 */
#include <queue>
#include <iostream>
using namespace std;

void Queue_Usage(){
	//queue initialization
	queue <int> q1;

	//push element into queue
	for (int i = 0; i < 10; i++){
		q1.push(i);
	}

	//get the front of queue
	cout<< "The front of the queue: "<<q1.front()<<endl;

	//get the back of the queue
	cout<< "The back of the queue: "<<q1.back()<<endl;

	//get the size of the queue
	cout<< "The size of the queue: "<<q1.size()<<endl;

	//pop the head of queue
	q1.pop();
	cout<<"Pop the front of queue.";
	cout<<"The new front of the queue:"<<q1.front()<<endl;

	//clear the queue with empty()
	while(!q1.empty()){
		q1.pop();
	}

	if (q1.empty()){
		cout<<"the queue is empty now."<<endl;
	}
}



