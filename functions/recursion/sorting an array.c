#include<stdio.h>
int sort(int a[],int ln){
    int min, temp,i;
    if (ln <= 1){
        return ;
    }
    min = 0;
    for(i=1;i<ln;i++){
        if (a[i] < a[min]){
            min = i;
            
    
        }
    }
    temp = a[0];
    a[0] = a[min];
    a[min] = temp;

    return sort(&a[1], ln-1);

}


int main(){
    int b[] = {5,4,3,2,1};
    int len = sizeof(b) / sizeof(b[0]);
    sort(b,len);
    for(int i=0;i<len;i++){
        printf("%d", b[i]);
    }
    
    return 0;
}
