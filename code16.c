#include<stdio.h>
int main()
{
float TBHK1,TBHK2;
    printf("Nhap diem trung bình học kỳ 1: ");
    scanf("%f",& TBHK1);
    printf("Nhap diem trung bình học kỳ 2: ");
    scanf("%f",& TBHK2);
    float TBCN =(TBHK1 + TBHK2 *2)/3;
    if(TBCN >= 8){
        printf("Gioi");
    }else if(TBCN >= 6.5){
        printf("Kha");
    }else if(TBCN >=5 ){
        printf("Trung Binh");
    }else if(TBCN >= 3.5 ){
        printf("Yeu");
    }else (TBCN < 3);
        printf("kem");
    printf("TBCN : %.1f",TBCN);
   
}