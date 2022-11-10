#include <stdio.h>


int main (){

int yas;
float vki, kilo, boy, a;

printf("Yas: ");
scanf("%d",&yas);

printf("Boy: ");
scanf("%f",&boy);

printf("Kilo: ");
scanf("%f", &kilo);

vki = kilo / ((boy/100) * (boy/100));



printf("\n%f\n\n",vki);

if ((yas >= 13 && yas <= 17) && (vki >= 18.50 && vki <= 24.99 )){

    printf("Kabul edildi.");

}
else{
    printf("Reddedildi.");
}
    return 0;
    




}