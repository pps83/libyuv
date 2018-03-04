/*
 *  Copyright 2012 The LibYuv Project Authors. All rights reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS. All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef INTERNAL_H_
#define INTERNAL_H_

#include <stdint.h>

// Used by ScalePlaneBilinearUp/ScalePlaneBilinearUp_16/ScaleARGBBilinearUp
#define FILTER_COLS(ScaleFilterCols, T, rowptr, edge, src, dst_width, x, dx) \
  do                                                                         \
  {                                                                          \
    for (int i = 0; i < edge; ++i) {                                         \
      ((T*)(rowptr))[i] = ((T*)src)[0];                                      \
    }                                                                        \
    ScaleFilterCols((rowptr) + sizeof(T) * edge, src, dst_width, x, dx);     \
    for (int i = 0; i < edge; ++i) {                                         \
      ((T*)(rowptr))[edge + dst_width + i] =                                 \
        ((T*)src)[dx > 0 ? src_width - 1 : -(src_width - 1)];                \
    }                                                                        \
  } while (0) /**/


#endif /* INTERNAL_H_ */
