#include<stdio.h>

float tinhDiemTrungBinh(float toan,float van,float anh){
    return (toan*2 + van*2 + anh )/5;
}
int main()
{   
    float toan,van,anh;
        scanf("%f %f %f",&toan,&van,&anh);
    float diemTrungBinh = tinhDiemTrungBinh(toan,van,anh);
        printf("%.1f\n",diemTrungBinh);
return 0;
}