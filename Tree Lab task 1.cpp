#include <iostream>
using namespace std;
class Tree {
public:
    int data;
    Tree* left;
    Tree* right;

   
    Tree(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
  
  
   void preorder(Tree * temp)
   {
     if(temp!=NULL)
     {
        cout<<"   "<<temp->data;
        preorder(temp->left );
        preorder(temp->right);
     }
   }
   void postorder(Tree * temp)
   {
      if(temp!=NULL)
      { 
         postorder(temp->left);
         postorder(temp->right);
         cout<<"   "<<temp->data;
         
      }
   }
   void inorder(Tree * temp)
   {
      if(temp!=NULL)
     {
      inorder(temp->left);
      cout<<"   "<<temp->data;
      inorder(temp->right);
     }
   }
};
int main()
{
   Tree * root = new Tree(5);
   root->left= new Tree(6);
   root->right=new Tree(8);
   root->left->left=new Tree(9);
   root->left->right=new Tree(10);
   root->right->left=new Tree(2);
   root->right->right=new Tree(3);
   cout<<"\nPreorder traversal:  \n";
   root->preorder(root);
   cout<<"\nPostorder traversal:  \n";
   root->postorder(root);
   cout<<"\nInorder traversal:  \n";
   root->inorder(root); 

    return 0;
}