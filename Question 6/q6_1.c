#include<stdio.h>
int main(){
    //ERP:10316 Ashok kumar sahu 
    // Practical 6 : Q.1. print numbers from a to b using loops.// 
    int a;
    printf("enter number a:");
    scanf("%d",&a);
    int b;
    printf("enter number b:");
    scanf("%d",&b);
    printf("numbers from %d to %d is ",a,b);
    for(int i=a;i<=b;i++){
        printf("%d ",i);
    }
    return 0;

}
//enter number a:4
//enter number b:5
//numbers from 4 to 5 is 4 5 