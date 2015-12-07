#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
float ini=atof(argv[1]);
float fin=atof(argv[2]);
float stepsize=atof(argv[3]);
float sum=0;
float x;
if(ini>fin)
{
 for(x=ini;x>=fin;x-=stepsize)
 { 
  sum+=x;
 } 
}    
else
{
 for(x=ini;x<=fin;x+=stepsize)
 {
  sum+=x;
 }
}      
printf("%f\n",sum);
}
