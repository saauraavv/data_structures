#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
	
	int arr[3][3],i,j,k;
	i=1;

		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				arr[j][k]=atoi(argv[i]);
				i++;
			}
		}	
	//int **ptr=arr;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",*(*(arr+i)+j));
		}
		printf("\n");
	}
	return 0;
}
