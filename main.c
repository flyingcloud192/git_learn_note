#include "head/clock.h"
#include "head/pin_mux.h"
#include<stdio.h>

void main(void){
    init_system_clock();
    init_pin();
    printf("Hello,world\r\n");
}