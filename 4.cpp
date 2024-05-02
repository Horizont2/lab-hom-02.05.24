#include <iostream>
using namespace std;
int main()
{
    int num,s=0;
    cout<<"Введіть число: ";
    cin>>num;
    s+=num;
    while (num!=0){
        cout<<"Введіть число: ";
        cin>>num;
        s+=num;
    }
    cout<<s;
    return 0;
}