#include <stdlib.h>
#include <time.h>
#define LENOUT 15

void get_center(char strIn[], char zap, int lenIn);

int main() {
	srand(time(NULL));
	
	int x = 97;
	char zap = '_';
	int y = 122;
		
	int range_for_rand;// с заданый чисел для рандома определить, что есть количеством чисел в диапазоне,  а что есть в "отступе" от нуля
	int min_number_of_range;
	if (x < y) {
		range_for_rand = y - x + 1;
		min_number_of_range = x;
	} else if (y < x) {
		range_for_rand = x - y + 1;
		min_number_of_range = y;
	}
	int const lenIn = 5;// длинна слова
	char strIn[lenIn];// массив из слова
	

	for (int i = 0; i < lenIn - 1; i++) {
		strIn[i] = rand() % range_for_rand + min_number_of_range;// рандомное заполнение массива
	}
	strIn[lenIn - 1] = '\0';


	char strIn2[lenIn];
	
	for (int i = 0; i < lenIn - 1; i++) {
		strIn2[i] = rand() % range_for_rand + min_number_of_range;
	}
	strIn2[lenIn - 1] = '\0';


	get_center(strIn, zap, lenIn);// функция меняет параметры внутри себя, но ничего не возвращает
	get_center(strIn2, zap, lenIn);
	return 0;
}


void get_center(char strIn[], char zap, int lenIn) {// функция, которая центрует заданое слово

	char strResult[LENOUT];
	int lenZap = LENOUT - lenIn;// количество элементов в массиве, выделеный на заполнитель
	int halfLenZap = lenZap / 2;// количество заполнителей перед заданой строкой

	for (int i = 0; i < halfLenZap; i++) {// в начало результирующего массива ставим необходимое количество заполнителей
		strResult[i] = zap;
	}

	for (int i = halfLenZap; i < halfLenZap + lenIn - 1;) {// вставим заданый в начале текст по центру результирующего массива 
		for (int j = 0; j < lenIn; j++) {
			strResult[i] = strIn[j];
			i++;
		}
	}

	for (int i = (halfLenZap + lenIn - 1); i < LENOUT - 1; i++) {// добавим у результирующий массив заполнитель до его конца 
		strResult[i] = zap;
	}
	
	strResult[LENOUT - 1] = '\0';// массив должен заканчиваться на '\0'
	if (lenIn % 2 == 1) {
		strResult[LENOUT - 2] = '\0';
	}
}

