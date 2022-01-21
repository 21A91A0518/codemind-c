#include <stdio.h>
#include <math.h>

int main(){
    float sideOne, sideTwo, sideThree, s, area;
    scanf("%f %f %f", &sideOne, &sideTwo, &sideThree);
    /* Area of any triangle = 
       sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree))
       Where s = (sideOne + sideTwo + sideThree)/2  */
    s = (sideOne + sideTwo + sideThree)/2;
    area = sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree));
    printf("%0.2f
", area);
     
    return 0;
}