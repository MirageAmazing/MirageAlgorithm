#ifndef _SINGLY_LINKED_LIST
#define _SINGLY_LINKED_LIST

typedef struct SL_Node
{
	void* Context;
	SL_Node* next;
}SL_Node;

typedef SL_Node* SLList;

SLList CreateSLList()
{

}

#endif //  _SINGLY_LINKED_LIST
