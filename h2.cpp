#include <iostream>
using namespace std;
int main()
{
    int num,step,sum;
    cout << "Введіть число: ";
    cin >> num;
    cout<<"Введіть степінь до якого потрібно підвести число: ";
    cin>>step;
    sum=num;
    int i = 0;
    while (i < step) {
        sum*=num;
        i++;
        --step;
    }
    cout<<"Відповідь: "<<sum;

    return 0;
}
