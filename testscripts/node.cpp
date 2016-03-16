/* 
* @Author: Administrator
* @Date:   2016-02-26 15:06:26
* @Last Modified by:   Administrator
* @Last Modified time: 2016-02-26 15:21:31
*/

#include <stdio.h>
#include <cstdlib>
#include <iostream>
using namespace std;

typedef struct node{
	int value;
	struct node * next;
} nodeType;
int main() {
	nodeType * tmpNode = NULL;
	nodeType * header = tmpNode;
	nodeType * newNode = NULL;
	int i, j = 0;
	for (i = 0; i < 10; i++) {
		newNode = new nodeType;
		if( newNode == NULL ) {
			cout << "new node error" << endl;
			continue;
		}
		if( i == 0 ) {
			header = tmpNode = newNode;	
		}
		
		newNode -> value = i;
		newNode -> next = NULL;
		tmpNode -> next = newNode;
		tmpNode = newNode;
	}
	nodeType * tmp = header;
	cout << "view list" << endl;
	while (tmp != NULL) {
		cout << "--->" << tmp -> value << endl;
		tmp = tmp->next;
	}
	nodeType * cur = header;
	nodeType * pre = NULL;
	nodeType * next = header -> next;
	while (next != NULL) {
		cur -> next = pre;
		pre = cur;
		cur = next;
		next = next -> next;
	}
	cur->next = pre;
	//cout << "cur:        " << cur -> value << endl;
	//cout << "cur->next:  " << cur -> next << endl;
	//cout << "pre:        " << pre -> value << endl;
	//cout << "pre->next:  " << pre -> next << endl;
	//cout << "next:       " << next << endl;
	cout << "reverse list" << endl;
	while (cur != NULL) {
		cout << "<---" << cur -> value << endl;
		cur = cur -> next;
	}
    return 0;
}

