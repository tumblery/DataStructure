#include<iostream>
#include"singleLinkedlist.h"
using namespace std;
bool _Data::operator==(_Data A) {
	return (this->data_1 == A.data_1) && (this->data_2 == A.data_2);
}
sNode::sNode() {
	this->next = NULL;
}
void sNode::insert_node(sNode* head,  _Data data) {
	sNode* new_node = new sNode;
	new_node->data = data;
	new_node->next = NULL;
	if (head->next == NULL) {
		head->next = new_node;
		return;
	}
	sNode* tmp = head;
	while(tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = new_node;
	return;
}
bool sNode::delete_node(sNode* head,_Data data) {
	sNode* tmp = head;
	sNode* tmp1 = head->next;
	while (tmp1 != NULL) {
		if (tmp1->data == data) {
			tmp->next = tmp1->next;
			delete tmp1;
			return true;
		}
		tmp = tmp->next;
		tmp1 = tmp1->next;
	}
	return false;
}
sNode* sNode::find_node(sNode* head, _Data data) {
	sNode* tmp = head;
	while (tmp != NULL) {
		if (tmp->data == data)
			return tmp;
		tmp = tmp->next;
	}
	return NULL;
}
