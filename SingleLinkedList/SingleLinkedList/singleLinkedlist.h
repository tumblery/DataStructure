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
	void insert_node(sNode* head,_Data data);//tail�� ��ȯ�Ѵ�.
	bool delete_node(sNode* head, _Data data);//������ ���ϴ� ����� ���� ��带 �Է� �޾� ������ ���ϴ� ���� �����Ѵ�.
	sNode* find_node(sNode* head, _Data data);//data���� ��带 ��ȯ�Ѵ�.
};