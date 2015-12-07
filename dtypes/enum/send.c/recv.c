#include<stdio.h>
void packetIdentify(int data)
{
enum petrolpumps {ZLINE=0, MPD, QPD};
enum parityTypes {noparity = 0, odd, even};
int pumps=0, par=0;
par = data & 0xff;
pumps = data >> 8;
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
fscanf(stdin,"%d",&packetrecv);
fprintf(stderr,"In recv program, Receiving the packet\n");
packetIdentify(packetrecv);

int packet1recv;
fscanf(stdin,"%d",&packet1recv);
fprintf(stderr,"In recv program, Receiving the packet1\n");
packetIdentify(packet1recv);

int packet2recv;
fscanf(stdin,"%d",&packet2recv);
fprintf(stderr,"In recv program, Receiving the packet2\n");
packetIdentify(packet2recv);

int packet3recv;
fscanf(stdin,"%d",&packet3recv);
fprintf(stderr,"In recv program, Receiving the packet3\n");
packetIdentify(packet3recv);

int packet4recv;
fscanf(stdin,"%d",&packet4recv);
fprintf(stderr,"In recv program, Receiving the packet4\n");
packetIdentify(packet4recv);

int packet5recv;
fscanf(stdin,"%d",&packet5recv);
fprintf(stderr,"In recv program, Receiving the packet5\n");
packetIdentify(packet5recv);

int packet6recv;
fscanf(stdin,"%d",&packet6recv);
fprintf(stderr,"In recv program, Receiving the packet6\n");
packetIdentify(packet6recv);

int packet7recv;
fscanf(stdin,"%d",&packet7recv);
fprintf(stderr,"In recv program, Receiving the packet7\n");
packetIdentify(packet7recv);

int packet8recv;
fscanf(stdin,"%d",&packet8recv);
fprintf(stderr,"In recv program, Receiving the packet8\n");
packetIdentify(packet8recv);
return 1;
}
