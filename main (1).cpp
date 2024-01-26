#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
    int i, k, f, j;
    int size = 10;
    int m[size] = {55, 30, 17, 77, 57, 5, 7, 22, 98, 7};
    cin >> i;
    if (i > 9)
    {
        i -= (i/10)*10;
        k = i+1;
        if (k == 10)
            k = 0;
    }
    cout << m[i] << " " << m[k] << " - Вывод значений " << i+1 << " и " << k+1 << endl;
    for (j = 0; j < 10; ++j)
        cout << m[j] << " ";
    cout << "Неупорядоченный массив" << endl;
    for (int f = 1; f < size; f++)
    {
        for (int j = f; j > 0 && m[j-1] < m[j]; j--)
        {
            int tmp = m[j-1];
            m[j-1] = m[j];
            m[j] = tmp;
        }
    }
    for (j = 0; j < 10; ++j)
        cout << m[j] << " ";
    cout << " - Упорядоченный по убыванию массив" << endl;
    for (j = 0; j < 10; ++j)
    {
        if (m[j] % 2 == 1)
            m[j] = 0;
    }
    for (int f = 1; f < size; f++)
    {
        for (int j = f; j > 0 && m[j-1] < m[j]; j--)
        {
            int tmp = m[j-1];
            m[j-1] = m[j];
            m[j] = tmp;
        }
    }
    for (j = 0; j < 10; ++j)
        cout << m[j] << " ";
    cout << " - Упорядоченный массив без нечётных чисел"<< endl;
}

