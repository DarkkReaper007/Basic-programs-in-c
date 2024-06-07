#include<stdio.h>
int main(){
    int i,j,a[50][50],m,n,b[50][50],p,q,c[50][50];
    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns:");
    scanf("%d", &n);

    printf("Enter the elements: \n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter number of rows: ");
    scanf("%d", &p);
    
    printf("Enter number of columns:");
    scanf("%d", &q);

    printf("Enter the elements:\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &b[i][j]);
        }
    }
    int k;
    for ( i=0;i<m;i++){
        for (j=0;j<q;j++){
            c[i][j] = 0;
            for(k=0;k<n;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("The resultant matrix is: ");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;


}


