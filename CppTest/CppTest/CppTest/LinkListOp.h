/**
* �ڵ����ݽṹ && ����ĸ��ֲ���
*/

#include "stdafx.h"

typedef struct ListNode{

	struct ListNode *next;
				int data;
}LinkList;

/*
* 
*
*/
void  InitLinkList(LinkList *InitList);


/*
* �������ܣ���������
* ����������
*	tmpLst,��Ҫ���������ͷ��㣻
*����ֵ���ɹ����� 0�����򷵻ط�0��
*/
int CreatLinkList(LinkList *tmpLst);


/*
* �������ܣ�ɾ������ڵ㣻
* ����������
*	index,��Ҫɾ���������������
*����ֵ���ɹ����� 0�����򷵻ط�0��
*/
int DeleteNode(int index);


int AddNode(LinkList *Node);

int ModifyNode(LinkList *Node);

int SearchNode(int  PosNode);

