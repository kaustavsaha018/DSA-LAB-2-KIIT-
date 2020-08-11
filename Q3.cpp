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
	
	int num;
	printf("Enter the element to be searched: ");
	scanf("%d", &num);
	
	for(i=0;i<n;i++){
		if(num==*(data+i)){
			printf("\nElement found! at index number %d",i);
			break;
		}
		if(i==n-1){
			printf("\nNo such element found!");
		}
	}

	
	free(data);
	
	return 0;
}
