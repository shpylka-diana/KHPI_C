#define NUM 546
int main()
{
    float a = NUM / 100; // первое число 5
    float b = NUM % 10; // третье число
    float c = a / b; 
    float result = ((float)(((int)(c * 100)) / 100.0));

return 0;
}
