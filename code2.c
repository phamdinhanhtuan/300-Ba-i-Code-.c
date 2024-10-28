#include<stdio.h>
float tinhChuvi(a){
    return a*2*3.14;
}

float tinhdienTich(a){
    return a*a*3.14;
}

int main()
{   float a;
        printf("nhap so : ");
        scanf("%f",&a);
    if(a<0){
        printf("Vui long nhap lai so nguyen duong");
    }else{
        float chuvi = tinhChuvi(a);
        float dienTich = tinhdienTich(a); 
            printf("Chu vi:%0.2f \n,Dien tich:%0.2f \n",chuvi,dienTich);
    }
return 0;
}