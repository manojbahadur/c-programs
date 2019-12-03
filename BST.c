# include <stdio.h>
# include <stdlib.h>
typedef struct BST {
      int data;
      struct BST *lchild, *rchild, *LOC;
} node;

void insert(node *, node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);
void find(int item,struct node **par,struct node **loc)
{
   struct node *ptr,*ptrsave, *root;

   if(root==NULL)  /*tree empty*/
   {
      *loc=NULL;
      *par=NULL;
      return;
   }
   if(item==root->data) /*item is at root*/
   {
      *loc=root;
      *par=NULL;
      return;
   }
   /*Initialize ptr and ptrsave*/
   if(item<root->data)
      ptr=root->lchild;
   else
      ptr=root->rchild;
   ptrsave=root;

   while(ptr!=NULL)
   {
      if(item==ptr->data)
      {       *loc=ptr;
         *par=ptrsave;
         return;
      }
      ptrsave=ptr;
      if(item<ptr->data)
         ptr=ptr->lchild;
      else
         ptr=ptr->rchild;
    }/*End of while */
    *loc=NULL;   /*item not found*/
    *par=ptrsave;
}/*End of find()*/

void main() 
{
   int choice;
   char ans;
   int key;
   struct node *location, *parent;
   node *new_node, *root, *LOC;
   node *get_node();
   root = NULL;
   printf("\nProgram For Binary Search Tree ");
   do {
         printf("\n1.Create");
         printf("\n2.Search");
         printf("\n3.Display inorder");
         printf("\n4.Display preorder");
         printf("\n5.Display postorder");
         printf("\n6.Exit");
         printf("\nEnter your choice :");
         scanf("%d", &choice);
         switch (choice) {
               case 1:
                        do {
                              new_node = get_node();
                              printf("\nEnter The Element ");
                              scanf("%d", &new_node->data);
                              if (root == NULL) /* Tree is not Created */
                                 root = new_node;
                              else
                                 insert(root, new_node);
                              printf("\nWant To enter More Elements?(y/n)");
                              getchar();
                              scanf("%c",&ans);
                           } while(ans == 'y');
                        break;

               case 2:  printf("\nEnter Element to be searched :");
                        scanf("%d", &key);
                        //search(node,key, &parent);
                        //printf("%d found in BST",key->parent);
                        find(key,&parent,&location);
                        if(location!=NULL)
                           printf("Item %d found in BST ",key);
                        else
                           printf("\nIt is not present in Binary Search Tree\n");
                        break;

               case 3:  if (root == NULL)
                           printf("Tree Is Not Created");
                        else {
                                 printf("\nThe inorder display : ");
                                 inorder(root);
                              }
                        break;
               case 4:  if (root == NULL)
                           printf("Tree Is Not Created");
                        else {
                                 printf("\nThe Preorder display : ");
                                 preorder(root);
                              }
                        break;
               case 5:  if (root == NULL)
                           printf("Tree Is Not Created");
                        else {
                                 printf("\nThe Postorder display : ");
                                 postorder(root);
                              }
                        break;
               case 6: exit(0);
               default : printf("wrong choice\n");
                        break;
               
            }
      } while (choice != 6);
}
/*
 Get new Node
 */
node *get_node() {
   node *temp;
   temp = (node *) malloc(sizeof(node));
   temp->lchild = NULL;
   temp->rchild = NULL;
   return temp;
}
/*
 This function is for creating a binary search tree
 */
void insert(node *root, node *new_node) 
{
   if (new_node->data < root->data) {
      if (root->lchild == NULL)
         root->lchild = new_node;
      else
         insert(root->lchild, new_node);
   }

   if (new_node->data > root->data) {
      if (root->rchild == NULL)
         root->rchild = new_node;
      else
         insert(root->rchild, new_node);
   }
}
/*
 This function is for searching the node from
 binary Search Tree
 */
/*
void search(node *root, int key, node **parent) 
{
   node *temp;
   temp = root;
   while ( ( (temp->lchild) != NULL) && ( (temp->rchild) != NULL)){
   //while (temp != NULL) {
      if (temp->data == key) {
         printf("\nThe %d Element is Present", temp->data);
         printf("\nParent of node %d is %d", key->data, parent->data);
      }
      *parent = temp;

      if (temp->data > key)
         temp = temp->lchild;
      else
         temp = temp->rchild;
   }
}    */



/*
 This function displays the tree in inorder fashion
 */
void inorder(node *temp) {
   if (temp != NULL) {
      inorder(temp->lchild);
      printf("%d", temp->data);
      inorder(temp->rchild);
   }
}
void preorder(node *temp)
{
   if(temp!=NULL)
   {
      printf("%d ",temp->data);
      preorder(temp->lchild);
      preorder(temp->rchild);
   }
}
void postorder(node *temp)
{
   if(temp!=NULL)
   {
      postorder(temp->lchild);
      postorder(temp->rchild);
      printf("%d  ",temp->data);
   }
}

/*
node* search (int key, node *root)
{
    node* myptr;

    myptr = root;

    while ( ( (myptr->lchild) != NULL) && ( (myptr->rchild) != NULL))
    {
        if ( key < myptr->data)
        {
            myptr = myptr->lchild;
        }
        else
        {
            myptr = myptr->rchild;
        }
    }
    return myptr;
    }
*/














