#include <stdio.h>
#include <stdlib.h>

int nonzero_elements(int *mat,int rows,int cols);
int sum_above_leading_diagonal(int *mat,int rows,int cols);
int sum_below_minor_diagonal(int *mat,int rows,int cols);
int product_of_diagonal_elements(int *mat,int rows,int cols);

int main(){
	
	int *matrix,cols,rows;
	printf("Enter no.of rows: ");
	scanf("%d", &rows);
	printf("Enter no.of cols: ");
	scanf("%d", &cols);
	
	
	matrix = (int *)calloc (rows*cols,sizeof(int));

	
	if(matrix==NULL){
		printf("Error in allocating memory!");
		exit(0);	
	}
	
	int i,j;
	printf("Enter the matrix elements:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d", matrix+(i*cols)+j);
		}
	}
	
printf("\nNumber of nonzero elements are: %d",nonzero_elements(matrix,rows,cols));
printf("\nSum of elements above leading diagonal is: %d",sum_above_leading_diagonal(matrix,rows,cols));	
printf("\nSum of elements below minor diagonal is: %d",sum_below_minor_diagonal(matrix,rows,cols));
printf("\nProduct of the diagonal elements is: %d", product_of_diagonal_elements(matrix,rows,cols));
	
	free(matrix);
	
	return 0;
}

int nonzero_elements(int *mat,int rows,int cols){
	int i,j,count=0;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){

			if(0==*(mat+(i*cols)+j)){
			count++;
				
			}
		}
	}
	return (rows*cols)-count;
}

int sum_above_leading_diagonal(int *mat,int rows,int cols){
	int i,j,sum=0;
	for(i=0;i<rows;i++){
		for(j=i+1;j<cols;j++){
				
				sum=sum+*(mat+(i*cols)+j);
				
			}
		}
		
		return sum;
}	

int sum_below_minor_diagonal(int *mat,int rows,int cols){
	int i,j,sum=0,m=cols-1;
	for(i=0;i<rows;i++){
		
		for(j=cols-1;j>m;j--){
				
				sum=sum+*(mat+(i*cols)+j);
				
			}
			m--; 
		}
		
		return sum;
}
int product_of_diagonal_elements(int *mat,int rows,int cols){
	int product = 1,i,j;
	
		for(i=0;i<rows;i++){
			for(j=0;j<cols;j++){
				
				if(i==j){
					product=product * *(mat+(i*cols)+j);
				}
				
			}
		}
	
	return product;
}	

