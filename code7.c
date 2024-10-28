#include<stdio.h>
int tinhDienTich(int a,int h){
    return (float)a*h/2;
}

int main()
{   
    int a,h;
        printf("Nhap chieu canh day:  ");
        scanf("%d",&a);
        printf("Nhap chieu cao: ");
        scanf("%d",&h);
     float dienTich = tinhDienTich(a,h);
        printf("Dien tich tam giac: %2.2f",dienTich);
return 0;
}