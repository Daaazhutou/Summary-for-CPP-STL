/*
 * vector_template.cpp
 *
 *  Created on: May 19, 2018
 *      Author: tengjiaochen
 */

//Summary of vector
//present the usage of vector with examples
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void Vector_Display(vector<int> &ivec) {
	int i = 0;
	//cout<<"ELements in current ivec: "<<endl;
	for (i = 0; i < ivec.size(); i++) {
		cout << ivec[i] << " ";
	}
	cout << endl;
}

/*
 * Initialization of vectors
 */
void Vector_Initialization() {
	//默认初始化， ivec_1 无元素
	vector<int> ivec_1;
	// ivec_2为ivec_1元素副本
	vector<int> ivec_2(ivec_1);
	// ivec_3 为 10 个 值为 0 的元素。ivec_32 为 10 个值为 a 的元素
	vector<int> ivec_3(10, 0);
	vector<string> ivec_32(10, "a");
	// ivec_4 为 10 个 空 的vector
	vector<int> ivec_4(10);

	int i = 0;
	for (i = 0; i < ivec_3.size(); i++) {
		cout << ivec_3[i] << " ";
	}
}

/*
 * Inserting elements into vectors
 */
void Vector_Insert() {
	vector<int> ivec_1(10, 0);
	cout << "Current Vector before Insertion" << endl;
	Vector_Display(ivec_1);

	//在vector中间插入元素
	ivec_1.insert(ivec_1.begin() + 1, 43);
	ivec_1.insert(ivec_1.begin(), 3, 13);
	ivec_1.insert(ivec_1.begin() + 6, ivec_1.begin(), ivec_1.begin() + 5);
	cout << "Current Vector After Insertion" << endl;
	Vector_Display(ivec_1);

	//在vector结尾插入元素
	ivec_1.push_back(100);  // append word to text
	cout << "Current Vector After Push back" << endl;
	Vector_Display(ivec_1);
}

/*
 * 删除vector中的元素
 */
void Vector_Delete() {
	vector<int> ivec_1(10);
	for (int i = 0; i < ivec_1.size(); i++) {
		ivec_1[i] = i;
	}
	cout << "Current Vector before Deletion" << endl;
	Vector_Display(ivec_1);

	// 删除ivec_1.begin() + 1位置的数据，传回下一个数据的位置。
	ivec_1.erase(ivec_1.begin() + 1);
	cout << "Current Vector After Deletion" << endl;
	Vector_Display(ivec_1);

	//删除[ivec_1.begin(),ivec_1.begin() + 3)区间的数据，传回下一个数据的位置。
	ivec_1.erase(ivec_1.begin() + 1, ivec_1.begin() + 3);
	cout << "Current Vector After Deletion 2" << endl;
	Vector_Display(ivec_1);

	//清空ivec_1中的元素
	ivec_1.clear();
}

void Vector_Visit() {
	vector<int> ivec_1(10);
	for (int i = 0; i < ivec_1.size(); i++) {
		ivec_1[i] = i;
	}
	cout << "Current Vector" << endl;
	Vector_Display(ivec_1);

	//使用下标访问vector当中的元素
	cout << "下标： " << ivec_1[3] << endl;
	//使用iterator访问vector中的元素
	cout << "迭代器: " << *ivec_1.begin() + 3 << endl;
}

bool comp_int(int a, int b) {
	return a > b;
}

bool comp_pair(pair<int, char> a, pair<int, char> b) {
	return a.first > b.first;
}

void Vector_Sort() {
	vector<int> ivec_1(10);
	for (int i = 0; i < ivec_1.size(); i++) {
		ivec_1[i] = i;
	}
	cout << "Current Vector without sort" << endl;
	Vector_Display(ivec_1);

	//使用sort进行升序排序
	sort(ivec_1.begin(), ivec_1.end(), comp_int);
	cout << "Current Vector After Descending sort" << endl;
	Vector_Display(ivec_1);

	//使用sort进行降序排序
	sort(ivec_1.begin(), ivec_1.end());
	cout << "Current Vector After Ascending Sort" << endl;
	Vector_Display(ivec_1);

	vector<pair<int, char> > ivec_2(10);
	for (int i = 0; i < ivec_2.size(); i++) {
		ivec_2[i].first = i;
		ivec_2[i].second = 'a' + i;
	}
	cout << "Current Pair Vector without sort" << endl;
	for (int i = 0; i < ivec_2.size(); i++) {
		cout << ivec_2[i].second << " ";
	}
	cout << endl;

	sort(ivec_2.begin(), ivec_2.end(), comp_pair);
	cout << "Current Pair Vector After Descending Sort" << endl;
	for (int i = 0; i < ivec_2.size(); i++) {
		cout << ivec_2[i].second << " ";
	}
	cout << endl;
}

void Vector_Traversal() {
	//通过下标遍历
	vector<int> ivec_1(10);
	for (int i = 0; i < ivec_1.size(); i++) {
		ivec_1[i] = i;
	}
	cout<<"Traversal with subscript"<<endl;
	for (int i = 0; i < ivec_1.size(); i++)
		cout << ivec_1[i] << ' ';
	cout<<endl;

	//通过迭代器遍历
	cout<<"Traversal with iterator："<<endl;
	vector<int>::iterator it;
	for (it = ivec_1.begin(); it != ivec_1.end(); it++) {
		cout << *it << ' ';
	}
	cout<<endl;
}
