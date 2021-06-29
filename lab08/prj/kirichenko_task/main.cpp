#include <iostream>
#include <windows.h>
#include <wchar.h>
#include <locale.h>
#include <io.h>
#include <fcntl.h>
#include "modules_kirichenko.h"
using namespace std;
int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _wsetlocale(LC_ALL,L"");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x, y, z, q, w;
wchar_t a,b;
    wcout << L"__===Виконала студентка групи КБ20 Кіріченко Тетяна © ===___" << endl;
    wcout << L"x=" << endl;
    wcin >> x;
    wcout << L"y=" << endl;
    wcin >> y;
    wcout << L"z=" << endl;
    wcin >> z;
    wcout << L"x(16-кова система): " << hex << x << dec << endl;
    wcout << L"y(16-кова система): " << hex << y << dec << endl;
    wcout << L"z(16-кова система): " << hex << z << dec << endl;
    wcout << L"a=" << endl;
    wcin >> a;
    wcout << L"b=" << endl;
    wcin >> b;
    q = a + 1;
    w = b;
    wcout << L"a+1<=b : ";
    if (q <= w){
        wcout << L"1" << endl;
    } else
    {
        wcout << L"0" << endl;
    }
    wcout << L"S=" << s_calculation(x, y, z) << endl;
    system("pause");
    return 0;
}
