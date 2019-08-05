#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
	int i,k=0,j=argc-2;
	int arr[j];
	for(i=1;i<=j;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
		}
	printf("\n");
	int r;
	int l,m;
	r=atoi(argv[argc-1]);
	int temp[r];
	int o=0;
	
/*	
	for(i=0;i<r;i++)
	{
		m=arr[k-1];
		for(l=k-1;l>0;l--)
		{
			//m=arr[l];
			arr[l]=arr[l-1];
		}
		arr[o]=m;
	

//		arr[i]=m;
	}
*/		
	for(i=0;i<r;i++)
	{
		m=arr[0];
		for(l=0;l<k-1;l++)
		{
			//m=arr[l];
			arr[l]=arr[l+1];
		}
		arr[k-1]=m;
	

//		arr[i]=m;
	}
	
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
		}
		

	return 0;
}
