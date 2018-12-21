//
//  tujavolk.h
//  libtujavolk
//
//  Created by Albin Stigö on 2018-12-21.
//  Copyright © 2018 Albin Stigo. All rights reserved.
//

#ifndef tujavolk_h
#define tujavolk_h

#include <stdint.h>

// int32_t to float32
void volk_32i_s32f_convert_32f_neon(float* outputVector,
                                    const int32_t* inputVector,
                                    const float scalar,
                                    unsigned int num_points);

// float32 to int32_t
void volk_32f_s32f_convert_32i_neon(int32_t* outputVector,
                                    const float* inputVector,
                                    const float scalar,
                                    unsigned int num_points);

/* ALREADY NEON in libvolk
void volk_16i_s32f_convert_32f(float* outputVector,
                               const int16_t* inputVector,
                               const float scalar,
                               unsigned int num_points);
*/

// float32 to int16_t
void volk_32f_s32f_convert_16i_neon(int16_t* outputVector,
                               const float* inputVector,
                               const float scalar,
                               unsigned int num_points);


#endif /* tujavolk_h */
