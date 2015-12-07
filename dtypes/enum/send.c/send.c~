#include<stdio.h>
int main()
{
enum petrolpumps{ZLINE=0,MPD,QPD};
enum parityTypes{noparity = 0, odd, even};
enum petrolpumps using= ZLINE;
enum parityTypes parity = noparity;
int packet = 0, packet1=0, packet2 =0, packet3 =0, packet4 =0, packet5 =0, packet6 =0, packet7 =0;
using = ZLINE;
parity = noparity;
/* Forming data packets */
packet = using << 8;
packet = packet | parity;

/* Sending the data packet */
fprintf(stderr,"In send program- Sending the packet\n");
fprintf(stdout,"%d\n",packet);

int packet1 = 0;
using = ZLINE;
parity = odd;
/* Forming data packets */
packet1 = using << 8;
packet1 = packet1 | parity;

/* Sending the data packet */
fprintf(stdout,"%d\n",packet1);

int packet2 = 0;
using = ZLINE;
parity = even;
/* Forming data packets */
packet2 = using << 8;
packet2 = packet2 | parity;

/* Sending the data packet */
fprintf(stdout,"%d\n",packet2);

int packet3 = 0;
using = MPD;
parity = noparity;
/* Forming data packets */
packet3 = using << 8;
packet3 = packet3 | parity;

/* Sending the data packet */
fprintf(stdout,"%d\n",packet3);

int packet4 = 0;
using = MPD;
parity = odd;
/* Forming data packets */
packet4 = using << 8;
packet4 = packet4 | parity;

/* Sending the data packet */
fprintf(stdout,"%d\n",packet4);

int packet5 = 0;
using = MPD;
parity = even;
/* Forming data packets */
packet5 = using << 8;
packet5 = packet5 | parity;

/* Sending the data packet */
fprintf(stdout,"%d\n",packet5);

int packet6 = 0;
using = QPD;
parity = noparity;
/* Forming data packets */
packet6 = using << 8;
packet6 = packet6 | parity;

/* Sending the data packet */
fprintf(stdout,"%d\n",packet6);

int packet7 = 0;
using = QPD;
parity = odd;
/* Forming data packets */
packet7 = using << 8;
packet7 = packet7 | parity;

/* Sending the data packet */
fprintf(stdout,"%d\n",packet7);

int packet8 = 0;
using = QPD;
parity = even;
/* Forming data packets */
packet8 = using << 8;
packet8 = packet8 | parity;

/* Sending the data packet */
fprintf(stdout,"%d\n",packet8);
return 1;
}
