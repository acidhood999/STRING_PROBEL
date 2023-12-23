// STRING_PROBEL.cpp

#include <iostream>
#include <string>

using namespace std;

string szhatieteksta(const string& stocha) 
{
    string shzat;
    bool proverkaST = false;

    for (char probel : stocha)
    {
        if (probel == ' ')
        {
            if (!proverkaST)
            {
                shzat += ' ';
                proverkaST = true;
            }
        }
        else 
        {
            shzat += probel;
            proverkaST = false;
        }
    }
    return shzat;
}

int main() 
{
    setlocale(LC_ALL, "RU");

    string proverka1;
    string proverkaSHZATIA;

    proverka1 = "      МОТИВАЦИЮ     НАДО     ПОДНЯТЬ       !!!!!!!";
    proverkaSHZATIA = szhatieteksta(proverka1);

    cout << "Текст без сжатия: " << proverka1 << endl;
    cout << "Текст с сжатием: " << proverkaSHZATIA << endl;

   
}