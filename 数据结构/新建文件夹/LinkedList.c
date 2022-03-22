#include<stdio.h>
typedef int ElemType;
typedef struct Node{
  ElemType data;
  struct Node *next;
}NODE, HEAD;
void  InitList(HEAD *head)
{
   head->data=0;
   head->next=NULL;
} 
//销毁线性表
void DestroyList(HEAD *head)
{
  while(head->data>0) 
    ListDelete(head,head);
}
//判断线性表是否为空
int ListEmpty(HEAD *head)
{
   return head->data==0;
}
//判断线性表是否已满
int ListFull(HEAD *head)
{
  return 0;  
}
//求线性表的长度
int ListLength(HEAD *head)
{
  return head->data;
}

//获取线性表第idx个位置的元素的指针 
NODE *GetElem(HEAD *head, int idx)
{
  int i;
  NODE *p;
  if(idx<=0 || idx>head->data)
    return NULL;
  p = head->next; 
  for(i=1; i<idx; ++i)
    p = p->next; 
  return p;
}
//返回元素e在线性表中所在的节点的指针 
NODE *LocateElem(HEAD *head, ElemType e)
{
   NODE *p;
   for(p=head->next; p!=NULL; p=p->next)
   {
      if(p->data==e)
        return p;
   }
   return NULL;
}

//求元素cur的直接前驱
NODE *PriorElem(HEAD *head, NODE *cur)
{
   NODE *pre;
   for(pre=head; pre!=NULL; pre=pre->next)
    if(pre->next==cur)
       return pre;
   return NULL;   
}
//求元素cur的直接后继
NODE *NextElem(HEAD *head, NODE *cur)
{
  if(cur!=NULL)
    return cur->next;
  else
    return NULL;
}
//在线性表的节点pre后面插入元素e
int ListInsert(HEAD *head, NODE *pre, ElemType e)
{
   NODE *work;
   work = (NODE *)malloc(sizeof(NODE));
   if(work==NULL)
     return 0;
   work->data = e;
   work->next = pre->next;
   pre->next = work;
   head->data++;
   return 1;  
} 
//删除线性表中的pre之后的那个节点 
int ListDelete(HEAD *head, NODE *pre)
{
   NODE *del;
   if(pre==NULL) 
     return 0;
   del = pre->next;
   if(del==NULL)
     return 0;
   pre->next = del->next;
   free(del);
   head->data--;
   return 1;
}

int main()
{
  HEAD h;
  InitList(&h);
  printf("data=%d, next=%p",h.data,h.next);
  return 0;
} 
