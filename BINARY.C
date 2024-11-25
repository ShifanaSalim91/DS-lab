#include "alloc.h"
#include"stdio.h"
struct TreeNode
{
	struct TreeNode *lchild;
	int data;
	struct TreeNode *rchild;
	};
	typedef struct TreeNode TreeNode;
	TreeNode *getnode();
	main()
	{
	TreeNode *root;
	root=NULL;
	Treecreate(&root,6);
	Treecreate(&root,4);
	Treecreate(&root,8);
	Treecreate(&root,3);
	Treecreate(&root,7);
	Treecreate(&root,5);
	Treecreate(&root,9);
	Treecreate(&root,11);
	Treecreate(&root,12);
	clrscr();
	TreeDisplay(root,1);
	getch();
	return 0;
	}
	Treecreate(TreeNode **rt,int item)
	{
	TreeNode *current=(*rt),*temp;
	if( (*rt)==NULL)
	{
	(*rt)=getnode();
	(*rt)->data=item;
	(*rt)->lchild=NULL;
	(*rt)->rchild=NULL;
	return;
	}
	while(current!=NULL)
	 {
	  if(item<current->data)
	  {
	   if(current->lchild !=NULL)
		current=current->lchild;
	   else
	   {
		temp=getnode();
		current->lchild=temp;
		temp->data=item;
		temp->rchild=NULL;
		temp->lchild=NULL;
		return;
	   }
   }
   else
   {
       if(item>current->data)
       {
       if(current->rchild!=NULL)
	  current=current->rchild;
       else
       {
       temp=getnode();
       current->rchild=temp;
       temp->data=item;
       temp->rchild=NULL;
       temp->lchild=NULL;
       return;
       }
   }
   else
   {
     printf("wrong data...");
     exit(0);

     }
   }
}
}
TreeDisplay(TreeNode *rt,int level)
{
int i;
if((rt)!=NULL)
{
TreeDisplay((rt)->rchild,level+1);
printf("\n");
for(i=0;i<level;i++)
   printf("     ");
printf("%d",(rt)->data);
TreeDisplay((rt)->lchild,level+1);
}
return 0;
}
TreeNode *getnode()
{
TreeNode *t;
t=(TreeNode *)malloc(sizeof(TreeNode));
  return t;
  }

