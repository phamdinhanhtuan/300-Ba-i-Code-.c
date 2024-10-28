#include<stdio.h>
#include<math.h>

float tinhChuVi(float a,float b,float c){
    return a+b+c;
}

float tinhDienTich(float a,float b,float c){
    float cV = tinhChuVi(a,b,c);
    float p=cV/2;
    return sqrt(p*(p-a)*(p-b)*(p-c)) ;
   
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
    float dT = tinhDienTich(a,b,c);
    float cV = tinhChuVi(a,b,c);

        printf("Chu vi tam giac:%1.1f\nDien tich tam giac:%1.3f",cV,dT);
return 0;
}