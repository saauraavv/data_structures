#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
	int size=argc-2;
	int arr[size];
	int i,j=0;
	for(i=1;i<argc-1;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	int find=atoi(argv[i]);
	int count=1;
	for(i=0;i<size-1;i++)
	{
		if(arr[i]<arr[i+1])
		{
			count++;
		}
		else
		{
		//	count++;
			break;
		}
	}
	if(count==size)
	{
		count=0;
	}
	int temp;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(i=0;i<count;i++)
	{	
		temp=arr[0];
		for(j=0;j<size-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[size-1]=temp;

	}
	int index;
	int low=0;
	int high=size-1;
	
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==find)
		{
			index=mid;
			break;
		}
		else if(arr[mid]<find)
		{
			low=mid+1;
		}
		else
			high=mid-1;
	}
	
	/*
	for(i=0;i<size;i++)
	{
		if(find==arr[i])
		{
			index=i;
			break;
		}
	}*/
//	printf("%d\n",index);
	int loop=index;
	index=index+count;
	if(index<size)
	{
		printf("%d\n",index);
	}
	else
	{		if(index==size-1)
		{
			index=count-1;
			printf("%d\n",index);
		}
			if(index>size-1)
		{
			index=-1;
			for(i=loop;i<=loop+count;i++)
			{	
				if(i>size-1)
				{
					index++;
				}
			}
			printf("%d\n",index);
		}
	}		



	
	return 0;
}
