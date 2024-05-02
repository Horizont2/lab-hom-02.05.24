#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Введіть число: ";
    cin >> num;
    
    int i = 0;
    while (i <= num) {
        cout << i << ", ";
        i++;
    }

    return 0;
}
