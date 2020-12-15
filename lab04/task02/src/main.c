#define NUM 536.827
int main(){
    int leftpart = NUM; // целая часть числа 
    int rightpart = (NUM - leftpart) * 1000; // не целая часть
    int temp = 0;
       
    if (leftpart != 0 ){ // проверка деления на ноль 
    float result = rightpart / leftpart;  
    temp = result * 100;
    result = temp / 100;// "обрезание" до второй цифры
    }
return 0;
}
