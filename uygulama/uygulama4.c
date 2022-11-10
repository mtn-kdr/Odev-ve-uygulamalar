#include <stdio.h>
#include <stdlib.h>
int main() {

    float n, k, islem, sonuc;

    printf("Sayi giriniz: ");
    scanf("%f",&n);
   
   
    for(k=1;k<=n;k++){
        islem=(k*k+1.23)/(k-0.25);
        islem +=sonuc;
        sonuc = islem;
    }   

    printf("Sonuc: %f",sonuc);

    

   return 0;
}