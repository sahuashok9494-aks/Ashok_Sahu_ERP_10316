#include<stdio.h>
int main(){
    //ERP:10316 Ashok kumar sahu
    //Practical 6 : Q.3.ATM Pin Authentication//
    int pin;
    int attempts=0;
    const int correct_pin = 1234;
    while(attempts<3){
        printf("enter your 4-digit ATM Pin :");
        scanf("%d",&pin);

        if(pin==correct_pin) {
            printf("Pin is correct. Access granted.\n");
            break;
        }
        else{
            attempts=attempts+1;
            printf("Pin is incorrect. Attempts left : %d\n",3-attempts);
        }
    }
    if(attempts==3){
        printf("Maximum attempts reached. ATM card blocked.\n");
    }
    return  0;
}
//enter your 4-digit ATM Pin :4569
//Pin is incorrect. Attempts left : 2
//enter your 4-digit ATM Pin :1236
//Pin is incorrect. Attempts left : 1
//enter your 4-digit ATM Pin :1589
//Pin is incorrect. Attempts left : 0
//Maximum attempts reached. ATM card blocked.