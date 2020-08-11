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
	
	int up_lim,down_lim;
	printf("Enter the upper limit: ");
	scanf("%d", &up_lim);
	printf("Enter the down limit: ");
	scanf("%d", &down_lim);
	bool flag1=false,flag2=false;
	int temp1=0,temp2=0;
	
	for(i=0;i<n;i++){
		if(up_lim==*(data+i)){
			flag1=true;
			temp2=i;
			break;
		}
		if(i==n-1){
			flag1=false;
		}
	}
	for(i=0;i<n;i++){
		if(down_lim==*(data+i)){
			flag2=true;
			temp1=i;
			break;
		}
		if(i==n-1){
			flag2=false;
		}
	}
	
	int j,temp;
	
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
	
	if(flag1 && flag2){
		int count=0;
		printf("The in-between inclusive elements are: \n");
		i=temp1;
		while(i!=temp2+1){
			printf(" %d ",*(data+i));
			i++; count++;
		}
		printf("\nThere are total %d such elements\n",count);
	}
	else
		printf("Wrong Inputs!");

	
	
	free(data);
	
	return 0;
}


