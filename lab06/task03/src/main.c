int main()
{
	int a = 3231; // Задане число
	char numResult[47] = {0};
	short size = 0;
	
	char zero[4] = {'z','e','r','o'};
	char one[3] = {'o','n','e'};
	char two[3] = {'t','w','o'};
	char three[5] = {'t','h','r','e','e'};
	char four[4] = {'f','o','u','r'};
	char five[4] = {'f','i','v','e'};
	char six[3] = {'s','i','x'};
	char seven[5] = {'s','e','v','e','n'};
	char eight[5] = {'e','i','g','h','t'};
	char nine[4] = {'n','i','n','e'};
	
	char decade[8] = {' ','d','e','c','a','d','e',' '};
	char hundred[9] = {' ','h','u','n','d','r','e','d',' '};
	char thousand[10] = {' ','t','h','o','u','s','a','n','d',' '};
	
	int num = a;
int iStart = 0;
	
	for (int i = 10000; i > 0; i /= 10) { // укажем количество символов в NUM и запишем в количество  size
			if ((num % i) != num) {
				size++;
			}
			num %= i;
		}
	}
	
	if (size == 4) { // если size == 4 , т.е. заданое число 4-х значное - запишем в тысячи
		num = a / 1000;
		switch (num) {
		case 1: 
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2: 
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3: 
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4: 
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5: 
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6: 
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7: 
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8: 
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9: 
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;	
		}
		for (int th = 0; th < 10; th++, iStart++) { // добавим часть THOUSAND
			numResult[iStart] = thousand[th];
		}
		size--; // вычитаем с size 1, т.е. переходим на сотни
		num = a % 1000;
	}
	
	if (size == 3) {// если size == 3 - запишем в сотни
		num = num / 100;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		for (int h = 0; h < 9; h++, iStart++) { //добавим часть HUNDRED
			numResult[iStart] = hundred[h];
		}
		size--; // вычитаем с части size 1, т.е. переходим на десятки
		num = a % 100;
	}
	
	if (size == 2) { // если size == 2 - запишем в десятки
		num = num / 10;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		for (int d = 0; d < 8; d++, iStart++) { // добавим часть DECADE
			numResult[iStart] = decade[d];
		}
		size--; // вычитаем с части size 1, т.е. переходим на еденицы
	}
	
	if (size == 1) { // если size == 1 - запишем в еденицы
		num = a % 10;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		numResult[iStart] = '\0'; // конец массива
	}
	
	if (size == 0) { // если size == 0 запишем в ноль
		switch(num) {
		case 0:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = zero[t];
				iStart++;
			}
			break;
		}
	}
		
	return 0;
}

