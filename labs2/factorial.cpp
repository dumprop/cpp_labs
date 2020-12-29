#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    unsigned long long factorial = 1;

    cout << "Вводите какой факториал нужно посчитать: ";
    cin >> n;

    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }

    cout << "Факториал числа " << n << " равен " << factorial;
    return 0;
}