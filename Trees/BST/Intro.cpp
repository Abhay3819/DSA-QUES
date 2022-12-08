#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }

};

// tree traversals of different apporachs

  // 1. preorder traversals
void preorder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }

    cout<< root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

  // 1. inorder traversals
void inorder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout<< root->data << " ";
    inorder(root->right);
}

  // 1. postorder traversals
void postorder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " ";
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push (root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp= q.front();
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

Node* insertToBst(Node* root,int d){
    //base case
    if(root==NULL){
        root=new Node(d);
        return root; 
    }

    if(d > root->data){
        // right part me insert karega
        root->right=insertToBst(root->right,d);
    }
    else{
        // left part me insert karega
        root->left=insertToBst(root->left,d);
    }
}

// for finding the min value in left subtree
Node* minVal(Node* root){
    Node* temp=root;
    
    while(temp->left !=NULL){
        temp=temp->left;
    }
    return temp;
}

// for finding the max value in right subtree
Node* maxVal(Node* root){
    Node* temp=root;
    
    while(temp->right !=NULL){
        temp=temp->right;
    }
    return temp;
}

// for deleting the node
Node* deleteFromBST(Node* root ,int val){
    //base case
    if(root==NULL){
        return root;
    }

    // dalete karane wala value mil gaya
    if(root->data==val){
        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child
          // for left
            if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
          }
          // for left
            if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
          }
        // 2 child
          // there are 2 options
           // 1.left me se max value nikalo
           // 1.right me se min value nikalo
            if(root->left!=NULL && root->right!=NULL){
            int mini=minVal(root->right) ->data;
            root->data=mini;
            root->right=deleteFromBST(root->right ,mini);
            return root;
          }
    }

    else if(root->data > val){
        // left part me jao
        root->left=deleteFromBST(root->left ,val);
        return root;
    }
    else{
        // right part me jao
        root->right=deleteFromBST(root->right ,val);
        return root;
    }

}

void takeInput(Node* &root){
    int data;
    cin>> data;

    while(data !=-1){
        root=insertToBst(root,data);
        cin>>data;
    }

}

int main(){
    Node* root=NULL;

    cout<<"Enter data for creating Bst :"<<endl;
    takeInput(root);

    cout<<"Printing the Bst :"<<endl;
    levelOrderTraversal(root);

    cout<<"Printing the preorder :"<<endl;
    preorder(root);

    cout<<endl<<"Printing the inorder :"<<endl;
    inorder(root);

    cout<<endl<<"Printing the postorder :"<<endl;
    postorder(root);

    cout<<endl;
    
    cout<<"Max value is :"<< maxVal(root)->data << endl;
    cout<<"Min value is :"<< minVal(root)->data << endl;

    // Deletion

    root=deleteFromBST(root ,30);

    cout<<"Printing the Bst :"<<endl;
    levelOrderTraversal(root);

    cout<<"Printing the preorder :"<<endl;
    preorder(root);

    cout<<endl<<"Printing the inorder :"<<endl;
    inorder(root);

    cout<<endl<<"Printing the postorder :"<<endl;
    postorder(root);

    cout<<endl;
    
    cout<<"Max value is :"<< maxVal(root)->data << endl;
    cout<<"Min value is :"<< minVal(root)->data << endl;


    return 0;
}