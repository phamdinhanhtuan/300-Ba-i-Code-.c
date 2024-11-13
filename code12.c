#include<stdio.h>
int main()
{   
    int n;
        printf("Nhap vao mot so nguyen co ba chu so: ");
        scanf("%d",&n);
    int SoDau = n /10;
    int SoCuoi = n %100;
        printf("%d %d ",SoDau,SoCuoi);
return 0;
}