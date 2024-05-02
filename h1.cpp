#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;
    cout << "Введіть число: ";
    cin >> a;

    int i = a;
    while (i <= 500) {
        sum += i;
        i++;
    }

    cout << "Сума чисел від " << a << " до 500 дорівнює: " << sum;
    return 0;
}
