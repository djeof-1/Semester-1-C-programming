#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int *parity, *slave_id;

int decode(int num1) {
    
    int data;
    int par,slave;
    par = num1 & 3;
    num1 = num1 >> 2;
    data = num1 & 0xfffffff;
    num1 = num1 >> 28;
    slave = num1 & 3;
    parity = &par;
    slave_id = &slave;
    return data;
    
}

int encode(int data1, int data2, float (*fptr)(float,float)) {

    int res=0;
    res = res | (*slave_id);
    res = res << 28;
    res = res | (int)(fptr(data1, data2));
    res = res << 2;
    res = res | (*parity);
    return res;
    
}

int process(int num1, int num2, float (*fptr)(float,float)) {

    int d1 = decode(num1);
    int d2 = decode(num2);
    int result = encode(d1,d2, fptr);
    return result;
    
}
