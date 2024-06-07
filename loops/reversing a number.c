#include<stdio.h>
int main(){
    int m,rev=0,digit;
    printf("Enter number: \n");
    scanf("%d", &m);
    while (m>0){
        digit = m % 10;
        rev = rev*10 + digit;
        m = m/10;
    }
    printf("Reversed number is: %d", rev);
    
    
    return 0;


}
