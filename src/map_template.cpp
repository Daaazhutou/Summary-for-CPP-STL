/*
 * map_template.cpp
 *
 *  Created on: May 26, 2018
 *      Author: tengjiaochen
 */

#include <map>
#include <iostream>
#include <string>

using namespace std;

struct sub_map {
	string description;
	map<int, string> sub;
};

void Map_Initialization() {
	map<int, string> map1;
	map<string, sub_map> map2;
}

void Map_Display(map<int, string> map1) {
	map<int, string>::iterator it;
	cout << "Displaying the map." << endl;
	for (it = map1.begin(); it != map1.end(); it++) {
		cout << "Map[" << it->first << "]: " << it->second << endl;
	}
}

void Map_Insert() {
	map<int, string> map1;
	map1.insert(pair<int, string>(0, "first one"));
	map1.insert(make_pair(1, "second one"));
	map1[2] = "third one";
	cout << "map[0]: " << map1[0] << endl;
	cout << "map[1]: " << map1[1] << endl;
	cout << "map[2]: " << map1[2] << endl;
	Map_Display(map1);
}

void Map_Iterate() {
	map<int, string> map1;
	for (int i = 0; i < 10; i++) {
		string tmp;
		tmp = (int) 'a' + i;
		map1[i] = tmp;
	}

	map<int, string>::iterator it;
	it = map1.begin();
	cout << "Begin of map1=> " << it->first << ": " << it->second << endl;
	it++;
	cout << "Next=> " << it->first << ": " << it->second << endl;

	cout << "Reverse iterate" << endl;
	map<int, string>::reverse_iterator re_it;
	re_it = map1.rbegin();
	cout << "End of map1=> " << re_it->first << ": " << re_it->second << endl;
	re_it++;
	cout << "Next=> " << re_it->first << ": " << re_it->second << endl;

}

void Map_Find() {
	map<int, string> map1;
	for (int i = 0; i < 10; i++) {
		string tmp;
		tmp = (int) 'a' + i;
		map1[i] = tmp;
	}

	Map_Display(map1);

	cout << "looking for 0..." << endl;
	if (map1.find(0) == map1.end()) {
		cout << "Cannot find..." << endl;
	} else {
		cout << "Found map[0]: " << map1.find(0)->first << endl;
	}

	cout << "looking for char 11..." << endl;
	if (map1.find(11) == map1.end()) {
		cout << "Cannot find..." << endl;
	} else {
		cout << "Found map[11]: " << map1.find(11)->first << endl;
	}
}

void Map_delete() {
	map<int, string> map1;
	for (int i = 0; i < 10; i++) {
		string tmp;
		tmp = (int) 'a' + i;
		map1[i] = tmp;
	}
	cout<<"Initial Map before deletion"<<endl;
	Map_Display(map1);


	//erase the 0,1,2 of map
	map1.erase(0);
	map1.erase(1);
	map1.erase(2);
	cout<<"Current Map after deletion 0,1,2"<<endl;
	Map_Display(map1);

	//clear the map
	map1.clear();
	if(map1.empty()){
		cout<<"The Map is empty now.";
	}

}
//void Vector_Initialization();
//void Vector_Display(vector<int> &);
//void Vector_Insert();
//void Vector_Delete();
//void Vector_Visit();
//void Vector_Sort();
//void Vector_Traversal();

