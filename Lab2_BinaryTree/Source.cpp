//include statements
#include "BST.h"
#include "BSTNode.h"
#include "dictionary.h"
#include <iostream>
#include <string>

//setting namespace
using namespace std;

int main() {

	cout << "Trenton Hoisington - Lab 2 - Threading Binary Search Tree" << endl << endl;

	//size of array
	const int size = 13;

	//create the tree
	BST<int, string> myBST;

	//create nodes
	BSTNode<int, string>* sevSev = new BSTNode<int, string>(77, "seventy-seven");
	BSTNode<int, string>* sev = new BSTNode<int, string>(70, "seventy");
	BSTNode<int, string>* sevFiv = new BSTNode<int, string>(75, "seventy-five");
	BSTNode<int, string>* sixSix = new BSTNode<int, string>(66, "sixty-six");
	BSTNode<int, string>* sevNin = new BSTNode<int, string>(79, "seventy-nine");
	BSTNode<int, string>* sixEig = new BSTNode<int, string>(68, "sixty-eight");
	BSTNode<int, string>* sixSev = new BSTNode<int, string>(67, "sixty-seven");
	BSTNode<int, string>* sixNin = new BSTNode<int, string>(69, "sixty-nine");
	BSTNode<int, string>* nin = new BSTNode<int, string>(90, "ninty");
	BSTNode<int, string>* eigFiv = new BSTNode<int, string>(85, "eighty-five");
	BSTNode<int, string>* eigThr = new BSTNode<int, string>(83, "eighty-three");
	BSTNode<int, string>* eigSev = new BSTNode<int, string>(87, "eighty-seven");
	BSTNode<int, string>* sixFiv = new BSTNode<int, string>(65, "sixty-five");
	BSTNode<int, string>* nodeArray[size] = { sevSev, sev, sevFiv, sixSix, sevNin, sixEig, sixSev, sixNin, nin, eigFiv, eigThr, eigSev, sixFiv };

	cout << "Testing the insert function to build my tree." << endl;

	//insert nodes
	for (int i = 0; i < size; i++) {
		myBST.insert(nodeArray[i]->key(), nodeArray[i]->element());
	}

	//prints size of tree
	cout << "My BST tree is of size " << myBST.size() << endl;

	//tests print & printhelpfunctions
	cout << "My tree's structure is: " << endl;

	myBST.print();

	cout << endl;

	//tests print in order traversal from lowest to highest
	cout << "My tree's printInOrder() function: " << endl << endl;

	myBST.printInOrder();

	cout << endl;

	//tests print reverse order from highest to lowest
	cout << "My tree's printReverseOrder() function: " << endl << endl;

	myBST.printReverseOrder();

	cout << endl;

	system("pause");
	return 0;
}