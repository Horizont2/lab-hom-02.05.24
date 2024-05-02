#include <iostream>
using namespace std;
int main()
{
    int a,sum=1;
    cout<<"Введіть число (1<=число<=20: ";
    cin>>a;
    if (a<=0 || a>=21){
        cout<<"Помилка";
        return(0);
    }
    int i = a;
    while (i <= 20) {
        sum*=i;
        i++;
    }
    cout<<"Добуток чисел від "<<a<<" до 20 дорівнює: "<<sum;

    return 0;
}
