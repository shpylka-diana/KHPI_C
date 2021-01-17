#define L 15 // количество символов
int main()
{
	char zap = ('_'); // указываем заполнитель
	char str1[] = "Ivanov"; // заданное слово
	char strRes[L];
	int lenIn = 0; // количестов элементов исходного массива

	for (int i = 0; ; i++) { // нахождение размера заданого слова,
		if (str1[i] == '\0') { //  '\0' - завершает действие
			break;
		}
		else if (str1[i] != 0) {
			lenIn++;
		}
	}

	int lenzap = L - lenIn; // высчитываем количество символов
	int halfzap = lenzap / 2; // количество символов перед текством

	for (int i = 0; i <= L; i++) { // заполняем весь массив заполнителем
		strRes[i] = zap;
	}
	
	for (int i = halfzap; i < (halfzap + lenIn); ) { // записываем текст в центр
		for (int j = 0; j < lenIn; j++) {
			strRes[i] = strIn[j];
			i++;
		}
	}

	return 0;
}
