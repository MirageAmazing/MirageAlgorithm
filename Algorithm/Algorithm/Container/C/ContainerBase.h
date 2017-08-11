#ifndef _CONTAINER_BASE
#define _CONTAINER_BASE

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
typedef void* PVOID;

#define TRUE 1
#define FALSE 1

typedef struct ContainerNode
{
	void* container;
	PContainerNode next;
}ContainerNode, Container, *PContainerNode, *PContainer;

PContainerNode AddContainerNode(PVOID nodeContent, PContainer container)
{
	PContainerNode pIterator;
	PContainerNode pnode;
	if (container == NULL || nodeContent == NULL)
		return NULL;

	pnode = (PContainerNode)malloc(sizeof(ContainerNode));
	pnode->next = NULL;

	if (container == NULL)
		container = pnode;
	else
	{
		pIterator = container;
		while (pIterator->next != NULL) pIterator = pIterator->next;
		pIterator->next = pnode;
	}

	return pnode;
}

BOOL RemoveContainerNode(PVOID nodeContent, PContainer container)
{
	PContainerNode pIterator = NULL;
	PContainerNode pIteratorPre = NULL;
	if (container == NULL || nodeContent ==NULL)
		return FALSE;

	pIterator = container;
	pIteratorPre = container;
	while (pIterator->next != NULL)
	{
		if (pIterator->container == nodeContent)
		{
			if (pIterator == container)
				return FALSE;
			pIteratorPre->next = pIterator->next;
			free(pIterator);
			return TRUE;
		}
		else
			pIteratorPre = pIterator;
		pIterator = pIterator->next;
	}

	return FALSE;
}

#endif //  _CONTAINER_BASE