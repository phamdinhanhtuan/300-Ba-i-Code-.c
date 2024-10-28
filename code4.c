#include<stdio.h>
int tinhTong(int a,int b){
    return a+b;
}

int tinhTich(int a,int b){
    return a*b;
}

int main()
{   
    int a,b;
        printf("nhap so a: ");
        scanf("%d",&a);
        printf("nhap so b: ");
        scanf("%d",&b);
    int Tong = tinhTong(a,b);
    int Tich = tinhTich(a,b);
        printf("Tong:%d \n Tich: %d",Tong,Tich);
return 0;
}