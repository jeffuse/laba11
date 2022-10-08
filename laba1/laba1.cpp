#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    bool s = true;
    while (s == true)
    {
        //1) Вывести, сколько памяти (в байтах) на вашем компьютере отводится под различные типы данных со спецификаторами и без: int, short int, long int, float, double, long double, char и bool.
        cout << sizeof(int) << "\n" << sizeof(short int) << "\n" << sizeof(long int) << "\n"
            << sizeof(float) << "\n" << sizeof(double) << "\n" << sizeof(long double) << "\n" << sizeof(char) << "\n" << sizeof(bool) << "\n" << endl;
        //2) Вывести на экран двоичное представление в памяти (все разряды) целого числа. При выводе необходимо визуально обозначить знаковый разряд и значащие разряды отступами или цветом.
        int a;
        cin >> a;
        unsigned order = sizeof(int) * 8, mask = pow(2, 31);
        for (int i = 1; i <= order; i++)
        {
            putchar(a & mask ? '1' : '0');
            mask >>= 1;
            if (i % 8 == 0)
            {
                cout << " ";
            }
            if (i % order - 1 == 0)
            {
                cout << " ";
            }

        }
        cout << "\n" << endl;
        //3) Вывести на экран двоичное представление в памяти (все разряды) типа float. При выводе необходимо визуально обозначить знаковый разряд мантиссы, знаковый разряд порядка (если есть), мантиссу и порядок.
        union {
            int b;
            float c;

        };
        unsigned order1 = sizeof(int) * 8, mask1 = pow(2, 31);
        cin >> c;
        for (int j = 1; j <= order1; j++)
        {
            putchar(b & mask1 ? '1' : '0');
            mask1 >>= 1;
            if (j % 8 == 0)
            {
                cout << " ";
            }
            if (j % order1 - 1 == 0)
            {
                cout << " ";
            }

        }
        cout << "\n" << endl;
        //4) Вывести на экран двоичное представление в памяти (все разряды) типа double. При выводе необходимо визуально обозначить знаковый разряд мантиссы, знаковый разряд порядка (если есть), мантиссу и порядок. (*)
        union {
            int d[2] = { 32, 32 };
            double e;

        };
        unsigned order3 = sizeof(int) * 8, mask3 = pow(2, 31);
        unsigned order2 = sizeof(int) * 8, mask2 = pow(2, 31);
        cin >> e;
        for (int l = 1; l <= order3; l++)
        {
            putchar(d[1] & mask3 ? '1' : '0');
            mask3 >>= 1;
            if (l % 8 == 0)
            {
                cout << " ";
            }

        }
        for (int k = 1; k <= order2; k++)
        {
            putchar(d[0] & mask2 ? '1' : '0');
            mask2 >>= 1;
            if (k % 8 == 0)
            {
                cout << " ";
            }


        }
        cout << "\n" << endl;
    }

}