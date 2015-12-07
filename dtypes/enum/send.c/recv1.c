#include<stdio.h>
void packetIdentify(int data)
{
enum petrolpumps {ZLINE=0, MPD, QPD};
enum parityTypes {noparity = 0, odd, even};
int pumps=0, par=0;
par = data & 0x3;
pumps = data >>2;
if(pumps == ZLINE)
fprintf(stderr,"ZLINE pumps \n");
else if(pumps == MPD)
fprintf(stderr,"MPD pumps \n");
else if(pumps == QPD)
fprintf(stderr,"QPD pumps \n");
else
fprintf(stderr,"Not specified\n");
if(par == noparity)
fprintf(stderr,"No parity was used\n");
else if(par == odd)
fprintf(stderr,"Odd parity was used\n");
else if(par == even)
fprintf(stderr,"Even parity was used\n");
else
fprintf(stderr,"None parity specified\n");
}
int main()
{
int packetrecv;
int packet;
fscanf(stdin,"%d",&packet);
int m=0;
for(m=0;m<8;x++)
{
packetrecv=packet & 0xf;
packetIdentify(packetrecv);
packet=packet>>4;
}}
