#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    string a("ПЕРВАЯ СТРОКА: deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\n\
ВТОРАЯ СТРОКА: deb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\n\
ТРЕТЬЯ СТРОКА: deb http://security.debian.org/ stretch/updates main contrib non-free\n\
ЧЕТВЕРТАЯ СТРОКА: deb-src http://security.debian.org/ stretch/updates main contrib non-free\n\
ПЯТАЯ СТРОКА: deb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\n\
ШЕСТАЯ СТРОКА: deb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\n\
СЕДЬМАЯ СТРОКА: deb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\n\
ВОСЬМАЯ СТРОКА: deb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free");
    cout<<"Исходные строки"<< endl;
    cout << a << '\n';
    a = regex_replace(a, regex("mephi"), "yandex");
    cout<<"Измененные строки"<< endl;
        cout << a << endl;

}
