
#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include "LinkListOp.h"



void InitLinkList(LinkList *InitList){

	InitList->next = NULL;

	return ;
}


int  CreatLinkList(LinkList *tmpLst){

	LinkList *node = (LinkList *)malloc(sizeof(LinkList));
	if (!node)
	{
		return  -1;
	}

	int tmp = 0;
	scanf("%d",&tmp);

	while(tmp != -1){

		node->data = tmp;
		node->next = tmpLst->next;
		tmpLst->next = node;

		node = (LinkList *)malloc(sizeof(LinkList));
		if (!node)
		{
			return -1;
		}

		scanf("%d",&tmp);


	}//while
	 
	free(node);

	return 0;
}

int  DeleteNode(int index){


	return 0;
}


