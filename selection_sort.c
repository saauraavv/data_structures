#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char * argv[])
{
	int i;
	int j=0;
	int size=argc-1;
	int arr[size];
	for(i=1;i<argc;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	int small=arr[0];
	int index;
	int flag;
	for(j=0;j<size-1;j++)
	{
		for(i=j+1;i<size;i++)
		{
			if(small>arr[i])
			{
				small=arr[i];
				flag=1;
				index=i;
			}
		}
		if(flag==1)
		{
		int temp=arr[j];
		arr[j]=small;
		arr[index]=temp;
		small=arr[j+1];
		}
		flag=0;
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
