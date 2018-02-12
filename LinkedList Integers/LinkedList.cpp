/*
File: LinkedList.cpp
Description:  Implementation for LinkedList Class.
Date: 2/12/2018
Author: Michael Ennis
*/

#include "LinkedList.hpp"
#include <iostream>

/******************************************************
LinkedList::addNode(int x)
Description: Checks to see if there are any nodes in
    list. If not it adds the first node after head.
    Otherwise, it will add a node between the head and
    the first node in the list. Increments the count
    of nodes contained in the list.
******************************************************/
void LinkedList::addNode(int x)
{
    if(nodeCount == 0)
    {
        Node *newNode = new Node();     // Allocate new node.
        newNode->number = x;            // Set data value.
        head->next = newNode;           // Direct head pointer to new node.
        nodeCount++;                    // Increment count.
    }
    else
    {
        Node *currentNode = head->next; // Save node after head.
        Node *newNode = new Node();     // Allocate new node.
        newNode->number = x;            // Set data value.
        head->next = newNode;           // Direct head pointer to new node.
        newNode->next = currentNode;    // Direct new node pointer to saved node.
        nodeCount++;                    // Increment count.
    }
}

/******************************************************
LinkedList::removeNode(int x)
Description: Iterates through the linked list looking
    for element x pass through. If the element is in
    the list, it will be removed.
******************************************************/
void LinkedList::removeNode(int x)
{
    Node *currentNode = head->next;     // Get the first node
    Node *previousNode = head;          // Save the previous node
    while(currentNode != 0)             // While not at the end of the list
    {
        if(currentNode->number == x)    // If the current node contains the data element x
        {
            previousNode->next = currentNode->next; // Direct the previous node pointer to skip the current
            delete currentNode;         // Delete the current node with value x.
            nodeCount--;                // Decrement the node count.
            return;
        }
        currentNode = currentNode->next;    // Increment current node if not found.
        previousNode = previousNode->next;  // Increment previous node if not found.
    }
}

/******************************************************
LinkedList::printList()
Description: Helper function to print the contents of
    the linked list from the head node to end of list.
******************************************************/
void LinkedList::printList()
{
    if(nodeCount != 0)
    {
        Node *currentNode = head->next;
        while(currentNode != 0)
        {
            std::cout << currentNode->number << " ";
            currentNode = currentNode->next;
        }
        std::cout << std::endl;
    }
}
