#include<stdio.h>
int main(){
    int l,b;
    scanf("%d %d",&l,&b);
    int a=l*b;
    int p=2*(l+b);
    printf("area=%d and perimeter=%d",a,p);
    return 0;
}
