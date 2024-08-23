#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left, *right;
};

// Create a node
  struct node* newNode(int item) {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = item;
  newnode->left = newnode->right = NULL;
   return newnode;
}

struct node *Insert(struct node *root, int data) {
  if (root == NULL)
    root = newNode(data);

  else if (data < root->data){
    root->left = Insert(root->left, data);
  }
  else{
    root->right = Insert(root->right, data);
  }


   return root;
}



void InOrder(struct node *root) {
  if (root == NULL) {
        return ;
  }
   InOrder(root->left);
   printf("%d\t", root->data);

    InOrder(root->right);

}

int main() {
        struct node *root = NULL;
   int ch,x;
   while(1)
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. Insertion");
        printf("\n2. Inorder traversal");
        printf("\n3. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {

            case 1:printf("Enter item : ");
                   scanf("%d",&x);
                   root = Insert(root,x);
                   break;
            case 2:printf("Inorder traversal  : \n");
                   InOrder(root);
                   break;
            case 3:exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

    return 0;

  }


