#include <iostream>
using namespace std;
#include "Node.h"
#include "BSTree.h"

void main()
{
	Node n1(88);
	Node n2(91);
	Node n3(76);
	Node n4(65);
	Node n5(100);
	Node n6(35);
	Node n7(22);
	Node n8(54);
	BSTree mytree(&n1);
	//mytree.remove(&n1);testing the case of removing the root and root is the only node
	mytree.insert(&n1, &n2);
	cout << "\n inorder traversal: ";
	mytree.inorder(&n1);
	/*mytree.remove(&n1);//testing the case 1 of removing the root and the root has one left child
	cout << "\n inorder traversal after remove n1: ";
	mytree.inorder(&n2);*/
	//after n1 is removed, n2 becomes the root.
	mytree.insert(&n1, &n3);
	mytree.insert(&n1, &n4);
	mytree.insert(&n1, &n5);
	mytree.insert(&n1, &n6);
	mytree.insert(&n1, &n7);
	mytree.insert(&n1, &n8);
	cout << "\n inorder traversal: ";
	mytree.inorder(&n1);
	cout << "\n preorder traversal: ";
	mytree.preorder(&n1);
	cout << "\n postorder traversal: ";
	mytree.postorder(&n1);
	/*
	mytree.remove(&n8);
	//testing case 1, e.g., removing a leaf which is a right child
	cout << "\n inorder traversal after removing n8 (70): ";
	mytree.inorder(&n1);
	//testing case 1, e.g., removing a leaf which is a left child
	mytree.remove(&n7);
	cout << "\n inorder traversal after removing n7 (83): ";
	mytree.inorder(&n1);
	*/
	/*testing case 2a, e.g., removing a node with only one right child
	mytree.remove(&n6);
	cout << "\n inorder traversal after removing n6 (67): ";
	mytree.inorder(&n1);
	*/
	/*testing case 2b, e.g., removing a node with only one left child
	mytree.remove(&n5);
	cout << "\n inorder traversal after removing n5 (99): ";
	mytree.inorder(&n1);
	*/
	/*testing case 3, e.g., removing a node with two children, where n is not the root
	mytree.remove(&n4);
	cout << "\n inorder traversal after removing n4 (78): ";
	mytree.inorder(&n1);*/
	/*testing case 3 removing the root with two children
	//Note that after the removal, n1 is still the root node.
	//It is the data that are exchanged between the root and the xsucc
	mytree.remove(&n1);
	cout << "\n inorder traversal after removing the root: ";
	mytree.inorder(&n1);*/
}