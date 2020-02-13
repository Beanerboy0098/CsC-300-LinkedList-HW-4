#include "Node.hpp"

Node::Node(int payload)
{
    //this is a Node*
    //(*this).payload
    //this->payload
    
    this->payload = payload;
}

int Node::getPayload()
{
    return this->payload;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}

void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}