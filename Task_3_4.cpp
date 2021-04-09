#include <iostream>
#include <string>
#include <cstring>
#include <locale>
#include <cctype>
#include <codecvt>
#include <regex>
using namespace std;

string coder(string s, int key)
{
// Удаление латинских букв
    unsigned int i=0;
    
    while (s[i]) {
        if (isalnum(s[i]) || s[i] == ' ' || ispunct(s[i])) { // Удаление всех символов, кроме русских букв. isalnum - проверка на принадлежность буквам и цифрам (A-Z,a-z,0-9). inspunct - проверка на принадлежность печатных символов
            s.erase (i,1);
            i--;
        }
        i++;
    }
// Возведение к верхнему регистру
    locale loc("ru_RU.UTF-8"); // русская локаль для корректной смены регистра
    wstring_convert<codecvt_utf8<wchar_t>, wchar_t> codec; //кодек UTF-8
    wstring ws = codec.from_bytes(s); // перекодируем из UTF-8 in UTF-32
    for (wchar_t & wc: ws) {
        wc = toupper(wc,loc);
    }
    
    cout << "Введите ключ (key): "<< endl;
    cin>>key; // Ввод значения ключа
    for (i=0; i<ws.size(); i++) {
        ws[i]=ws[i] + key%32;
        if (ws[i]>=1072) ws[i]=ws[i]-32;

    }
    s = codec.to_bytes(ws); // перекодируем из UTF-32 in UTF-8
    cout<< "Зашифрованная строка :"<< endl;
    cout << s << "\n";

    return s;
}

string decoder(string s, int key)
{
// Удаление латинских букв
    unsigned int i=0;
    while (s[i]) {
        if (isalnum(s[i]) || s[i] == ' ' || ispunct(s[i])) { // Удаление всех символов, кроме русских букв. isalnum - проверка на принадлежность буквам и цифрам (A-Z,a-z,0-9). inspunct - проверка на принадлежность печатных символов
            cout << "Ошибка"<<endl;
            return s;
        }
        i++;
    }
// Возведение к верхнему регистру
    locale loc("ru_RU.UTF-8"); // русская локаль для корректной смены регистра
    wstring_convert<codecvt_utf8<wchar_t>, wchar_t> codec; //кодек UTF-8
    wstring ws = codec.from_bytes(s); // перекодируем из UTF-8 in UTF-32
    for (wchar_t & wc: ws) {
        wc = toupper(wc,loc);
    }
    cout << "Введите ключ (key): "<< endl;
    cin>>key; // Ввод значения ключа
    for (i=0; i<ws.size(); i++) {
       if (ws[i]-key%32 < 1040) {
           ws[i]=ws[i]-key%32+32;
       } else {
       ws[i] = ws[i]-key%32;
       }
    }
    s = codec.to_bytes(ws); // перекодируем из UTF-32 in UTF-8
    cout<< "Расшифрованная строка :"<< endl;
    cout << s << "\n";

    return s;
}
int main()
{
    string s;
    cout <<"Введите строку (string):\n";
   getline(cin, s);
    cout << "Для зашифровки введите 0 / Для расшифровки введите 1"<<endl;
    s = regex_replace(s, regex("№"), " ");
    s = regex_replace(s, regex("ё"), "Е");
    s = regex_replace(s, regex("Ё"), "Е");
    int dei;
    int key = 0;
    cin>>dei;
    if (dei==0) {
        coder(s,key);
    } else if (dei == 1) {
        decoder(s,key);
    } else {
        cout<<"Данного действия не существует"<<endl;
    }
}
