#include <iostream>

int main() {
    int startDigit [4];
    int productDigit [4];

    for(int num1 = 10; num1 <= 99; num1++) { //обход первых 2х чисел

        for(int num2 = num1; num2 <= 99; num2++) { //обход последних 2х чисел

            int product = num1 * num2; //перемножаем

            startDigit[0] = num1 / 10; //1 число
            startDigit[1] = num1 % 10; //2 число
            startDigit[2] = num2 / 10; //3 число
            startDigit[3] = num2 % 10; //4 число

            productDigit[0] = product / 1000;  //1 число в рез-те перемножения
            productDigit[1] = (product % 1000) / 100; //2 число в рез-те перемножения
            productDigit[2] = product % 1000 % 100 / 10; //3 число в рез-те перемножения
            productDigit[3] = product % 1000 % 100 % 10; //4 число в рез-те перемножения

            int count = 0;
            for(int x = 0; x < 4; x++) //первый цикл обхода
                for(int y = 0; y < 4; y++) {//второй цикл обхода
                    if(productDigit[x] == startDigit[y]) { //сверяет каждое число из перемножения с "оригинальным"
                        count++; //если нашли - плюсуем
                        productDigit[x] = -1; //чтобы не допустить повторого использования ставим число, которое не существует
                        startDigit[y] = -2; //чтобы не допустить повторого использования ставим число, которое не существует
                        if(count == 4) { //если все 4 числа совпали - выводим
                            std::cout << num1 << " * " << num2 << " = " << product << std::endl ;
                        }
                    }
                }
        }
    }
    return 0;
}
