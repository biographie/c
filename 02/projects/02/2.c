#include <stdio.h>
#define PI 3.14159f
int main(void){
    int radius = 10;
    float volume;
    volume = 4.0f/3.0f * radius * radius * radius;
    printf("The volume of a sphere with a 10-meter radius is %f\n", volume);
    return 0;
    
}