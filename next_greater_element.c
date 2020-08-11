#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *arr,n,i,x,count=0,a,b,next,j;
      printf("Enter the size of the array: ");
      scanf("%d",&n);
      arr=(int*)malloc(n * sizeof(int));
      printf("\nEnter the numbers :\n",n);
      for(i=0;i<n;i++)
      {
            printf("Enter the number %d =    ",i+1);
            scanf("%d",arr+i);
      }

     for (i=0; i<n; i++)
    {
        next = -1;
        for (j = i+1; j<n; j++)
        {
            if (*(arr+i) < *(arr+j))
            {
                next = *(arr+j);
                break;
            }
        }
        printf("%d -- %d\n", *(arr+i), next);
    }



      return 0;
}
