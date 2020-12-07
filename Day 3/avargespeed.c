#include <stdio.h>
int main()
{
    float time, distance, speed, time2, distance2, speed2;
    printf("Enter the speed s1: ");
    scanf("%f", &speed);
    printf("Enter the time t1: ");
    scanf("%f", &time);
    distance = time * speed;
    printf("distance is %.2f m/s \n", distance);

    printf("Enter the speed s2: ");
    scanf("%f", &speed2);
    printf("Enter the time t2: ");
    scanf("%f", &time2);
    distance2 = time2 * speed2;
    printf("distance is %.2f m/s \n", distance2);

    printf("Avarage speed of car %.2f", (distance + distance2) / (time + time2));
}