#include <iostream>
using namespace std;
int main()
{
    float sum=0;
    int i = 1;
    while (i <= 1000) {
        sum+=i;
        i++;
    }
    cout<<"Середнє арифметичне чисел від 1 до 1000 дорівнює: "<<sum/i;

    return 0;
}
