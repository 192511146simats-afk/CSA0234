#include <stdio.h>
#include <math.h>
struct point{
float x,y;
int sqrt;
};
int main(){
struct point p;
float distance;
printf("Enter the two points:");
scanf("%f %f",&p.x,&p.y);
distance=sqrt(p.x*p.x+p.y*p.y);
printf("The point is:%.2f %.2f\n",p.x,p.y);
printf("The distance from origin is:%.2f",distance);
return 0;
}
/*
#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

int main() {
    struct Distance d1, d2, sum;

    printf("Enter first distance (feet inches): ");
    scanf("%d %f", &d1.feet, &d1.inches);
    printf("Enter second distance (feet inches): ");
    scanf("%d %f", &d2.feet, &d2.inches);

    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    // normalize if inches ≥ 12
    if (sum.inches >= 12) {
        sum.feet++;
        sum.inches -= 12;
    }

    printf("Total Distance: %d feet %.2f inches\n", sum.feet, sum.inches);
    return 0;
}
*/
