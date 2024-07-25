// implementation 
/*#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//preOrder -> root,left,right
void preOrder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    
    preOrder(root->left);
    preOrder(root->right);
}

//InOrder -> left , root, right
void inOrder(Node* root){
    
    if(root==NULL)
    return;
    
    inOrder(root->left); 
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    
    if(root==NULL) return ;
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


Node* insertNode(Node* root,int val){
    if(root==NULL){
        root = new Node(val);
        return root;
    }
    
    else if(root->data > val){
        root->left = insertNode(root->left, val);
    }
    else{
        root->right = insertNode(root->right, val);
    }
    return root;
}

bool searchNode(Node* root, int val){
    
    if(root==nullptr) return false;
    
    if(root->data == val) return true;
    else if(root->data > val){
        return searchNode(root->left, val);
    }
    else{
        return searchNode(root->right, val);
    }
}

int height(Node* root){
    
    if(root==NULL) return -1;
    
    int lh=height(root->left);
    int rh=height(root->right);
    
    return max(lh,rh)+1;
    
}


int diameter(Node* root){
    if(root==NULL) return 0;
   
    int lh=height(root->left);
    int rh=height(root->right);
    
    int ld=diameter(root->left);
    int rd=diameter(root->right);
    
    
    return max(lh+rh+1, max(ld,rd));
   
}


int main() {
    // Write C++ code here
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right=new Node(3);
    
    root->left->left = new Node(4);
    root->left->right=new Node(5);
    
    cout<<"PreOrder Traversal is "<<endl;
    preOrder(root);
    
    insertNode(root, 78);
    cout<<searchNode(root, 78)<<endl;
    cout<<"InOrder Traversal is "<<endl;
    inOrder(root);

    cout<<endl;
    cout<<height(root);

    cout<<endl;
    cout<<diameter(root);

    cout<<"PostOrder Traversal is "<<endl;
    postOrder(root);
    return 0;
}*/



// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//preOrder -> root,left,right
void preOrder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    
    preOrder(root->left);
    preOrder(root->right);
}

//InOrder -> left , root, right
void inOrder(Node* root){
    
    if(root==NULL)
    return;
    
    inOrder(root->left); 
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    
    if(root==NULL) return ;
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main() {
    // Write C++ code here
    Node* root = new Node(25);
    root->left = new Node(15);
    root->right=new Node(50);
    
    root->left->left = new Node(10);
    root->left->right=new Node(22);
    
    root->left->left->right=new Node(12);
    root->left->left->right->left=new Node(11);
    root->left->right->left=new Node(18);
    
    
    root->right->left=new Node(35);
    root->right->left->right=new Node(44);
    
    root->right->right=new Node(70);
    root->right->right->left=new Node(66);
    
    root->right->right->left->left=new Node(64);
    
    root->right->right->right=new Node(90);
    
    cout<<"PreOrder Traversal is "<<endl;
    preOrder(root);
    
    cout<<"InOrder Traversal is "<<endl;
    inOrder(root);

    cout<<"PostOrder Traversal is "<<endl;
    postOrder(root);
    return 0;
}


// insert the value in binary search tree;