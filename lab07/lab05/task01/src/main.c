#include <stdlib.h>
#include <time.h>

int get_nod_while(int num1, int num2);// обьявление функции
int get_nod_for(int num1, int num2);
int get_nod_do(int num1, int num2);

int main() {
	srand(time(NULL));

	int x = rand() % 23 + 2;
	int y = rand() % 23 + 2;
	
	int result_while = get_nod_while(x, y);// возвращаем результат функции
	int result_for = get_nod_for(x, y);// возвращаем результат функции
	int result_do = get_nod_do(x, y);// возвращаем резулььат функции

	return 0;
}

get_nod_while(int num1, int num2) {// функция, которая находит нод  с цикла  while do
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
	return result_while;// возвращаем значение в функцию main
}

get_nod_for(int num1, int num2) {// функция, которая находит нод с цикла for
	int nod_for = 0;
	for (; num1 > 0 && num2 > 0;) {
		(num1 > num2) ? (num1 %= num2) : (num2 %= num1);
		nod_for = num1 + num2;
	}
	int result_for = nod_for;
	return result_for;// возвращаем результат у функцию main
}

get_nod_do(int num1, int num2) {// функция, которая находит нод с цикла do while
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
	return result_do;// возвращаем результат у функцию main
}
