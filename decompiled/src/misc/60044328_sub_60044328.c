/* sub_60044328
 * address: 0x60044328   size: 1288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60044328(int a1)
{
  float v2; // s0
  float v3; // s4
  float v4; // s0
  int v5; // r1
  int v6; // r2
  float v7; // s2
  float v8; // s6
  float v9; // s10
  int v10; // r0
  float v11; // s0
  float v12; // s4
  float v13; // s12
  float v14; // s2
  float v15; // s4

  if ( FIELD_U32(a1, 11468) )
  {
    v2 = FIELD_F32(a1, 11304) - FIELD_F32(a1, 11292);
    v3 = FIELD_F32(a1, 11308) - FIELD_F32(a1, 11296);
    FIELD_F32(a1, 11652) = sqrtf(
                               (float)((float)(v2 * v2)
                                     + (float)((float)(FIELD_F32(a1, 11300) - FIELD_F32(a1, 11288))
                                             * (float)(FIELD_F32(a1, 11300) - FIELD_F32(a1, 11288))))
                             + (float)(v3 * v3));
    FIELD_F32(a1, 11656) = sqrtf(
                               (float)((float)((float)(FIELD_F32(a1, 11316) - FIELD_F32(a1, 11304))
                                             * (float)(FIELD_F32(a1, 11316) - FIELD_F32(a1, 11304)))
                                     + (float)((float)(FIELD_F32(a1, 11312) - FIELD_F32(a1, 11300))
                                             * (float)(FIELD_F32(a1, 11312) - FIELD_F32(a1, 11300))))
                             + (float)((float)(FIELD_F32(a1, 11320) - FIELD_F32(a1, 11308))
                                     * (float)(FIELD_F32(a1, 11320) - FIELD_F32(a1, 11308))));
    FIELD_F32(a1, 11660) = sqrtf(
                               (float)((float)((float)(FIELD_F32(a1, 11340) - FIELD_F32(a1, 11316))
                                             * (float)(FIELD_F32(a1, 11340) - FIELD_F32(a1, 11316)))
                                     + (float)((float)(FIELD_F32(a1, 11336) - FIELD_F32(a1, 11312))
                                             * (float)(FIELD_F32(a1, 11336) - FIELD_F32(a1, 11312))))
                             + (float)((float)(FIELD_F32(a1, 11344) - FIELD_F32(a1, 11320))
                                     * (float)(FIELD_F32(a1, 11344) - FIELD_F32(a1, 11320))));
    FIELD_F32(a1, 11664) = sqrtf(
                               (float)((float)((float)(FIELD_F32(a1, 11328) - FIELD_F32(a1, 11340))
                                             * (float)(FIELD_F32(a1, 11328) - FIELD_F32(a1, 11340)))
                                     + (float)((float)(FIELD_F32(a1, 11324) - FIELD_F32(a1, 11336))
                                             * (float)(FIELD_F32(a1, 11324) - FIELD_F32(a1, 11336))))
                             + (float)((float)(FIELD_F32(a1, 11332) - FIELD_F32(a1, 11344))
                                     * (float)(FIELD_F32(a1, 11332) - FIELD_F32(a1, 11344))));
    v4 = sqrtf(
           (float)((float)((float)(FIELD_F32(a1, 11352) - FIELD_F32(a1, 11328))
                         * (float)(FIELD_F32(a1, 11352) - FIELD_F32(a1, 11328)))
                 + (float)((float)(FIELD_F32(a1, 11348) - FIELD_F32(a1, 11324))
                         * (float)(FIELD_F32(a1, 11348) - FIELD_F32(a1, 11324))))
         + (float)((float)(FIELD_F32(a1, 11356) - FIELD_F32(a1, 11332))
                 * (float)(FIELD_F32(a1, 11356) - FIELD_F32(a1, 11332))));
    v5 = 11368;
    v6 = 11364;
    v7 = FIELD_F32(a1, 11352);
    v8 = FIELD_F32(a1, 11356);
    v9 = FIELD_F32(a1, 11348);
    v10 = 11360;
  }
  else
  {
    v11 = FIELD_F32(a1, 11196) - FIELD_F32(a1, 11184);
    v12 = FIELD_F32(a1, 11200) - FIELD_F32(a1, 11188);
    FIELD_F32(a1, 11652) = sqrtf(
                               (float)((float)(v11 * v11)
                                     + (float)((float)(FIELD_F32(a1, 11192) - FIELD_F32(a1, 11180))
                                             * (float)(FIELD_F32(a1, 11192) - FIELD_F32(a1, 11180))))
                             + (float)(v12 * v12));
    FIELD_F32(a1, 11656) = sqrtf(
                               (float)((float)((float)(FIELD_F32(a1, 11208) - FIELD_F32(a1, 11196))
                                             * (float)(FIELD_F32(a1, 11208) - FIELD_F32(a1, 11196)))
                                     + (float)((float)(FIELD_F32(a1, 11204) - FIELD_F32(a1, 11192))
                                             * (float)(FIELD_F32(a1, 11204) - FIELD_F32(a1, 11192))))
                             + (float)((float)(FIELD_F32(a1, 11212) - FIELD_F32(a1, 11200))
                                     * (float)(FIELD_F32(a1, 11212) - FIELD_F32(a1, 11200))));
    FIELD_F32(a1, 11660) = sqrtf(
                               (float)((float)((float)(FIELD_F32(a1, 11232) - FIELD_F32(a1, 11208))
                                             * (float)(FIELD_F32(a1, 11232) - FIELD_F32(a1, 11208)))
                                     + (float)((float)(FIELD_F32(a1, 11228) - FIELD_F32(a1, 11204))
                                             * (float)(FIELD_F32(a1, 11228) - FIELD_F32(a1, 11204))))
                             + (float)((float)(FIELD_F32(a1, 11236) - FIELD_F32(a1, 11212))
                                     * (float)(FIELD_F32(a1, 11236) - FIELD_F32(a1, 11212))));
    FIELD_F32(a1, 11664) = sqrtf(
                               (float)((float)((float)(FIELD_F32(a1, 11220) - FIELD_F32(a1, 11232))
                                             * (float)(FIELD_F32(a1, 11220) - FIELD_F32(a1, 11232)))
                                     + (float)((float)(FIELD_F32(a1, 11216) - FIELD_F32(a1, 11228))
                                             * (float)(FIELD_F32(a1, 11216) - FIELD_F32(a1, 11228))))
                             + (float)((float)(FIELD_F32(a1, 11224) - FIELD_F32(a1, 11236))
                                     * (float)(FIELD_F32(a1, 11224) - FIELD_F32(a1, 11236))));
    v4 = sqrtf(
           (float)((float)((float)(FIELD_F32(a1, 11244) - FIELD_F32(a1, 11220))
                         * (float)(FIELD_F32(a1, 11244) - FIELD_F32(a1, 11220)))
                 + (float)((float)(FIELD_F32(a1, 11240) - FIELD_F32(a1, 11216))
                         * (float)(FIELD_F32(a1, 11240) - FIELD_F32(a1, 11216))))
         + (float)((float)(FIELD_F32(a1, 11248) - FIELD_F32(a1, 11224))
                 * (float)(FIELD_F32(a1, 11248) - FIELD_F32(a1, 11224))));
    v5 = 11260;
    v6 = 11256;
    v7 = FIELD_F32(a1, 11244);
    v8 = FIELD_F32(a1, 11248);
    v9 = FIELD_F32(a1, 11240);
    v10 = 11252;
  }
  v13 = *(float *)(a1 + v10);
  v14 = *(float *)(a1 + v6) - v7;
  v15 = *(float *)(a1 + v5) - v8;
  FIELD_F32(a1, 11668) = v4;
  FIELD_F32(a1, 11672) = sqrtf(
                             (float)(v15 * v15)
                           + (float)((float)(v14 * v14) + (float)((float)(v13 - v9) * (float)(v13 - v9))));
  return a1 + 11672;
}
