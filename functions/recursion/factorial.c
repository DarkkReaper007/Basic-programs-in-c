#include<stdio.h>
int fact(int a){
    if (a == 1){
        return 1;
    }
    if (a == 0){
        return 1;
    }
    else{
        return a * fact(a - 1);
    }

}
int main(){
    int x;
    printf("Enter number: \n");
    scanf("%d", &x);

    printf("The factorial is %d",fact(x));
    
    return 0;
}
