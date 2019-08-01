#include<stdio.h>
#include<stdlib.h>
void contiguous_sum_array(int arr[],int size)
{
	int max=0,max_1=0;
	int i;
	for(i=0;i<size;i++)
	{
		max_1=max_1+arr[i];
		if(max_1<0)
		{
			max_1=0;
		}
		if(max<max_1)
		{
			max=max_1;
		}
	}
	printf("max sum is %d",max);
}
int main(int argc,const char* argv[])
{
	int arr[argc-1];
	int size=argc-1;
	int i,j=0;
	for(i=1;i<argc;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	contiguous_sum_array(arr,size);
	return 0;
}
