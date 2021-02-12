#include <stdio.h>
#include <time.h>

int compare_nums(int num);

int main() {
	srand(time(NULL));
	
	int num = rand() % 899999 + 100000;// генерация псевдорандомного числа 
	
	int result = compare_nums(num);// функция сравнивает две половины числа
	

	return 0;
}

int compare_nums(int num) {
	int sum_half1 = 0;
	for (int i = 1000; (num / i) > 0; i *= 10) { /* цикл отделяет первые три цифры данного числа и грустит их, находим первое число "счастливого" билета */
		sum_half1 += num / i  % 10;
	}
	
	int half = num % 1000;
	int sum_half2 = 0;
	for (int j = 1; (half / j) > 0; j *= 10) { /* цикл отделяет последние три цифры данного числа и грустит их, находим второе число "счастливого" билета */
 		sum_half2 += half / j % 10;
	}
	
	
	
	int temp1_while = 1000; // переменная, отделяет первые три цифры данного числа, чтобы грустить их в цикле
	int num123_while = 0;
	while ((num / temp1_while) > 0) {
		num123_while += num / temp1_while  % 10;
		temp1_while *= 10;
	}
	int temp2_while = 1; // переменная, отделяет последние три цифры данного числа, чтобы грустить их в цикле 
	int num456_while = 0;
	while ((half / temp2_while)  > 0) {
		num456_while += half / temp2_while % 10;
		temp2_while *= 10;
	}
	
	
	
	int temp1_do = 1000; // переменная, отделяет первые три цифры данного числа, чтобы грустить их в цикле
	int num123_do = 0;
	
	do {
		num123_do += num / temp1_do  % 10;
		temp1_do *= 10;
	} while ((num / temp1_do) > 0);
	int temp2_do = 1; // переменная, отделяет последние три цифры данного числа, чтобы грустить их в цикл
	int num456_do = 0;
	do {
		num456_do += half / temp2_do % 10;
		temp2_do *= 10;
	} while ((half / temp2_do)  > 0);
	
	int result = -1;
	
	

	if (sum_half1 == sum_half2 && num123_while == num456_while && num123_do == num456_do) { // сравнение двух полученных чисел
 		result = 1; // если билет "счастливый"
 		
 		
	} else {
		result = -1;// если билет не "счастливый"”
		
		
	}
	
	return result;
}
