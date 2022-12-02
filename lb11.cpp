// lb11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//void NumIsTrue(const char Word[])
//{
//    int k = 0;
//    for (int n = 0; n <= strlen(Word); n++)
//    {
//        for (int mm = 48; mm <= 57; mm++)
//        {
//            if (Word[n] == ((char)mm))
//            {
//                k++;
//            }
//        }
//    };
//    if (k == 1) cout << "Your text " << Word << " has only one number" << endl;
//    else cout << "Sorry, but your text has not only one number" << endl;
//};
//NumIsTrue(firstWord);

#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введіть ваше слово: ";
    char Word[10];
    cin >> Word;
    int a = 0;
    for (int n = 0; n < strlen(Word); n++)
    {
        for (int i = 47;i < 58; i++)
        {
            if (Word[n] == (char)i)
            {
            a++;
            }
        }
    };
    if (a == 1)
        cout << "Ваше слово " << Word << " має лише одну цифру." << endl;
    else 
        cout << "Ваше слово не має жодної цифри." << endl;
}
