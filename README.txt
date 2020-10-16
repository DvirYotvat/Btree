Username: dviryo
Name and id: Dvir yotvat 311212823

Explaintion:
The program build array of binary trees, and each tree you can insert data , rest what a tree you want in the array of the trees, check if the tree is a search tree, print the depth of the tree, mirror the tree (no longer search tree), compere between tow trees and print the tree you want.
(to know how to make an array of trees go to "input").

To build (compile):
press ctrl +shift+b

To run the program: 
press ctrl+f5

Files in program: 
Btree.h, Btree.cpp, Ex4.cpp,ex4(the compiled program), makefile, file with: launch.json and tasks.json

The input:
The program receives numbers following numbers are:

"-1" to exit the program
"0" to Boot tree
"1" to add a new vertex in the tree (then you need to add what number you want to enter the number to the vertex).
"2" print the smallest value in the tree.
"4" print "1" if the tree is search tree and "0" if not.
"5" print the depth of the tree.
"6" mirror the tree.
"7" compere between tow trees.
"9" to print the tree.

for example:
"0 0" will boot the tree "0" in the arry of the trees.
"0 1 1" insert node with data "1" to tree "0"
"1 1 56" insert node with data "56" to tree "1"
"1 9" will print the tree "1" in the array.
"0 2" will print the smallest value in tree "0" in the array.
"0 6" will mirror tree "0" in the array.
"0 5" will print the depth of tree "0".
"0 7 1" compere between tree "0" and tree "1".
"1 4" print 1 if the tree "1" is search tree or "0" if not (in this case print "1").
"0 4" print "0"...


output:
when you press 2 (after you press the number of the tree in the array) the program will print the smallest number in the tree.
when you press 4 (after you press the number of the tree in the array) the program will print "1" if the tree is search tree and "0" if not.
when you press 5 (after you press the number of the tree in the array) the program will print the depth of the tree (root is 1 depth in the program).
when you press 7 the program compere between 2 trees ant print "1" if the trees are the same and "0" if not.
when you press 9 (after you press the number of the tree in the array) the program will print the tree data inorder.


