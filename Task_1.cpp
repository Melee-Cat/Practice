#include <iostream>
#include <string>
using namespace std;
string karavan( string n)
{
    int num = stoi(n.substr(0,3));
    if ((num % 10==1) && (num != 11)) n="В караване был "+n+" верблюд";
    else {
        if ((num%10 <= 4) && (num/10!=1)) n="В караване было "+n+" верблюда";
        else n="В караване было "+n+" верблюдов";
    }
    cout<<n<<endl;
    return n;
}
int main()
{
    string n;
    cout << "Введите число, принадлежащее диапазону от 1 до 100: "<< endl;
    cin>>n;
    int num = stoi(n.substr(0,5));
    if (num>=1 && num<=100) {
        karavan(n);
    } else {
        cout<<"Число не принадлежит диапазону от 1 до 100"<<endl;
    }

}
