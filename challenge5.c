#include <stdio.h>
#include <math.h>
int main (){
    int x1,y1,x2,y2 ;
    float distance;

    printf("Entrer x1: ");
    scanf("%d",&x1);
    printf("Entrer y1: ");
    scanf("%d",&y1);
    printf("Entrer x2: ");
    scanf("%d",&x2);
    printf("Entrer y2: ");
    scanf("%d",&y2);

    distance = sqrt(pow((x2 - x1), 2)+pow((y2 - y1), 2));

    printf("la distance entre (x1,y1)et(x2,y2) est: %.2f", distance);

    return 0;
}