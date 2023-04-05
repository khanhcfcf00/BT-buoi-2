//de quy duoi
//https://viblo.asia/p/de-quy-duoi-tail-recursive-function-trong-scala-zoZVRg9LGmg5
//em xem xong dựa vào ví dụ đó để viết hàm trong c++
#include <iostream>
using namespace std;
int sum(int x) {
    if (x == 1)
        return 1;
    else
        return sum(x-1)+x;
}
int main() {
    int x;
    cout << "nhap x: ";
    cin >> x;
    cout << sum(x);
}
