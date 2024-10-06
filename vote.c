#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if (age>=18&&age<=110){
        printf("eligible to vote");
    }
    else if(age<18){
        printf("ineligible to vote");
    }
    else{
        printf("invalid");
    }
}
