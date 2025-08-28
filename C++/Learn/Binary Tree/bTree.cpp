#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;

public:
    TreeNode(int data1, TreeNode*left1, TreeNode*right1){
        data = data1;
        left = left1;
        right =  right1;
    }

public:
    TreeNode(int data1){
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};

void printBT(TreeNode* root){
    
}

void pre_order_traversal_recursive(TreeNode* root){
    // root left right
    if(root == nullptr) return;
    cout<<root->data<<" ";
    pre_order_traversal_recursive(root->left);
    pre_order_traversal_recursive(root->right);
}

void post_order_traversal_recursive(TreeNode* root){
    // left right root
    if(root == nullptr) return;
    post_order_traversal_recursive(root->left);
    post_order_traversal_recursive(root->right);
    cout<<root->data<<" ";
}

void in_order_traversal_recursive(TreeNode* root){
    // left root right
    if(root == nullptr) return;
    in_order_traversal_recursive(root->left);
    cout<<root->data<<" ";
    in_order_traversal_recursive(root->right);
}

void pre_order_traversal_iterative(TreeNode* root){

    stack<TreeNode*> st;
    st.push(root);

    while(!st.empty()){
        root = st.top();
        st.pop();
        cout<<root->data<<" ";

        if(root->right != nullptr) st.push(root->right);
        if(root->left != nullptr) st.push(root->left);                
    }

}

void levelOrder(TreeNode* root) {

    queue<TreeNode*>q;
    q.push(root);

    while(!q.empty()){

        int size = q.size();

        for(int i = 0; i<size; i++){
            TreeNode* node = q.front();
            q.pop();

            if(node->left != nullptr) q.push(node->left);
            if(node->right != nullptr) q.push(node->right);
            cout<<node->data<<" ";
        }
    }
}

int main(){
    TreeNode * root = new TreeNode(5);
    root->left = new TreeNode(1);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(12);
    root->right->left = new TreeNode(7);

    // printBT(root);

    // cout<<"Pre-order Traversal: ";
    // pre_order_traversal_recursive(root);

    // cout<<"\nPost-order Traversal: ";
    // post_order_traversal_recursive(root);
    
    // cout<<"\nIn-order Traversal: ";
    // in_order_traversal_recursive(root);

    // cout<<"\nPre-Order Trabersal (iterative): ";
    // pre_order_traversal_iterative(root);

    // cout<<"Level-Order Traversal (BFS): ";
    // levelOrder(root);
}