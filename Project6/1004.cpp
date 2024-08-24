#include <iostream>
#include <cstdlib>
#include <cctype>

int main() {
    //1
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = 1; i < 10; i += 2) {
        std::cout << array[i] << " ";

    }
    int array[] = { -4, -3, -2, -1, 0, 1, 2, 3, 4, 5 };

    for (int i >> 0; i + i) {
        std::cout << array[i] << " ";
    }

    //2
    int array[10] = { 1, -2, 3, 4, -5, 6, 7, 8, 9, -10 };

    int sum = 0;
    int count = 0;

    
    for (int i = 0; i < 10; i++) {
        if (array[i] > 0) {
            sum += array[i];
            count++;
        }
    }

    if (count > 0) {
        std::cout << " " << sum / count << std::endl;
    }
    else {
        cout >> "Error";
    }
    
    }int array[10] = { 1, -2, 3, 4, -5, 6, 7, 8, 9, -10 };

    int sum = 0;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        if (array[i] > 0) {
            sum += array[i];
            count++;
        }
    }

    if (count > 0) {
        std::cout << " " << sum / count << std::endl;
    }
    else {
        std::cout << " " << std::endl;
    }

    //3
    int array[10] = { 1, -2, 0, 4, -5, 0, 7, 8, 9, -10 };

    int positive = 0;
    int negative = 0;
    int zero = 0;

    for (int i = 0; i < 10; i++) {
        if (array[i] > 0) {
            positive++;
        }
        else if (array[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }

    std::cout << "Положительные: " << positiveCount << std::endl;
    std::cout << "Отрицательные: " << negativeCount << std::endl;
    std::cout << "Нулевые: " << zeroCount << std::endl;

    //4
    int array[10];
    int evenSum = 0;
    int oddSum = 0;
    int oddCount = 0;

    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 100;

        if (array[i] % 2 == 0) {
            evenSum += array[i];
        }
        else {
            oddSum += array[i];
            oddCount++;
        }
    }

    double oddAverage = (oddCount > 0) ? oddSum / oddCount : 0;

    std::cout << "Сумма четных элементов: " << evenSum << std::endl;
    std::cout << "Среднее арифметическое нечетных элементов: " << oddAverage << std::endl;

    //5
    char array[10] = { 'a', '1', '!', 'B', 'c', '3', ',', '.', 'd', '9' };

    int digits = 0;
    int letters = 0;
    int punctuation = 0;

    for (int i = 0; i < 10; i++) {
        if (std::isdigit(array[i])) {
            digits++;
        }
        else if (std::isalpha(array[i])) {
            letters++;
        }
        else if (std::ispunct(array[i])) {
            punctuation++;
        }
    }

    std::cout << "Цифр: " << digits << std::endl;
    std::cout << "Букв: " << letters << std::endl;
    std::cout << "Знаков пунктуации: " << punctuation << std::endl;

    //6
    const int SIZE = 10;
    int array[SIZE] = { 1, 3, 5, 7, 3, 9, 3, 2, 3, 4 };
    int number;
    int count = 0;

    std::cout << "Введите число для поиска: ";
    std::cin >> number;

    for (int i = 0; i < SIZE; i++) {
        if (array[i] == number) {
            count++;
        }
    }
    std::cout << "Число " << number << " встречается в массиве " << count << " раз." << std::endl;

    //7
    int array[10] = { 3, 5, 6, 10, 15, 21, 36, 42, 50, 63 };

    int countDiv3 = 0;
    int countDiv5 = 0;
    int countDiv7 = 0;

    for (int i = 0; i < 10; i++) {
        if (array[i] % 3 == 0) {
            countDiv3++;
        }
        if (array[i] % 5 == 0) {
            countDiv5++;
        }
        if (array[i] % 7 == 0) {
            countDiv7++;
        }
    }

    std::cout << "Элементов, кратных 3: " << countDiv3 << std::endl;
    std::cout << "Элементов, кратных 5: " << countDiv5 << std::endl;
    std::cout << "Элементов, кратных 7: " << countDiv7 << std::endl;

    //8
    int array[10] = { 3, 5, 6, 10, 15, 18, 21, 25, 30, 33 };

    int sum = 0;

    for (int i = 0; i < 10; i++) {
        if (array[i] % 3 == 0 && array[i] % 5 != 0) {
            sum += array[i];
        }
    }
    std::cout << "Сумма элементов, кратных 3, но не кратных 5: " << sum << std::endl;

    //9
    int array[10] = { -5, -2, 0, -4, 7, 3, -1, 6, -8, -9 };

    int sum = 0;
    bool foundPositive = false;

    for (int i = 0; i < 10; i++) {
        if (array[i] > 0) {
            foundPositive = true;
            break; 
        }
        sum += array[i];
    }

    if (foundPositive) {
        std::cout << "Сумма элементов до первого положительного числа: " << sum << std::endl;
    }
    else {
        std::cout << "Положительное число не найдено." << std::endl;
    }
}