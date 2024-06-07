#include<stdio.h>
int main(){
    int m,rev=0,digit,flag=0;
    printf("Enter number: \n");
    scanf("%d", &m);
    if (m == 1 || m==0){
        printf("Neither prime nor Composite");
    }
    if (m==2){
        printf("Prime!!");
    }
    for (int i=2;i<m;i++){
        if (m % i == 0){
            flag = 0;
            printf("Number not prime");
            break;
        }else{
            flag = 1;
        }
    }
    if (flag == 1){
        printf("Prime!!");
    }
    
    
    return 0;


}
