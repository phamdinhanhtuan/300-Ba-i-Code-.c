#include<stdio.h>
int tinhChuVi(float a){
    return a*4;
}

int tinhDienTich(float a){
    return a*a;
}

int main()
{   
    float a;
        printf("nhap vao so n: ");
        scanf("%f",&a);

    float chuVi = tinhChuVi(a);
        printf("\ntinh chu vi:%f ",chuVi);
    float dienTich = tinhDienTich(a);
        printf("\ntinh dien tich:%f ",dienTich);
    return 0;
}

