//Создайте программу, позволяющую находить в строке подстроку и заменять её на другую произвольную подстроку в каждом месте обнаружения.
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;
char* str_replace(char* str, char* key, char* value)
{
    int len_str = strlen(str) + 1 - strlen(key) + strlen(value) + 1;
    char* buf = NULL;
    buf = (char*)realloc(buf, len_str); //работа с памятью; 
    register char* q = str, * k = key,
        * v = value, * b = buf;
    while (*b++ = *q++) {
        if (*q != *k) {
            continue;
        }
        for (;; ) {
            if (*k == 0) {
                while (*b = *v++) {
                    *b++;
                }
                break;
            };

            if (*q++ != *k++) {
                q -= 2;
                break;
            }
        };

        k = key;
    };
    *b = '\0';
    return buf;
};
int main()
{
    setlocale(LC_ALL, "Russian");
    char* str = new char[20];
    cout << "Введите строчку символов: ";
    cin >> str;
    char* oldstr = new char[10];
    cout << "Введите искомую подстроку: ";
    cin >> oldstr;
    char* newstr = new char[10];
    cout << "Введите заменяющую подстроку: ";
    cin >> newstr;
    char* newstring = new char[40];
    newstring = str_replace(str, oldstr, newstr);
    cout << "Полученная строка: " << newstring;
    system("pause");
    return 0;
}
