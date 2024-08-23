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


void preorder(struct node *root) {
  if (root == NULL) {
        return ;
  }

   printf("%d ", root->data);

    preorder(root->left);

    preorder(root->right);

}


 struct node* insert(struct node *root, int data) {
  if (root == NULL)
    root = newNode(data);

  else if (data < root->data){
    root->left = insert(root->left, data);
  }
  else{
    root->right = insert(root->right, data);
  }


   return root;
}
int search(struct node *root,int data)
{
    if(root ==NULL)
    {
        return 0;
    }
    else if(data == root->data)
        return 1;
    else if(data<=root->data){
            return search(root->left,data);

    }
    else
        return search(root->right,data);

}

// Find the inorder successor
struct node * minValueNode(struct node *node) {
  struct node *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;
    return current;


}

// Deleting a node
struct node* deleteNode(struct node *root, int data) {
  // Return if the tree is empty
  if (root == NULL)
    return root;
  // Find the node to be deleted
  if (data < root->data)
    root->left = deleteNode(root->left, data);
  else if (data > root->data)
    root->right = deleteNode(root->right, data);

  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;

    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;

    }

    // If the node has two children
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->data = temp->data;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->data);
  }
        return root;
}



  int main() {
        struct node *root = NULL;
   int ch,x;
   while(1)
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. Insert");
        printf("\n2. Inorder");
        printf("\n3. delete ");

        printf("\n4. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {

            case 1:printf("Enter item : ");
                   scanf("%d",&x);

                   root = insert(root,x);
                   printf("root : %d",root->data);

                   break;
            case 2:printf("preorder traversal  :\n");
                   preorder(root);
                   break;
            case 3:printf("Enter item : ");
                   scanf("%d",&x);
                   if(search(root,x)==1)
                    printf("Item found\n");
                   else
                      printf("Item not found\n");
                   break;
            case 4:printf("Enter item : ");
                   scanf("%d",&x);
                   root = deleteNode(root,x);
                   break;

            case 5:exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

    return 0;

  }
