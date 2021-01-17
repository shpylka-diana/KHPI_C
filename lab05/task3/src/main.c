#define TICKET 300300 // номер билета
int main()
{
	int n1 = 0;
	int n2 = 0;
	int half1 = Ticket / 1000;
    
    
		// цикл через for
    int result1;
	for (int a = 1000; (Ticket / a) > 0; a *= 10) {
		n1 += Ticket / a % 10;
	}
	for (int b = 1; (half1 / b) > 0; b *= 10) {
		n2 += Ticket / b % 10;
	}
	
	
		// цикл через While
	int n1While = 0;
	int n2While = 0;	
	
	int c = 1000;
	int d = 1; 
	int result2;
	while ((Ticket / c) > 0) { 
		n1while += Ticket / c % 10;
		c *= 10;
	}
	while ((half1 / d) > 0) {
		n2while += Ticket / d % 10;
		d *= 10;
	}
	
	
		// цикл через Do While
	int n1DoWhile = 0;
	int n2DoWhile = 0;
	
	int e = 1000;
	int f = 1;
	int result3;
	do {
		n1DoWhile += Ticket / e % 10;
		e *= 10;
	} while ((Ticket / e) > 0);
	do { 
		n2DoWhile += Ticket / f % 10;
		f *= 10;
	} while ((half1 / f) > 0);
	
		// Проверка 
	int result1 = 0;
	int result2 = 0;
	int result3 = 0;
		// Проверка через For
	if (n1 == n2) {
		result1 = 1;
	}
		// Проверка через While
	if (n1While == n2While) {
		result2 = 1;
	}
		// Проверка через Do While
	if (n1DoWhile == n2DoWhile) {
		result3 = 1;
	}
		
	return 0;
}
