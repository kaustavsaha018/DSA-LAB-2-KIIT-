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

	int largest = *data;

	for(i=0;i<n;i++){
		if(largest<*(data+i)){
			largest=*(data+i);
		}
	}
	
	printf("The largest element in the array is: %d", largest);
	
	int smallest = *data;
	
	for(i=n-1;i>=0;i--){
		if(smallest>*(data+i)){
			smallest=*(data+i);
		}
	}
	
	printf("\nThe smallest element in the array is: %d", smallest);
	
	free(data);

	return 0;
}
