#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[] )
{
	//inputs
	// size of array =5
	// left rotate =3 
	// /*right rotate by =3
	// */ 
	int size_Arr=argc-1;
	int arr[size_Arr];
	int i,j=0;
	for(i=1;i<=5;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	int size=j;
	int ist_half=size/2;
	int other_half=size-ist_half;
	int left_rotate=atoi(argv[i]);
	int right_rotate=atoi(argv[i+1]);
	int temp;
		for(i=0;i<left_rotate;i++)
		{
			temp=arr[0];
			for(j=0;j<ist_half-1;j++)
			{
				arr[j]=arr[j+1];
			}
			arr[ist_half-1]=temp;
		}
	
	
		for(i=0;i<right_rotate;i++)
		{
			temp=arr[size-1];
			for(j=size-1;j>other_half-1;j--)
			{
				arr[j]=arr[j-1];
			}
			arr[other_half-1]=temp;
		}
	
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);

	}
return 0;
}
