#include <stdlib.h>
#include <time.h>

int define_prime_num_for(int num); // предыдущий вызов функции
int define_prime_num_while(int num); // предыдущий вызов функции
int define_prime_num_do(int num); // предыдущий вызов функции


int main() {

	srand(time(0));

	int x = rand() % 26 + 3; // гнерация цисла, к какому будут определяться простые числа 

	int result_for = define_prime_num_for(x);// возвращаем функцию 
	int result_while = define_prime_num_while(x);
	int result_do = define_prime_num_do(x);
	
	return 0;
}

int define_prime_num_for(int num) {
	int temp_for  = 0;
	int result_for = -1;
	for (int i = 2; i < num; i++) {/* если число делится нацело (тоесть остаток от деления =0) на число меньше него то оно сложное */
		temp_for = num % i;
		if (temp_for == 0) {
			result_for = -1;//число сложное
			break;
		} else {
			result_for = 1;//число простое
		}
	}
	return result_for;
}

int define_prime_num_while(int num) {
	int i = 2;
	int temp_while = 0;
	int result_while = -1;
	while (i < num) {
		temp_while = num % i;
		if (temp_while == 0) {
			result_while = -1;//число сложное
			break;
		} else {
			result_while = 1;//число простое
		}
		i++;
	}
	return result_while;
}

int define_prime_num_do(num) {
	int j = 2;
	int temp_do = 0;
	int result_do = -1;
	do  {
		temp_do = num % j;
		if (temp_do == 0) {
			result_do = -1;//число сложное
			break;
		} else {
			result_do = 1;//число простое
		}
		j++;
	} while (j < num);
	return result_do;
}
