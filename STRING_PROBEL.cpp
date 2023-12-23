// STRING_PROBEL.cpp

#include <iostream>
#include <string>

using namespace std;

string squeezeText(const string& pishem) 
{
    string shzat;
    bool proverkaST = false;

    for (char probel : pishem)
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

    string proverka1 = "      МОТИВАЦИЮ     НАДО     ПОДНЯТЬ       !!!!!!!";
    string proverkaSHZATIA = squeezeText(proverka1);

    cout << "Текст без сжатия: " << proverka1 << endl;
    cout << "Текст с сжатием: " << proverkaSHZATIA << endl;

   
}