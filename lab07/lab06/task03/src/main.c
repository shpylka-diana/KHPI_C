#include <stdlib.h>
#include <time.h>
#include <stdarg.h>

int compareNum(int count, ...);

int copyNum(int num, char numAsString[], int iStart) {/* исходя из того, что за цифра, выделяем количество элементов в массиве для записи названия числа  */
	char one[3] = {'o','n','e'};
	char two[3] = {'t','w','o'};
	char three[5] = {'t','h','r','e','e'};
	char four[4] = {'f','o','u','r'};
	char five[4] = {'f','i','v','e'};
	char six[3] = {'s','i','x'};
	char seven[5] = {'s','e','v','e','n'};
	char eight[5] = {'e','i','g','h','t'};
	char nine[4] = {'n','i','n','e'};
	switch (num) {
		case 1:
			iStart = copyOne(numAsString, iStart, one, 3);
			break;
		case 2:
			iStart = copyOne(numAsString, iStart, two, 3);
			break;
		case 3:
			iStart = copyOne(numAsString, iStart, three, 5);
			break;
		case 4:
			iStart = copyOne(numAsString, iStart, four, 4);
			break;
		case 5:
			iStart = copyOne(numAsString, iStart, five, 4);
			break;
		case 6:
			iStart = copyOne(numAsString, iStart, six, 3);
			break;
		case 7:
			iStart = copyOne(numAsString, iStart, seven, 5);
			break;
		case 8:
			iStart = copyOne(numAsString, iStart, eight, 5);
			break;
		case 9:
			iStart = copyOne(numAsString, iStart, nine, 4);
			break;
		}
	return iStart;
}


void fillStr(char numAsString[], int numIn) {// заполняем массив названиями числа и разряда
	short size = 0;
	int num = numIn;
	char thousand[10] = {' ','t','h','o','u','s','a','n','d',' '};
	char hundred[9] = {' ','h','u','n','d','r','e','d',' '};
	char decade[8] = {' ','d','e','c','a','d','e',' '};
	int cond = 0;

	for (int i = 10000; i > 0; i /= 10) {// опридиляем разрядность заданного числа
		if (num > 0) {
			cond = num % i;
			if (cond != num) {
				size++;
			}
			num %= i;
		}
	}

	num = numIn;
	int iStart = 0;

	if (size == 4) {
		num = numIn / 1000;
		iStart = copyNum(num, numAsString, iStart);//число
		iStart = copyOne(numAsString, iStart, thousand, 10);//розряд
		size--;
		num = numIn % 1000;
	}
	if (size == 3) {
		num = numIn / 100 % 10;
		iStart = copyNum(num, numAsString, iStart);
		iStart = copyOne(numAsString, iStart, hundred, 9);
		size--;
		num = numIn % 100;
	}

	if (size == 2) {
		num = numIn / 10 % 10;
		iStart = copyNum(num, numAsString, iStart);
		iStart = copyOne(numAsString, iStart, decade, 8);
		size--;
		num = numIn % 10;
	}

	if (size == 1) {
		num = numIn % 10;
		iStart = copyNum(num, numAsString, iStart);
		numAsString[iStart] = '\0';
	}
}


int main() {
	srand(time(0));
	int numIn = rand() % 9999 + 1;
	char arr[50] = {0};/* все действия в функции будут проходить с этим массивом */
	fillStr(arr, numIn);
	
	

	int compare;
	int count = 3;
	compare = compareNum(count, 1, 3, 2);
	return 0;
	}

	int copyOne(char numAsString[], int iStart, char numStr[], int sizeWord) {/* массив переписывает нужные значения в результирующий массив (числительное или разряд) начиная с первого незаполненного элемента */
	for (int t = 0; t < sizeWord; t++) {
		numAsString[iStart] = numStr[t];
		iStart++;
	}
	return iStart;// после любого заполнения элемента следующее заполнения начинается с пустого элемента
}


int compareNum(int count, ...) {
	va_list ap;
	int j;
	int num = 0;
	int resultCompareNums = 0;
	va_start(ap, count);
	for (j = 0; j < count; j++) {
		if (num < va_arg(ap, int)) {
			resultCompareNums++;
		}
	}
	va_end(ap);

	return resultCompareNums;
}
