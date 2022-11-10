#include <stdio.h>
#include <stdlib.h>
int main() {

int alesp, ydilp, mort, sirap;

printf("ALES puani: ");
scanf("%d",&alesp);

printf("Yabanci dil puani: ");
scanf("%d",&ydilp);

printf("Mezuniyet ortalamasi: ");
scanf("%d",&mort);

sirap = (alesp * 1/2) + (ydilp*1/4) + (mort * 1/4);

printf("%d ",sirap);

if (sirap >= 60){
    printf("Siralamaya girebilir.");
}
else{
    printf("Siralamaya giremez.");
}

   return 0;
   
}