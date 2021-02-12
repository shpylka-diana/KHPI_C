#include <stdlib.h>
#include <time.h>

void get_prime_num_array(int len, int PD, int KD);


int main() {
	int const PD = 1;// начало диапазона для нахождения простых чисел 
	int const KD = 50;// конец диапазона для нахождения простых чисел 
	srand(time(NULL));
	int len = rand() % 101 + 10;// определяем длинну результирующего массива 
	get_prime_num_array(len, PD, KD);// функция ничего не возвращает
	return 0;
}

void get_prime_num_array(int len, int PD, int KD) {
	int prime[len]; // = {0};//результирующий массив заполненый нулями
	int j = 0;
	for (int diap = PD; diap < KD; diap++ ) {//в заданом диапазоне вводим переменную чтобы определить есть ли число простым 
		int flag = 0;
		for (int i = 2; i < diap; i++) {// если число делиться нацело чатябы на какое-то число меньшее чем оно, оно не может быть простым 
			if (diap % i == 0) {
				flag = 0;//false
				break;
			} else {
				flag = 1;//true
				
			}
		}
		if (flag == 1) {
			prime[j] = diap;//если число простое - вписываем его в массив 
			j++;
		}
	}

}
