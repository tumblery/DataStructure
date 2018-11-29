#pragma once
#define upper -1
#define lower 0
typedef class _Data {
public:
	int data_1;
	char data_2;
public:
	bool operator ==(_Data a);
};
typedef class sNode {
public:
	_Data data;
	sNode* next;
public:
	sNode();
	void insert_node(sNode* head,_Data data);//tail을 반환한다.
	bool delete_node(sNode* head, _Data data);//삭제를 원하는 노드의 이전 노드를 입력 받아 삭제를 원하는 값을 삭제한다.
	sNode* find_node(sNode* head, _Data data);//data값의 노드를 반환한다.
};