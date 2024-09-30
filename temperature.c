#include<stdio.h>
int main(){
    float c,f;
    printf("Enter fahrenheit:");
    scanf("%f",&f);
    c=((f-32.0)*5.0/9.0);
    printf("the value in celcius:%f",c);
    return 0;
}
