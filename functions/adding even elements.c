// Write a program to add the even elements of an array using a function Add()//


#include<stdio.h>
int Add(int a[], int n){
    int sum = 0;
    for (int i=0;i<n;i++){
        if((a[i]) % 2 == 0){
            sum += a[i];
        }
    }
    return sum;

}
int main(){
    int m,a[50];
    printf("Enter array: \n");
    printf("Enter number of elements: ");
    scanf("%d", &m);

    for(int i=0;i<m;i++){
        scanf("%d", &a[i]);
    }
    printf("Sum of even elements is %d", Add(a, m));
    
    
    return 0;


}
