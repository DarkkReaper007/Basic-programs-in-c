#include<stdio.h>
int fibo(int a){
    if (a == 1){
        return 0;
    }
    if (a == 2){
        return 1;
    }
    else{
        return fibo(a-1) + fibo(a - 2);
    }

}
int main(){
    int x;
    printf("Enter number: \n");
    scanf("%d", &x);

    printf("The number at position %d in fibonacci series is %d" ,x,fibo(x));
    
    return 0;
}
