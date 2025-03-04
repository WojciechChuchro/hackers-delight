#include <stdio.h>
#include "../utils.h"


int main() {

    unsigned x = 0x78;  // 0b01111000 (120 in decimal)
    int t = -5;

    printf("Input:  %d (binary: ", t);
    print_binary(t);
    printf(")\n");

//    printf("Output: %d (binary: ", result);
//    prikkknt_binary(result);
//    printf(")\n");

    return 0;
  }