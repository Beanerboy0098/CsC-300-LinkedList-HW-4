#include "LinkedList.hpp"
#include <iostream>

LinkedList::LinkedList()
{
    this->count = 0;
}

void LinkedList::addFront(int payload) 
{
    Node* n = new Node(payload); //Creates new memory

    if(!this->head) //Testing the point count of this->head (boils down to 0 if nothing points to their)
    {
        this->head = n;
    }

    else //list has at least something in it
    {
        n->setNextNode(this->head); //listen to explanation in lecture, picture slide 22, 2/11/2020
        
        this->head = n;

    }
    this->count++;
}

void LinkedList::display()
{
    Node* currNode = this->head;
    for(int i = 0; i < this->count; i++)
    {
        std::cout << currNode->getPayload() << "\n";
        currNode = currNode->getNextNode();
    }
}