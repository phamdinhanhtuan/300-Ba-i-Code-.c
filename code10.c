#include<stdio.h>
#include<math.h>

int tinhSoLuongTao(int T,int HS){
   return T / HS;
}
int tongSoTaoConDu (int T ,int HS){
    return T % HS;
}
int main()
{
    int T,HS;
        printf("Nhap vao so hoc sinh: ");
        scanf("%d",&T);
        printf("Nhap vao so trong ro: ");
        scanf("%d",&HS);
    int chiaTao = tinhSoLuongTao(T,HS);
        printf("So tao moi hoc sinh duoc chia:%d\n",chiaTao);
    int SoTaoConDu = tongSoTaoConDu(T,HS);
        printf("Tong so tao con du: %d",SoTaoConDu);
return 0;
}