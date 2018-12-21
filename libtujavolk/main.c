//
//  main.c
//  libtujavolk
//
//  Created by Albin Stigö on 2018-12-21.
//  Copyright © 2018 Albin Stigo. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#include "include/tujavolk.h"
#include <volk/volk.h>

int main(int argc, const char * argv[]) {
    printf("Hello, World!\n");

    const int N = 103;
    
    int32_t in[N];
    int16_t out16[N];
    float out[N];
    int32_t outi[N];
    for (int i = 0; i < N; i++) {
        in[i] = 2.;
    }

    volk_32i_s32f_convert_32f_neon(out, in, -1, N);

    printf("%d %d %d %d\n", in[0], in[10], in[20], in[N-1]);
    printf("%f %f %f %f\n", out[0], out[10], out[20], out[N-1]);

    volk_32f_s32f_convert_32i_neon(outi, out, 1.0, N);
    
    printf("%d %d %d %d\n", outi[0], outi[10], outi[20], outi[N-1]);
    
    volk_32f_s32f_convert_16i_neon(out16, out, 1.0, N);
    
    printf("%d %d %d %d\n", out16[0], out16[10], out16[20], out16[N-1]);
    
    return 0;
}
