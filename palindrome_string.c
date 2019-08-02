#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void palindrome(char *str1)
{
	char str[10];
	char str2[10];
	strcpy(str2,str1);
	int i,j=0;
	int l=strlen(str1);
	for(i=l-1;i>=0;i--)
	{
		str[j]=str1[i];
		j++;
	}
	if(strcmp(str,str2)==0)
	{
		printf("string is palindrome");
	}	
	else
	{
		printf("no palindrome");
	}

}
int main(int argc,const char * argv[])
{
	char str1[10];
	strcpy(str1,argv[1]);
	palindrome(str1);	
	return 0;
}
