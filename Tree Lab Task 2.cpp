#include <iostream>
using namespace std;

class Tree {
public:
    char data;     // Change data type to char
    Tree* left;
    Tree* right;

    // Constructor to initialize the node with a character value
    Tree(char val) {
        data = val;
        left = NULL;
        right = NULL;
    }

    // Preorder Traversal (Root, Left, Right)
    void preorder(Tree* temp) {
        if (temp != NULL) {
            cout << "   " << temp->data;
            preorder(temp->left);
            preorder(temp->right);
        }
    }

    // Postorder Traversal (Left, Right, Root)
    void postorder(Tree* temp) {
        if (temp != NULL) {
            postorder(temp->left);
            postorder(temp->right);
            cout << "   " << temp->data;
        }
    }

    // Inorder Traversal (Left, Root, Right)
    void inorder(Tree* temp) {
        if (temp != NULL) {
            inorder(temp->left);
            cout << "   " << temp->data;
            inorder(temp->right);
        }
    }
};

int main() {
    // Create a tree with characters
    Tree* root = new Tree('A');
    root->left = new Tree('B');
    root->right = new Tree('C');
    root->left->left = new Tree('D');
    root->left->right = new Tree('E');
    root->right->left = new Tree('F');
    root->right->right = new Tree('G');

    // Print the traversals
    cout << "\nPreorder traversal:\n";
    root->preorder(root);
    cout << "\nPostorder traversal:\n";
    root->postorder(root);
    cout << "\nInorder traversal:\n";
    root->inorder(root);

    return 0;
}