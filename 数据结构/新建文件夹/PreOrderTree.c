#include<stdio.h>
#include<stdlib.h>
#define N 20
typedef int Node;
void CreateBitTree(Node tree[], int size);
void PreOrderTraverse(Node tree[], int root, int size);
void LevelOrderTraverse(Node tree[], int root, int size);
void visit(Node tree[], int root);
int main()
{
   Node tree[N];
   int root = 0;
   CreateBitTree(tree, N);
   LevelOrderTraverse(tree, root, N); 
   PreOrderTraverse(tree, root, N);
}


void PreOrderTraverse(Node tree[], int root, int size)
{
  if(root<size)
  {
     visit(tree, root);
     PreOrderTraverse(tree, root*2+1,size);
     PreOrderTraverse(tree, root*2+2,size);
  }
}

void CreateBitTree(Node tree[], int size)
{
  int i;
  for(i=0;i<size;++i)
    tree[i]=rand()%1000;
}

void LevelOrderTraverse(Node tree[], int root, int size)
{
  int i;
  for(i=root;i<size;++i)
    printf("%4d", tree[i]);
  printf("\n");
}

void visit(Node tree[], int root)
{
  printf("%4d",tree[root]);
}
