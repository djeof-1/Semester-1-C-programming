#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
 int data; 
 data = atoi(argv[1]);
 if(data==0)
 {
  printf("Select menu\n 0x01: multiplexer\n 0x02: demultiplexer\n 0x04: encoding\n 0x08: decoding\n 0x10: dma\n 0x20: rma\n 0x40: updating-cache\n 0x80: recent-memory-search\n");
 }         
 if(data & 0x01)
 {
  printf("multiplexer selected\n");
 }
 if(data & 0x02)
 {
  printf("demultiplexer selected\n");
 }
 if(data & 0x04)
 {
  printf("encoding selected\n");
 }
 if(data & 0x08)
 {
  printf("decoding selected\n");
 }
 if(data & 0x10)
 {
  printf("dma selected\n");
 }
 if(data & 0x20)
 {
  printf("rma selected\n");
 }
 if(data & 0x40)
 {
  printf("updating-cache selected\n");
 }
 if(data & 0x80)
 {
  printf("recent-memory-search selected\n");
 } 
}
