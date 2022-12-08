// Method 2
// we constract the proper tree using not recursion
   // Node ko constract karke buildFromLevelOrder & levelOrderTraversal ko call karna
    
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

void buildFromLevelOrder(node* &root){
    queue<node*> q;

    cout<< "Enter the data from root" << endl;
    int data;
    cin>> data;
    root = new node(data);

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<< "Enter the left node for : " << temp->data << endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
           temp->left =new node(leftData);
           q.push(temp->left);
        }

        cout<< "Enter the right node for : " << temp->data << endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
           temp->right =new node(rightData);
           q.push(temp->right);
        }
    } 
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

int main(){
    node* root= NULL;
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    buildFromLevelOrder(root);
    levelOrderTraversal(root);

    return 0;
}