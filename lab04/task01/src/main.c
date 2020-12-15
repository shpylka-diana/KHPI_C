#define PI 3.14
#define R 7
int main()
{
	char key = 'l';
	float result;
	switch(key){
		case 'l': result = 2 * PI * R;
		break;
		case 's': result = PI * R * R;
		break;
		case 'v': result = (4.0 / 3.0) * PI * R * R * R; 
		break;
		default: R;
		
	}

return 0;
}

