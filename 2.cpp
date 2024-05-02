#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;
    
    int i;
    if (num1 > num2) {
        i = num2;
        cout << "Парні: ";
        while (i <= num1) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
            i++;
        }

        i = num2;
        cout << endl << "Не парні: ";
        while (i <= num1) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
            i++;
        }

        i = num2;
        cout << endl << "Кратні семи: ";
        while (i <= num1) {
            if (i % 7 == 0) {
                cout << i << " ";
            }
            i++;
        }
    } 
    else if (num1 < num2) {
        i = num1;
        cout << "Парні: ";
        while (i <= num2) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
            i++;
        }

        i = num1;
        cout << endl << "Не парні: ";
        while (i <= num2) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
            i++;
        }

        i = num1;
        cout << endl << "Кратні семи: ";
        while (i <= num2) {
            if (i % 7 == 0) {
                cout << i << " ";
            }
            i++;
        }
    }

    return 0;
}
