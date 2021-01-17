#define A 22// заданное число
int main ()
{
    
		// цикл через FOR
    
	int resultA = 0;
	
	for (int i = 2; i < A; i++) { // условие цикла
		if (A % i == 0) { // проверка на простое число
			resultA = 1; // число не простое
		}
	}
	
	
	
		// цикл через While
		
	int resultB = 0;
	int j = 2;
	
	while (j < A) { 
		if (A % j == 0) { 
			resultB = 1; 
		}
		i++;
	}
	
	
	
		// цикл через Do While
		
	int resultC = 0;
	int k = 2;
	
	do {
		if (A % k == 0) { 
			resultC = 1; 
		}
		k++;
	} while (k < A); // увеличивать на 1 пока k меньше А
    
return 0;
}
