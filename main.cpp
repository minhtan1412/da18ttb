//
//  bt 1,2,3.cpp
//  baitapthuchanh_b1.cpp
//  Created by Nguyễn Tấn on 15/11/24.
//


// viet chuong trinh c voi yeu cau in ra chuoi thong bao
#include <stdio.h>
#define PI 3.1415 // khai bao hang so PI
int main() {
    printf("ho tên : nguyen minh tan\n");
    printf("lop: da18ttb\n");
    int a = 100;
    float b = 8.95;
    char c = 'c';
    printf("So nguyen: %d\n", a);
    printf("So thuc: %.2f\n", b);
    printf("Ky tu: '%c'\n", c);
    
    float day_lon = 50.0;
    float day_be = 23.0;
    float chieu_cao = 30.0;
    float chu_vi_tron = 12.56;
//tinh dien tich hinh thang
    float dien_tich_hinh_thang = ((day_lon + day_be)/2) * chieu_cao;
// tinh dien tich bon hoa ( hinh tron )
    float dien_tich_bon_hoa = ( chu_vi_tron * chu_vi_tron)/(4 * PI);
//tinh diem tich con lai cua san truong
    float dien_tich_con_lai = dien_tich_hinh_thang - dien_tich_bon_hoa;
// ket qua
    printf("dien tich con lai cua san truong la: %.2f m^2\n", dien_tich_con_lai);
    
    
    return 0;
}
