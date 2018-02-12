/*
File: main.cpp
Description:  Driver Program to test out LinkedList Class with integers.
Date: 2/12/2018
Author: Michael Ennis
*/

#include "LinkedList.cpp"
#include <iostream>

int main(){
    LinkedList myList;      // Instantiate Linked List
    myList.printList();     // Attempt to Print out empty list

    myList.addNode(1);      // Add a set of nodes
    myList.addNode(2);
    myList.addNode(3);
    myList.addNode(4);
    myList.printList();     // Print the nodes

    myList.removeNode(3);   // Remove a node
    myList.printList();     // Print the nodes

    myList.removeNode(4);   // Remove the rest of the nodes.
    myList.removeNode(2);
    myList.removeNode(1);
    myList.printList();     // Attempt to Print out empty list

    myList.addNode(13);     // Re-Add from emptied list
    myList.printList();     // Print the nodes

    myList.removeNode(13);  // Remove last node.
    return 0;
}
