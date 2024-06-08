#include<stdio.h>
int rev(int a){
    static int  n = 0;
    if (a > 0){
        n = n*10 + (a%10);
    }
    else{
        return n;
    }
    return rev(a/10);
}


int main(){
    int x;
    printf("Enter number: \n");
    scanf("%d", &x);

    printf("Reversed number is %d" ,rev(x));
    
    return 0;
}
