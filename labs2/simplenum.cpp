#include <iostream>

using namespace std;

/*
 * функция проверки числа на "простоту"
 */
int check_val(int val) {
    if (val==0) return 0;
    if (val==1) return 1;
    if (val==2) return 0;
    for (int i = 2; i <= val-1; i++) {
        if (val % i == 0) return 0;
    }
    return 1;
}

int main() {
    int count; //число пользователя
    cin >> count;
    for (int i=0;i<count;i++){
        if (check_val(i)) cout << i << endl;
    }
}