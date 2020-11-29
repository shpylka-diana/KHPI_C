#define NUM 546
int main()
{
    float a = NUM / 100; // первое число
    float b = NUM % 10; // третье число
    float c = a / b; // во сколько раз первая цифра больше третьей
    float result = ((float)(((int)(c * 100)) / 100.0)); // обрезання до второй цифры

return 0;
}
