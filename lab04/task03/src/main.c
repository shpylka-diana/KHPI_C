int main(){

int k = 9;
int m = 35;
int n = 12;
int temp = 0;
if(k > m){
 temp = k;
 k = m;
 m = temp;
}
if (m > n){
    temp = m;
    m = n;
    n = temp;
}
if(k > m){
    temp = k;
    k = m;
    m = temp;
}
return 0;
}

