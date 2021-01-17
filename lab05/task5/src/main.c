#define A 20 // заданное число
int main() 
{
	
		// цикл через FOR
	int result1 = 0;
	for (int i = 0; i * i <= A; i++) {
		result1 = i;
	}
		// цикл через While
	int result2 = 0;
	int j = 0;
	while (j * j <= A) {
		j++;
		result2 = j - 1;
	}
		// цикл через Do While
	int result3;
	int k = 0;
	do {
		k++;
		result3 = k - 1;
	} while (k * k <= A);
return 0;
}
