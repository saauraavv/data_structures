#include<string.h>
#include<stdlib.h>
#include<stdio.h>
void move_uppercase_At_end(char *str)
{
	char str1[10]={};
	char str2[10]={};
	int j=0,k=0;
	int i;
	int l=strlen(str);
	for(i=0;i<l;i++)
	{
		if((str[i]>='A')&&(str[i]<='Z'))
		{
			str1[j]=str[i];
			j++;
		}
		if((str[i]>='a')&&(str[i]<='z'))
		{
			str2[k]=str[i];
			k++;
		}
	}
	strcat(str2,str1);
	printf("%s",str2);	
}
int main(int argc,const char * argv[])
{
	char str1[10];
	scanf("%s",str1);
	move_uppercase_At_end(str1);
	return 0;
}
