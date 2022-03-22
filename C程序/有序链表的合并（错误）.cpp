#include<stdio.h>
#include <cstdlib>
#define maxlen 10000
#define ERROR -1
typedef int ElemType;
typedef struct{
	ElemType elem[maxlen] ;
	int           realen;  //实际存放的数目 
}List;


int ListFull(List *list) 
{
	return 0;
}

void InitList(List *list)
{
	list->realen=0; 
}

void CreateList(List *list,int a)
{
    int i;
    list->realen= a;
    for(i=0;i < a;i++)
	{
        scanf("%d ",list->elem[i]);
    }
}


int LengthList(List *list)
{
	return list->realen;
}
 
ElemType GetElem(List *list,int idx,ElemType e)
{
	if(idx>=0 && idx<list->realen)
	     return list->elem[idx];
    else exit(-1);
}

int ListInsert(List *list,int idx,ElemType e)
{
	int i;
	if(idx>=0 && idx<=list->realen && !ListFull(list))
	{
		for(i=list->realen;i>idx;i--)
		   list->elem[idx]=list->elem[i-1];
		list->elem[idx] = e;
		list->realen++;
	}
	else return ERROR;
}

void mergelist(List *la,List *lb,List *lc)
{
	InitList(lc);
	int i,j,k,ai,bj;
	i=j=1;k=0;
	int lalen=LengthList(la);int lblen=LengthList(lb);
	while((i<=lalen)&&(j<=lblen))
	{
		GetElem(la,i,ai);GetElem(lb,j,bj);	
	}
	if(ai<=bj)
	{
		ListInsert(lc,++k,ai); ++i;
	}
	else
	{
		ListInsert(lc,++k,bj); ++j;
	}
	while(i<=lalen)
	{
		GetElem(la,i++,ai);ListInsert(lc,++k,ai);
	 } 
	while(j<=lblen)
	{
		GetElem(lb,j++,bj);ListInsert(lc,++k,bj);
	 } 
}


int main()
{
	List la,lb,*lc;
	int n,m,t;
	scanf("%d %d",&n,&m);
	InitList(&la);
    CreateList(&la,n);
    InitList(&lb);
	CreateList(&lb,m);
	mergelist(&la,&lb,lc);
	for(t=1;t<=lc->realen;t++)
	{
		printf("%d ",lc->elem[t]);
	}
	return 0;
}
