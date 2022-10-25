#include <stdio.h>
#define PI 3.14159f
int main(void){
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    float volume;
    volume = 4.0f/3.0f * radius * radius * radius;
    printf("The volume of a sphere with a %.1f meter radius is %.2f cubic meters\n", radius, volume);
    return 0;
}