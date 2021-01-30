#define SAZE 5

int main()
{
	int arrIn[SAZE][SAZE]; // обьявление входного массива размером saze x saze
	int arrOut[SAZE][SAZE]; // обьявление результирующего массива
	
	for(int i = 0; i < SAZE; i++) { // заполнение массива
		for (int j = 0; j < SAZE; j++) {
			arrIn[i][j] = i * SAZE + j;
		}
	}	
	
	for (int j = 0; j < SAZE; j++) { // сдвиг элементов в один знак в право
		for (int k = 0; k < SAZE; k++) {
			arrOut[j][k] = arrIn[j][k+1];
		}
		arrOut[j][SAZE-1] = arrIn[j][0];
	}
return 0;
}
