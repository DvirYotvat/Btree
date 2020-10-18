//dvir yotvat 
#include "Btree.h"
#include <string>
#include <iostream>
using namespace std;

//empty constractor 
Btree::Btree(){
    node* root = NULL;
}

//private insert (in order)
void Btree::insert(int key, node *leaf){
    if(key < leaf->data){
        if(leaf->left != NULL)
            insert(key, leaf->left);
        else {
            leaf->left = new node;
            leaf->left->data = key;
        }  
    }
    else if(key >= leaf->data){
        if(leaf->right != NULL)
            insert(key, leaf->right);
        else {
            leaf->right = new node;
            leaf->right->data = key;
        }
    }
}

//public insert (send to private function print)
void Btree :: insert(int key){
    if(root != NULL){
        insert(key, root);
    }
    else {
        root = new node;
        root->data = key;
    }
}

//privte print. 
//print the tree in order
void Btree :: print(node* node){
    if (node == NULL) 
        return;  
    print(node->left); 
    cout << node->data << " "; 
    print(node->right); 
}

//public print function that send to the private function of print
void Btree::print(){
    cout<<">>";
    print(this->root);
}

//2
// Ex5: private function that print the min value on binary serch tree
//case the tree is *binary search tree* (bst=binary search tree)
void Btree :: print_min_value_bst(node* node){

    //save the min value of the tree
    struct node* min_value = node; 
    //go the all the way down the left of the tree 
    while (min_value->left != NULL)
        min_value = min_value->left;  
    cout<<min_value->data;  
    }  

//2
// Ex5: public function print the min value of binary serch tree
void Btree::print_min_value_bst(){
    cout<<">>";
    print_min_value_bst(this->root);
}

//2
// Ex5: private function that print the min value on mirror tree
//case the tree is *mirror tree* 
void Btree::print_min_value_mirror(node* node){

    //save the min value of the tree
    struct node* min_value = node; 
    //go the all the way down the right of the tree 
    while (min_value->right != NULL)
        min_value = min_value->right;  
    cout<<min_value->data;  
}  

//2
// Ex5: public function print the min value of *mirror tree*
void Btree::print_min_value_mirror(){
    cout<<">>";
    print_min_value_mirror(this->root);
}

//6
// Ex5: private function that mirror the tree
void Btree::mirror(node* node){
    //make a new temp node for the swap
    struct node* temp;
    
    if(node==NULL)
        return;
    else{
        //going left and right
        mirror(node->left);
        mirror(node->right);
    }
    
    //do the swap
    temp=node->left;
    node->left=node->right;
    node->right=temp;
}

//6
// Ex5: public function that mirror the tree
void Btree::mirror(){
    mirror(this->root);
}

//4
//Ex5: public punction that cheack if the tree is search tree or not and prit 1 if the tree is search tree and 0 if not
int Btree::what_am_i(node* root){

    int res=0;

    if(root->left < root->right || root==NULL){
        res=1;
        return res;
    }
    /*else if(root->left==NULL && root->right!=NULL){
        res=0;
        return res;
    }*/
    else
        return res;
}

//5
// Ex5: public function that print the deep of the tree
int Btree::my_Depth(node* root){

    if(this->root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
        return 1;
    else if(root->left==NULL) 
        return my_Depth(root->right)+1; 
    else if(root->right==NULL) 
        return my_Depth(root->left)+1; 
  
    return(my_Depth(root->left), my_Depth(root->right))+1; 
}

//5
// Ex5: public function that do comparison between to trees and see if thay are Identical
int Btree::comper_trees(node* my_root, node* other_root){
    
    if(my_root ==NULL && other_root==NULL)
        return 1;
    else if(my_root ==NULL && other_root!=NULL)
        return 0;
    else if(my_root !=NULL && other_root==NULL)
        return 0;
    else{
        if(my_root->data==other_root->data && comper_trees(my_root->left, other_root->left) == 1 && comper_trees(my_root->right, other_root->right) == 1)
            return 1;
        else
            return 0;
    }
}

//private destroyer 
void Btree:: tree_killer(node *root){
    if(root==NULL)
        return;
    else{
        tree_killer(root->left);
        cout <<root->data<<" ";
        tree_killer(root->right);
        delete root;
    }
}

//distractur
Btree::~Btree(){
tree_killer(root);
root = NULL;
}


