#include<stdio.h>
int main()
{
    int Tuoi;
        printf("Nhap tuoi cua mot nguoi: ");
        scanf("%d",&Tuoi);
    if(Tuoi > 0  && Tuoi <= 11){
        printf("Thieu Nhi\n");
    }else if(Tuoi > 11 && Tuoi <= 25){
        printf("Thieu Nien\n");
    }else if(Tuoi > 25 && Tuoi <=50){
        printf("Trung Nien\n");
    }else if(Tuoi > 50){
        printf("Lao nien\n");
    }
        printf("%d",Tuoi);
return 0;
}