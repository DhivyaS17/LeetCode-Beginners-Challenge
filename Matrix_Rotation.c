#include <stdio.h>

/* The idea behind the solution is transpose and swap.
   After getting the input from the user we transpose the matrix and the swap the elements from the extremes at row level.
   This will give you a clockwise 90degree rotated matrix, the same can be used for 180 as well as 270 degrees, the only difference is the number of
   times the matrix is tranposed and swapped.*/ 

int main() { 
    int n;
    scanf("%d",&n);
    int a[n][n],i,j,k;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    
    for(i=0;i<n;i++)
    for(j=0;j<i;j++){
        //printf("%d ",a[i][j]);
        k=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=k;
        
    }
     printf("\nTranspose\n");
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    
    for(i=0;i<n;i++)
    for(j=0,k=n-1;j<k;j++,k--){
        int t=a[i][j];
        a[i][j]=a[i][k];
        a[i][k]=t;
    }
    
    printf("\nThe Rotated matrix\n");
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
