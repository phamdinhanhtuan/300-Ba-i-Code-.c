#include<stdio.h>
float tinhTrungBinhCong(float a,float b,float c){
    return (a+b+c)/3;
}

int main()
{
    float a,b,c;
        printf("Nhap so a: ");
        scanf("%f",&a);
        printf("Nhap so b: ");
        scanf("%f",&b);
        printf("Nhap so c: ");
        scanf("%f",&c);
     float TBC = tinhTrungBinhCong(a,b,c);
    printf("Trung binh cong: %2.1f",TBC);
return 0;
}