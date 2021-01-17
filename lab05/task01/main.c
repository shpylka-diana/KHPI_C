#define A 16 // первое заданное число
#define B 32 // второе заданое число
int mait () {

	
	
    
	// через цикл for
    
	int result1 = 0;
	for (int i = A; i > 0; ++i){
		if (A % i == 0 && B % i == 0){ // деление первого и вторго числа на первое
			result1 = i;
            break;
		}
	} 

	
	// через цикл while
    int j = A;
    int result2;
	while (j > 0){
		if (A % j == 0 && B % j == 0){ // деление первого и вторго числа на первое
            result2 = j;
            break;
        
        }
		++i;
	} 
	
	

	// через цикл do while
	
	int k = A;
    int result3;
	 do {
		if (A % k == 0 && B % k == 0){ // деление первого и вторго числа на первое
            result3 = j;
            break;
        }
		++k;
	} while (k > 0);

return 0;
}
