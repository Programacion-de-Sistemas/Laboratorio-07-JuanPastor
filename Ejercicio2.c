#include <stdio.h>
#include <stdint.h>
int64_t absoluto(int64_t numero){
    if(numero<0){
        return numero - numero - numero;
    }
    else{
        return numero;
    }
}
int mult_ok(int64_t x, int64_t y) {
    int64_t absx = absoluto(x);
    int64_t absy = absoluto(y);
    int64_t contadorx = 0;
    int64_t contadory = 0;
    int64_t auxx = 1;
    int64_t auxy = 1;
    while((auxx-1) <= absx){
        auxx = auxx*2;
        contadorx = contadorx + 1;
    }
     while((auxy-1) <= absy){
        auxy = auxy*2;
        contadory = contadory + 1;
    }
    if(x%2 != 0){
        contadorx--;
    }
    if(y%2 != 0){
        contadory--;
    }
    
    return (contadorx+contadory) < 64;

   
}
int main() {
    int64_t n = mult_ok(9223372036854775, 5);
    printf ("%ld\n", (long)n);

}