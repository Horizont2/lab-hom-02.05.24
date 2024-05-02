#include <iostream>
using namespace std;
int main()
{
    int num,sum=1;
    cout<<"Введіть число (1<=число<=10): ";
    cin>>num;
    if (num<=0 || num>=11){
        cout<<"Помилка";
        return(0);
    }
    int i = 1;
    while (i <= 10) {
        cout<<num<<'x'<<i<<'='<<num*i<<endl;
        i++;
    }

    return 0;
}
