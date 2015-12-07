#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int ini=atof(argv[1]);
int fin=atof(argv[2]);
int step=atof(argv[3]);
int x;
int numbers;
if(ini>fin)
{
x = ini;
while(x>=fin)
{
printf("%d\n",x);
x-=step;
}
}
else
{
x = ini;
while(x<=fin)
{
printf("%d\n",x);
x+=step;
}
}
}
