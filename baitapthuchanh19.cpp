//
//  baitapthuchanh19.cpp
//  baitap19
//
//  Created by Nguyễn Tấn on 22/11/24.
#include "stdio.h"
#include "cmath"
using namespace std;
// kich thuoc toi da cua mang
const int SIZE = 100;

// ham nhap mang
void nhapMang(int A[], int n , int input [])
{
    for (int i=0; i<n; i++)
    {
        A[i] = input [i];
    }
}
//ham tinh tong cac phan tu cua mang
int tinhTong(int A[], int n)
{
    int tong = 0;
    for (int i=0; i<n; i++)
    {
        tong += A[i];
    }
    return  tong;
}

// ting tong cac phan tu DUONG
int tongDuong(int A[], int n)
{
    int tong = 0;
    for (int i = 0 ; i<n; i++)
    {
        if (A[i] >0)
        {
            tong += A[i];
        }
    }
return tong;
}
// tinh tong cac phan tu tai vi tri le
int tongvitrile(int A[], int n)
{
    int tong = 0;
    for (int i =1; i<n; i+=2)
    {
        tong +=A[i];
    }
    return tong;
}

//dem so phan tu AM
int demAm(int A[],int n)
{
    int dem = 0;
    for (int i=0; i <n ; i++)
    {
        if (A[i] < 0)
        {
            dem++;
        }
    }
    return dem;
}


//ham dem so phan tu LE
int demLe(int A[], int n)
{
    int dem = 0;
    for ( int i = 0 ; i < n ; i++)
    {
        if (A[i] %2 !=0)
        {
            dem++;
        }
    }
    return dem;
}

// ham dem so phan tu la so nguyen to trong mang
bool laSoNguyenTo(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int demSoNguyenTo(int A[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(A[i])) {
            dem++;
        }
    }
    return dem;
}

// ham dem so nguyen to dau tien
int timSoNguyenToDauTien(int A[], int n)
{
    for (int i = 0; i<n; i++) {
        if (laSoNguyenTo(A[i])) {
            return A[i];
        }
    }
    return -1; // khong tim thay so nguyen to
}

// ham in cac so duong le
int inSoDuongLe(int A[], int n, int output[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0 && A[i] % 2 != 0) {
            output[count++] = A[i];
        }
    }
    return count; // Trả về số lượng phần tử
}
//kiem tra có ton tai so am
bool tonTaiSoAm(int A[],int n)
{
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            return true;
        }
    }
    return false;
}
// ham kiem tra ton tai gia tri X
bool tonTaiGiaTriX (int A[], int n , int x) {
    for (int i = 0; i < n ; i++) {
        if (A[i] == x) {
            return true;
        }
    }
    return  false;
}
