#define L 20 // Розмір масива

int main()
{
	int Result1[L]; 
	int limit = 100; // диапазон поиска
	int i,j,check,k; 
	
	for (int i = 2; i < limit; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				check = 1;  // если check = 1 - число не простое
				break;
			} else {
				check = 0;	// если check = 0 - число простое
			}
		}
		
		if (check == 0) { // Число простое - записываем его в массив, если число не простое - пропускаем
			Result1[k] = i;
			k++;
			
		}
	}
	
	return 0;
}
