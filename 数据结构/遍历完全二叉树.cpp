#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
typedef int Node;
void visit(Node tree[], int root)
{
  printf("%d ",tree[root]);
}

void PreOrderTraverse(Node tree[], int root, int size)
{
  if(root<size)
  {
     visit(tree, root);
     PreOrderTraverse(tree, root*2+1,size);//�������������
     PreOrderTraverse(tree, root*2+2,size);//�������������
  }
}

void InOrderTraverse(Node tree[], int root, int size)
{ 
      if (root<size)   
    	{ 	
			InOrderTraverse(tree, root*2+1,size); //�������������
         	visit(tree, root);
         	InOrderTraverse(tree, root*2+2,size); //�������������
    	}
}

void PosOrderTraverse(Node tree[], int root, int size)
{
	if (root<size)   
    { 	
		PosOrderTraverse(tree, root*2+1,size); //�������������
        PosOrderTraverse(tree, root*2+2,size);//�������������
        visit(tree,root);
    }
}

int main()
{
	Node tree[MAX]; 
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&tree[i]);
	}
	int root =0;
	PreOrderTraverse(tree,root,n);
	printf("\n");
	root=0;
	InOrderTraverse(tree,root,n);
	printf("\n");
	root=0;
	PosOrderTraverse(tree,root,n);
	printf("\n");
	return 0;
}
