#include <iostream>
using namespace std;
int main ()
{
    int i, j, f, k;
    int size = 10;
    int m[size] = {55, 30, 17, 77, 57, 5, 7, 22, 98, 7};
    cin >> i;
    i = abs(i);
    i = i % size;
    k = i;
    for (j = 0; j < size; j++)
    {
        if (i == -1)
        {
            i = size - 1;
        }
        cout << m[i] << " ";
        i--;
    }
    cout << " - Вывод значений " << endl;
    for (f = 1; f < size; f++)
    {
        for (j = f; j > 0 && m[j-1] < m[j]; j--)
        {
            int tmp = m[j-1];
            m[j-1] = m[j];
            m[j] = tmp;
        }
    }
    for (j = 0; j < size; ++j)
        cout << m[j] << " ";
    cout << " - Упорядоченный по убыванию массив" << endl;
    for (j = 0; j < size; ++j)
    {
        if (m[j] % 2 == 1)
            m[j] = 0;
    }
    for (j = 0; j < size; j++)
    {
        if (k == -1)
        {
            k = size - 1;
        }
        cout << m[k] << " ";
        k--;
    }
    cout << " - Значения массива без нечётных чисел"<< endl;
    return 0;
}
