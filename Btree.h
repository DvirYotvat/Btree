//dvir yotvat 311212823
#ifndef BTREE
#define BTREE

struct node
{
//Characteristics of the node
  int data;
  node *left;
  node *right;
};

//short cut for the name of the node (struct node will call just node)
typedef struct node node;

//class of binary tree
class Btree
{   
    //public methods of the tree
    public:
        node *root;
        //empty constractor
        Btree();
        //distractor 
        ~Btree();
        //insert data to the tree
        void insert(int key);
        //print the tree
        void print();
        //print min value on binary search tree (bst=binary search tree)
        void print_min_value_bst();
        //print min value on mirror tree
        void print_min_value_mirror();
        //mirror the tree
        void mirror();
        //check if the tree is search tree or not and prit 1 if the tree is search tree and 0 if not
        int what_am_i(node* root);
        //check the deep of the tree
        int my_Depth(node* root);
        //comper between 2 trees and print 1 if thay are tha same and print 0 if not
        int comper_trees(node* my_root, node* other_root);
        
    //private methods of the tree
    private:
        //insert data to the tree
        void insert(int key, node *leaf);
        //print the tree
        void print(node* root);
        //print the min value on binary search tree (bst=binary search tree)
        void print_min_value_bst(node* root);
        //print min value on mirror tree
        void print_min_value_mirror(node* root);
        //mirror the tree
        void mirror(node* node);
        //delet a tree
        void tree_killer(node *root);
        
};
#endif

