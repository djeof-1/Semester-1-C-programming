#include <stdio.h>
#include <stdlib.h>
typedef struct nodeobject
{
char *type;
int ival;
double rval;
char *sval;
struct nodeobject *child;
struct nodeobject *next;
} node;
/* the value part of the node */
extern char *INTEGER;
extern char *REAL;
extern char *STRING;
extern node *newIntegerNode(int value);
extern node *newRealNode(double value);
extern node *newStringNode(char *value);
extern void (*display)(node *);
extern void (*destructor)(node *);

