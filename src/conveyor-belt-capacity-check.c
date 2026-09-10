#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motorCount);
    MOTOR_CAPACITY = motorCount * 12 ;
    printf("How many kg of packages do we expect?\n");
    scanf("%d", &totalPackageWeight);
    if (MOTOR_CAPACITY >= totalPackageWeight) {
        printf("Yes! The conveyor belt can carry the packages\n");
    }
    if (MOTOR_CAPACITY < totalPackageWeight) {
        printf("No. The conveyor belt cannot carry the packages\n");
    }
}
