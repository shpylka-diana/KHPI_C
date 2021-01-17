#define A 5
int main()
{
	
		// цикл через For
		
	int sum1 = 0;
	int result1;
	int temp1;
	for (int i = 1; i < A; i++) { 
		temp1 = A % i;
		if (temp1 == 0) {
			sum1 += i;
		}
	} 
	if (sum1 == A) {
		result1 = 0; // 0 - число совершенное
	} else if (sum1 != A) {
		result1 = 1; // 1 - число не совершенное
	}
	
	
	
		// цикл через While
		
	int sum2 = 0;
	int result2;
	int temp2;
	int j = 1;
	while (j < A) {
		temp2 = A % j;
		if (temp2 == 0) {
			sum2 += j;
		}
		j++;
	}
	if (sum2 == A) {
		result2 = 0; // 0 - число совершенное
	} else if (sum2 != A) {
		result2 = 1; // 1 - число не совершенное
	}
	
	
	
		// цикл через Do While
		
	int sum3 = 0;
	int result3;
	int temp3;
	int k = 1;
	do {
		temp3 = A % k;
		if (temp3 == 0) {
			sum3 += k;
		}
		k++;
	} while (k < A);
	if (sum3 == A) {
		result3 = 0; // 0 - число совершенное 
	}else if (sum3 != A)
	{
		result3 = 1; // 1 - число не совершенное
	}
	return 0;
}
