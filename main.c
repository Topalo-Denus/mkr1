#include <stdio.h>
int main(void){

float X,Y,x1,x2,y1,y2;

printf("\t edit x1-");
scanf("%f",&x1);
printf("\t edit x2-");
scanf("%f",&x2);
printf("\t edit y1-");
scanf("%f",&y1);
printf("\t edit y2-");
scanf("%f",&y2);

X=x2-x1;
Y=y2-y1;
printf ("X=x2-x1,  Y=y2-y1");
printf("\t(X;Y)=(%.1f:%.1f)",X,Y);

return 0;
}