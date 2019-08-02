#include<stdio.h>
#include<stdlib.h>
void contiguous_sum_array(int arr[],int size)
{
	int max=0,max_1=0;
	int i;
	int start,end;
	for(i=0;i<size;i++)
	{
		max_1=max_1+arr[i];
		if(max_1<0)
		{
			start=i+1;
			max_1=0;
		}
		if(max<max_1)
		{
			end=i;
			max=max_1;
		}
	}
	printf("max sum is %d\nMax Sub array is\n",max);
	for(i=start;i<=end;i++)
	{
		printf("%d ",arr[i]);
	}

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
