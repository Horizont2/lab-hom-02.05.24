#include <iostream>
using namespace std;
int main()
{
    int num1, num2, s = 0;
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;

    int i;
    if (num1 > num2) {
        i = num2;
        while (i <= num1) {
            s += i;
            i++;
        }
    } else if (num1 < num2) {
        i = num1;
        while (i <= num2) {
            s += i;
            i++;
        }
    }
    cout << s;
    return 0;
}
