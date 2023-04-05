//đệ quy là hàm gọi lại chính nó
//cài đặt và ví dụ
//tính giai thùa
#include <iostream>
using namespace std;
int fact(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * fact(n - 1);
}
int main() {
	int n;
	cout << " nhap n: ";
	cin >> n;
	cout << fact(n);
}
