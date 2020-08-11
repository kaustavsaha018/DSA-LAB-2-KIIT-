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
	
	printf("The elements in reverse oder is: \n");
	
	for(i=n-1;i>=0;i--){
		printf("%d\n", *(data+i));
	}
	
	free(data);
	
	return 0;
}
