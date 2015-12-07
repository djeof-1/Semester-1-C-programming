//preparedBy: Mr
// Time: 9 minutes

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[])
    {
    int n;
    scanf("%d",&n);
    if (n>>7 & 0b0)
        printf("SonyTV\n");
    if (n>>7 & 0b1)
        printf("SonyPix\n");
    if (n>>7 & 0b10)
        printf("SetMax\n");
    if (n>>7 & 0b11)
        printf("SonyMix\n");
    return 0;
    }
