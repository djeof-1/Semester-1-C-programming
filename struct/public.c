#include <stdio.h>
#include "node.h"
int main() {
    node *Node = newIntegerNode(3);
    Node->child = newStringNode("Shreyas");
    display(Node);
    destructor(Node);
    return 0;
}