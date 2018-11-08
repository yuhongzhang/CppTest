/**
* 节点数据结构 && 链表的各种操作
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
* 函数功能：创建链表；
* 函数参数：
*	tmpLst,需要创建链表的头结点；
*返回值：成功返回 0；否则返回非0；
*/
int CreatLinkList(LinkList *tmpLst);


/*
* 函数功能：删除链表节点；
* 函数参数：
*	index,需要删除的链表的索引；
*返回值：成功返回 0；否则返回非0；
*/
int DeleteNode(int index);


int AddNode(LinkList *Node);

int ModifyNode(LinkList *Node);

int SearchNode(int  PosNode);

