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
 for(x=ini;x>=fin;x-=step)
 { 
  printf("%d",x);
 } 
}    
else
{
 for(x=ini;x<=fin;x+=step)
 {
  printf("%d",x);
 }
}      
}
