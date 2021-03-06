// Tinh tong cac so le, va hieu cac so chan tu 1 -> n
/*
! Thuat toan
    - Nhap vao so nguyen duong n kiem tra voi dieu kien > 0
    - For loop neu i chia het cho 2 -> so chan, tao bien sum = sum - i
    - Neu i khong chia het cho 2 -> so le, sum = sum + i
    - Return sum.
    */

#include <iostream>
#include <math.h>
using namespace std;
int Kiem_Tra()
{
    int n;
    do
    {
        cout << "Nhap vao gia tri n: ";
        cin >> n;
        if (n < 0)
        {
            system("clear");
            cout << "Gia tri sai, vui long nhap lai" << endl;
        }
    } while (n < 0);
    return n;
}
int Tinh_Toan(int &n)
{
    int sum(0);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
    }
    return sum;
}
int main()
{
    int n;
    n = Kiem_Tra();
    int Ket_Qua = Tinh_Toan(n);
    cout << "Ket qua cua phep tinh la: " << Ket_Qua << endl;
    return 0;
}