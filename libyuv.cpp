#ifdef _MSC_VER
#pragma warning(disable: 4244)
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#endif

#include "source/compare.cc"
#include "source/compare_common.cc"
#include "source/compare_win.cc"
#include "source/convert.cc"
#include "source/convert_argb.cc"

#define Abs Abs_1
#include "source/convert_from.cc"
#undef Abs

#define kDither565_4x4 kDither565_4x4_1
#include "source/convert_from_argb.cc"
#undef kDither565_4x4

#include "source/convert_jpeg.cc"
#include "source/convert_to_argb.cc"
#include "source/convert_to_i420.cc"
#include "source/cpu_id.cc"
#include "source/mjpeg_decoder.cc"
#include "source/mjpeg_validate.cc"
#include "source/planar_functions.cc"
#include "source/rotate.cc"
#include "source/rotate_any.cc"
#include "source/rotate_argb.cc"
#include "source/rotate_common.cc"
#include "source/rotate_win.cc"
#include "source/row_any.cc"

#define Abs Abs_2
#include "source/row_common.cc"
#undef Abs

#include "source/row_win.cc"

#define Abs Abs_3
#include "source/scale.cc"
#undef Abs

#include "source/scale_any.cc"

#define Abs Abs_4
#include "source/scale_argb.cc"
#undef Abs

#define Abs Abs_5
#include "source/scale_common.cc"
#undef Abs

#include "source/scale_win.cc"
#include "source/video_common.cc"
