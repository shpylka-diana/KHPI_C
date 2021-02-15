/**
 * @mainpage
 * # Загальне завдання
 * 1. **Переробити** програми, що були розроблені під час виконання лабораторних робіт з тем "Масиви" та "Цикли" таким чином, щоб 
 * використовувалися функції для обчислення результату.
 *
 * # Індивідуальне завдання
 * **Розробити** програму яка визначае найбільший спільнийй дільник для двох заданих чисел.
 *
 * @author Shpylka D.
 * @date 17-jan-2021
 * @version 1.0
 */
#include <stdlib.h>
#include <time.h>

int get_nod_while(int num1, int num2);// обьявление функции
int get_nod_for(int num1, int num2);
int get_nod_do(int num1, int num2);

/**
 * Функция {@link main}
 *
 * Последовательность действий:
 * - Вызов функции для генерации псевдослучайных чисел
 * - Генерация числа для переменной
 * - @brief Вычисления результата через цикл WHILE с помощью функции
 * {@link get_nod_while}
 * - @brief Вычисления результата через цикл FOR с помощью функции
 * {@link get_nod_for}
 * - @brief Вычисления результата через цикл Do с помощью функции
 * {@link get_nod_do}
 *
 * @param x, y - Заданные числа
 * @param result_while - Результат цикла while
 * @param result_for - Результат цикла for
 * @param result_do - Результат цикла do 
 * 
 * @return Успешное завершение программы (0)
 */


int main() {
	srand(time(NULL));

	int x = rand() % 23 + 2;
	int y = rand() % 23 + 2;
	
	int result_while = get_nod_while(x, y);// возвращаем результат функции
	int result_for = get_nod_for(x, y);// возвращаем результат функции
	int result_do = get_nod_for(x, y);// возвращаем резулььат функции

	return 0;
}

/**
 * Функція {@link get_nod_while}
 *
 * Послідовність дій:
 * - порівняння двох чисел між собою
 * - Ділення першого числа на друге
 *
 * Переменные:
 * @param nod_while - Для запису суми
 * @param result_while - Для запису результату
 * @param num1 - перве число
 * @param num2 - друге число
 * 
 * @return результат (result_while)
 */

get_nod_while(int num1, int num2) {
	int nod_while = 0;
	while (num1 > 0 && num2 > 0) {
		if (num1 > num2) {
			num1 %= num2;
		} else if (num1 < num2) {
			num2 %= num1;
		}
	nod_while = num1 + num2;
	}
	int result_while = nod_while;
	return result_while;


/**
 * Функция {@link get_nod_for}
 *
 * Послідосніть дій:
 * - порівняння двох чисел між собою
 * - Ділення першого числа на друге
 *
 * Переменные:
 * @param nod_for - Для записи суммы
 * @param result_for - Для записи результата 
 * @param num1 - первое число
 * @param num2 - второе число
 * 
 * @return результат (result_for)
 */

get_nod_for(int num1, int num2) {
	int nod_for = 0;
	for (; num1 > 0 && num2 > 0;) {
		(num1 > num2) ? (num1 %= num2) : (num2 %= num1);
		nod_for = num1 + num2;
	}
	int result_for = nod_for;
	return result_for;


/**
 * Функция {@link get_nod_do}
 *
 * Послідовнімть дій:
 * - порівняння двох чисел між собою
 * - Ділення першого числа на друге
 *
 * Переменные:
 * @param nod_do - Для запису суми
 * @param result_do - Для запису результату
 * @param num1 - перве число
 * @param num2 - друге число
 * 
 * @return результат (result_do)
 */

get_nod_do(int num1, int num2) {
	int nod_do = 0;
	do {
		if (num1 > num2) {
			num1 %= num2;
		} else if (num1 < num2) {
			num2 %= num1;
		}
	nod_do = num1 + num2;
	} while (num1 > 0 && num2 > 0);
	int result_do = nod_do;
	return result_do;
}
