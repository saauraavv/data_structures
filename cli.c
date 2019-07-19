#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int i,num,j=0;
	int arr[argc-1];
	for(i=1;i<argc;i++)
	{
		num=atoi(argv[i]);
		arr[j]=num;
		j++;
	}
	int length=argc-1;
	int num1=length;
	for(i=0;i<length/2;i++)
	{
		int temp=arr[i];
		arr[i]=arr[num-1];
		arr[num-1]=temp;
		num--;
	}
	/*
	recrursive(arr,length);
	void recursive(int arr[],int length)
	{
		int num=length;
		num--;
		if(length<0)
		{
			return ;
			}
			else
			{
				printf("%d",arr[length];
				length--;
				recursive(arr,length);
			}
		}

*/
	for(i=0;i<length;i++)
	{
		printf("%d",arr[i]);
	}

	return 0;


}
