#include<stdio.h>
int tinhChuVi(int a,b){
    return (a+b)*2;
}

int tinhDienTich(int a,b){
    return (a*b);
}

int main()
{   
    int a,b;
        printf("Nhap chieu dai:  ");
        scanf("%d",&a);
        printf("Nhap chieu rong: ");
        scanf("%d",&b);
    int chuVi = tinhChuVi(a,b);
    int dienTich = tinhDienTich(a,b);
        printf("Chu vi: %d\n Dien tich: %d",chuVi,dienTich);
return 0;
}