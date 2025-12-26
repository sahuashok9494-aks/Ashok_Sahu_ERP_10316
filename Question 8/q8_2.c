#include<stdio.h>
//ERP:10316 Ashok kumar sahu
//Practical 8:Q.2. Swap 2 number using pass by reference//
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=5,b=3;
    swap(&a,&b);
    printf("after swapping a=%d and b=%d",a,b);
    return 0;
}
//after swapping a=3 and b=5