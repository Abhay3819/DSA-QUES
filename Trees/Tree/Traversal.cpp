// we use all intro part of tree and then its traverse

#include<iostream>
#include<queue>
using namespace std;

class node{
    public: // initilise
        int data;
        node* left;
        node* right;

        // constracter or define above
    node(int d){
        this -> data = d;
        this -> left =NULL;
        this -> right =NULL;
    }
};

// building tree using recursion
node* buildTree(node* root){
    cout << "Enter the data :" << endl;
    int data;
    cin >> data;
    root = new node(data);
    
    // base case
    if(data == -1){
        return NULL;
    }
    // recursive call
    cout<< "Enter the data inserting the left " << data << endl;
    root->left = buildTree(root->left);
    cout<< "Enter the data inserting the right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
 
// tree ko level me ke liye
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push (root);
    q.push(NULL);

    while(!q.empty()){
        node* temp= q.front();
        q.pop();

        if(temp==NULL){ // purana level complete ho chuka hai
            cout<< endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data << " ";
            if(temp->left){
        q.push(temp->left);
    }
        if(temp->right){
        q.push(temp->right);
    }
  }
 }
}

// tree traversals of different apporachs

  // 1. preorder traversals
void preorder(node* root){
    //base case
    if(root == NULL){
        return ;
    }

    cout<< root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

  // 1. inorder traversals
void inorder(node* root){
    //base case
    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout<< root->data << " ";
    inorder(root->right);
}

  // 1. postorder traversals
void postorder(node* root){
    //base case
    if(root == NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " ";
}

int main (){
    node* root = NULL;

    // Creating  a tree
    root = buildTree(root);
     // inputs 1 3 7 -1 -1 11  -1 -1 5 17 -1 -1 -1
    // level order
    cout<< "printing the level order traversal output"<< endl;
    levelOrderTraversal(root);

    // for printing & calling the traversals

    cout<< "Preorder traversal is : ";
    preorder(root);

    cout<< endl << "inorder traversal is : ";
    inorder(root);

    cout<< endl << "postorder traversal is : ";
    postorder(root);

    return 0;
}