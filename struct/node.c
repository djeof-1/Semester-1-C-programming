
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

static node *newNode(void);
static void deleteNode(node *);
static void print(node *);
/*************** public interface *************/
char *INTEGER = "integer";
char *REAL = "real";
char *STRING = "string";
node *
newIntegerNode(int v)
{
node *p = newNode();
p->type = INTEGER;
p->ival = v;

if (v>0)
    p -> next  = newIntegerNode(v-1);
return p;
}
node *
newRealNode(double v)
{
node *p = newNode();
p->type = REAL;
p->rval = v;
if (v>0)
    p -> next  = newRealNode(v-1);
return p;
}
node *
newStringNode(char *v)
{
node *p = newNode();
p->type = STRING;
p->sval = v;
if (strlen(v)>1)
    p -> next  = newStringNode(v+1);
return p;
}


/*************** private methods *************/
static node *
newNode()
{
node *n = (node *) malloc(sizeof(node));
if (n == 0) { fprintf(stderr,"out of memory"); exit(-1); }
return n;
}
static void deleteNode(node *p) {
    free(p);
}

static void print(node *p) {
    printf("The type of node is: %s\n", p->type);
    if (p-> type == INTEGER) {
        printf("The value of the node is: %d.\n",p->ival);
    }
    else if (p-> type == REAL) {
        printf("The value of the node is: %g.\n",p->rval);
    }
    else if (p-> type == STRING) {
        printf("The value of the node is: %s.\n",p->sval);
    }
    
    if (p -> child) {
        printf("Child: ");
        print(p->child);
        
    }
    if (p->next) {
        printf("Next Node: ");
        print(p->next);
    }
}


void (*destructor)(node *p) = &deleteNode;
void (*display)(node *p) = &print;

