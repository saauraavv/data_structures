#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char *str,char *str1)
{
	char temp[10];
	strcpy(temp,str);
	strcpy(str,str1);
	strcpy(str1,temp);
	printf("%s %s",str,str1);
}

int main(int argc,const char * argv[])
{
	char str[10],str1[10];
	strcpy(str,argv[1]);
	strcpy(str1,argv[2]);
	swap(str,str1);
	return 0;
}
