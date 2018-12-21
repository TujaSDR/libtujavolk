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
#include <volk/volk.h>

//void volk_32fc_iqsum_32f_neon(float* outputVector, const lv_32fc_t* inputVector, unsigned int num_points);

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

// float32 to int16_t (the counterpart is already in libvolk)
void volk_32f_s32f_convert_16i_neon(int16_t* outputVector,
                               const float* inputVector,
                               const float scalar,
                               unsigned int num_points);


// TODO write an add I+Q thing

#endif /* tujavolk_h */
