#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int *data;
	data  = (int *)calloc (n,sizeof(int));
	
	if(data==NULL){
		printf("Error in allocating memory!");
		exit(0);	
	}
	
	int i;
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++){
		scanf("%d", data+i);
	}
	
	int j;
	int temp;
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(data+i)>*(data+j)){
				temp=*(data+i);
				*(data+i)=*(data+j);
				*(data+j)=temp;
			}
			if(j==n-1){
				break;
			}
		}
	}
	printf("The sorted array is: \n");
	for(i=0;i<n;i++){
		printf(" %d ", *(data+i));
	}

	
	free(data);
	
	return 0;
}
