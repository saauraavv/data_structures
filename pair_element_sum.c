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
	int sum=atoi(argv[i]);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(i!=j)
			{
				if(arr[i]+arr[j]==sum)
				{
					printf("%d and %d\n",arr[i],arr[j]);
				}
			}
		}
	}
	return 0;
}
