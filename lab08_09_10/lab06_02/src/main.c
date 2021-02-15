/**
 * @mainpage
 * # Загальне завдання
 * 1. **Переробити** програми, що були розроблені під час виконання лабораторних робіт з тем "Масиви" та "Цикли" таким чином, щоб 
 * використовувалися функції для обчислення результату.
 *
 * # Індивідуальне завдання
 * **Розробити** програму яка заповнюе масив із кількості елементів простими числами, що не повторюються
 *
 * @author Shpylka D.
 * @date 17-jan-2021
 * @version 1.0
 */

#include <stdlib.h>
#include <time.h>

void get_prime_num_array(int len, int PD, int KD);

/**
 * @param PD  -  початок діапазону, заданий випадковим числом
 * @param KD - кінець діапазону, заданий випадковим числом
 * @param len - розмір масиву
 */

int main() {
	int const PD = 1; 
	int const KD = 50;
	
	
	srand(time(NULL));
	int len = rand() % 101 + 10; 
	get_prime_num_array(len, PD, KD); 
	return 0;
}

/**
 * @param prime - результуючий массив заповнений нулями
 * @param flag - тимчасова змінна
 */
void get_prime_num_array(int len, int PD, int KD) {
	int prime[len]; 
	int j = 0;
	for (int diap = PD; diap < KD; diap++ ) { 
		int flag = 0;
		for (int i = 2; i < diap; i++) { 
			if (diap % i == 0) {
				flag = 0;
				break;
			} else {
				flag = 1;
				
			}
		}
		if (flag == 1) {
			prime[j] = diap;
			j++;
		}
	}

}
