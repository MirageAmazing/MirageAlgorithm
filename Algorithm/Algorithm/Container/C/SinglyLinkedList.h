#ifndef _SINGLY_LINKED_LIST
#define _SINGLY_LINKED_LIST

#include "ContainerBase.h"

typedef struct SL_Node ///单向链表节点
{
	void* Context;
	SL_Node* next;
}SL_Node, *PSLNode, *SLList;

Container sllistContainer;

SLList CreateSLList()
{
	SLList list = (SLList)malloc(sizeof(SL_Node));
	list->next = NULL;
	AddContainerNode(list, &sllistContainer);
	return list;
}

BOOL DeleteSLList(SLList list)
{
	RemoveContainerNode(list, &sllistContainer);
}

PSLNode AddSLListNode(PVOID nodeContent, SLList list)
{
	PSLNode node = (PSLNode)malloc(sizeof(SL_Node));
	node->next = NULL;
	node->Context = nodeContent;

	while (list->next != NULL) list = list->next;
	list->next = node;

	return node;
}

#endif //  _SINGLY_LINKED_LIST
