#include<stdio.h>
#include<string.h>
int main(int argc,const char* argv[] )
{
	//inputs
	// size of array =5
	// rotation left/right 
	// /* rotate by =3
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
//	printf("%d\n",size);
	char ptr[10];
	strcpy(ptr,argv[i]);
	int rotate=atoi(argv[i+1]);
	//printf("%s",ptr);
	int temp;
	//printf("%d\n",rotate);
	
	if(strcmp(ptr,"left")==0)
	{
		for(i=0;i<rotate;i++)
		{
			temp=arr[0];
			for(j=0;j<size;j++)
			{
				arr[j]=arr[j+1];
			}
			arr[size-1]=temp;
		}
	}
	else
	{
		for(i=0;i<rotate;i++)
		{
			temp=arr[size-1];
			for(j=size-1;j>0;j--)
			{
				arr[j]=arr[j-1];
			}
			arr[0]=temp;
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}

	

	return 0;

}



