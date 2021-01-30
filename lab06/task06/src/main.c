#define SIZE 3 // размер матрицы

int main()
{
	int matrixIn[SIZE][SIZE]; // обьявление массива матриц размером SIZE х SIZE
	int matrixOut[SIZE][SIZE]; // обьявление результирующего массива матриц
	
	for(int i = 0; i < SIZE; i++) { // заполнение массива
		for (int j = 0; j < SIZE; j++) {
			matrixIn[i][j] = i * SIZE + j;
		}
	}
	
	for(int i = 0; i < SIZE; i++) { // умножение матрицы саму на себя
		for (int j = 0; j < SIZE; j++) {
			matrixOut[i][j] = 0;
			for (int k = 0; k < SIZE; k++) {
				matrixOut[i][j] += matrixIn[i][k] * matrixIn[k][j];
			}
		}
	}
	
	return 0;
}
