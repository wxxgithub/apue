#include<stdio.h>
#include<string.h>

int main(void)
{
	int i;
	unsigned char A[16] = {1};
	char B[32]={};
	sprintf(B, "%x", A);
	for(i=0;i<16;i++)
	{
		printf("%c\n",B[i]);
	}
}

