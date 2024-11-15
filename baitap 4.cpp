//
//  baitap 4.cpp
//  baitapthuchanh_3.cpp
//
//  Created by Nguyễn Tấn on 15/11/24.
//

#include "stdio.h"
int main (){
    
    
    int so_luong;
    float don_gia ,phi_van_chuyen,doanh_thu;
  //nhap so luong hang tu ban phim
    printf ( " nhap so luong hang: ");
    scanf("%d",&so_luong);
    
  //nhap don gia tu ban phim
    printf("nhap don gia: ");
    scanf("%f", &don_gia);
//nhap phi van chuyen
    printf("nhap chi phi van chuyen: ");
    scanf("%f", &phi_van_chuyen);
    
    //tinh toan dua theo cong thuc
    doanh_thu = so_luong * don_gia - phi_van_chuyen ;
    
    // in ket qua doanh thu ra mang hinh
    printf("doanh thu trong ngay la : %.2f\n", doanh_thu);
    
    
    return 0;
}
