/*
File: LinkedList.hpp
Description:  Definition for LinkedList Class.
Date: 2/12/2018
Author: Michael Ennis
*/

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

struct Node
{
    int number;             // Data element
    Node *next;             // Next node in LinkedList
};

class LinkedList
{
private:
    Node *head;
    int nodeCount = 0;

public:
    LinkedList(){};
    void addNode(int x);
    void removeNode(int x);
    void printList();
};
#endif // LINKEDLIST_HPP
