//dvir yotvat 311212823
#include "Btree.h"
#include <string.h>
#include <iostream>
using namespace std;

int main(){

    //"whatToDo" is what function i need to to (insert,print...), "size" is the size of the array
    int index_tree=0, whatToDo=0, data=0, size=1;

    //dynamic array of trees
    Btree** tree_arr=(Btree**)malloc((size)*sizeof(Btree*));
    if(tree_arr==NULL){
    printf("Error: could not alocate memmory");
    exit(1);
    }

    while(index_tree!=-1){
        cin>>index_tree;
        if(index_tree==-1){
            for(int i=0; i<size; i++){
                delete tree_arr[i];
            }
            free(tree_arr);
            //exit(1);
        }
        //if "whatToDo" is "-1" i delet the tree in the arr[index]
        cin>>whatToDo;
        if(whatToDo==-1){
            delete tree_arr[index_tree];
        }
        //if "whatToDo" is 0 need to rest the tree in the index but before need to check if the array is smaller 
        //then  the index you get if he dose i make the array biger up to index and rest the tree in the place index in the array 
        else if(whatToDo==0){
                if(index_tree>size){
                size=index_tree+1;
                tree_arr=(Btree**)realloc(tree_arr, (size*sizeof(Btree)));
                }
            tree_arr[index_tree]=new Btree();
        }

        //if "whatToDo" is "1" need to insert data you get frome the user int the tree that locate in the 
        //array[index]  
        else if(whatToDo==1){
            cin>>data;
            tree_arr[index_tree]->insert(data);
        }

        //Ex5:
        // if "whatToDo" is "2" print the smallest data in the tree
        else if(whatToDo==2){
            //check if the tree is mirror three of search tree
            if(tree_arr[index_tree]->what_am_i(tree_arr[index_tree]->root)==1)
                //if the tree is search tree 
                tree_arr[index_tree]->print_min_value_bst();
            else
                //if the tree is mirror tree
                tree_arr[index_tree]->print_min_value_mirror();
        }

        //Ex5:
        // if "whatToDo" is "4" print "1" if the tree is search tree and "0" if not
        else if(whatToDo==4){
            cout<<">>"<<tree_arr[index_tree]->what_am_i(tree_arr[index_tree]->root);
        }

        //Ex5:
        //if "whatToDo" is "5" print the depth of the tree
        else if(whatToDo==5){
            cout<<">>"<<tree_arr[index_tree]->my_Depth(tree_arr[index_tree]->root);
        }

        //Ex5:
        //if "whatToDo" is "6" mirror the tree
        else if(whatToDo==6){
            tree_arr[index_tree]->mirror();
        }

        //Ex5:
        //if "whatToDo" is "7" check if my tree and the other tree arr the smae (print "1" if thay arr tnd "0" if not)
        else if(whatToDo==7){
            int other_tree;
            cin>>other_tree;
            cout<<">>"<<tree_arr[index_tree]->comper_trees(tree_arr[index_tree]->root, tree_arr[other_tree]->root);
        } 
        
        // if "whatToDo" is "9" print the tree in the array[index]
        else if(whatToDo==9){
            tree_arr[index_tree]->print();
        }

        //edge case if the use put a "whatToDo" that !=-1,0,1,9
        else{
            cout<<"not correct input";
            exit(1);
        }
    }
    return 0;
}

