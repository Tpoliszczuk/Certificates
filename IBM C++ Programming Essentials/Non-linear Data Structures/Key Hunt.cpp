#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    
    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

class BST {
public:
    Node *root;
    BST() {
        root = NULL;
    }
    Node* insert(Node*, int);
    int search(int);
};

Node* BST::insert(Node* root, int value) {
    if (root == NULL) {
        root = new Node(value);
    } else if (value >= root->data) {
        root->right = insert(root->right, value);
    } else {
        root->left = insert(root->left, value);
    }
    return root;
}

int BST::search(int searchKey) {
    Node *temp = root;
    while (temp != NULL) {
        if (temp->data == searchKey)
            return searchKey;
        else if (temp->data > searchKey)
            temp = temp->left;
        else
            temp = temp->right;
    }
    return -1;
}

int main() {
    BST tree;
    string ch = "yes";
    int num, searchKey;

    cout << "Enter the key number:\n";
    cin >> num;

    tree.root = tree.insert(tree.root, num);

    do {
        cout << "Do you want to create another junction (yes/no)?\n";
        cin >> ch;
        if (ch.compare("yes") == 0) {
            cout << "Enter the key number:\n";
            cin >> num;
            tree.root = tree.insert(tree.root, num);
        } else {
            break;
        }
    } while (true);

    cout << "\nEnter the key to be searched: ";
    cin >> searchKey;
    int flag = tree.search(searchKey);
    if (flag == searchKey)
        cout << "\n" << searchKey << " found" << endl;
    else
        cout << "\n" << searchKey << " not found" << endl;

    return 0;
}
