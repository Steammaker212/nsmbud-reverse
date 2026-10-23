/* sub_606F2288
 * address: 0x606F2288   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F2288(int a1)
{
  int v2; // r6
  int Area; // r0
  float *v4; // r5
  float v5; // s0
  float v6; // s2
  float v7; // s6
  unsigned int v8; // r0
  float v9; // s2

  v2 = FIELD_U8(a1, 20);
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v4 = (float *)(a1 + 6104);
  if ( !LevelArea_getLocation(Area, (float *)(a1 + 6104), v2) )
    return 2;
  v5 = *v4;
  v6 = FIELD_F32(a1, 6112) - *v4;
  FIELD_F32(a1, 7524) = v6;
  v7 = FIELD_F32(a1, 6116);
  FIELD_F32(a1, 7528) = v7 - FIELD_F32(a1, 6108);
  FIELD_F32(a1, 108) = v5;
  FIELD_F32(a1, 112) = v7;
  v8 = FIELD_U32(a1, 20);
  FIELD_F32(a1, 7536) = v7
                        - (float)((float)((unsigned __int16)v8 >> 12)
                                + (float)((float)((unsigned __int16)v8 >> 12) * 16.0));
  FIELD_F32(a1, 7532) = v5 + (float)HIBYTE(v8);
  FIELD_F32(a1, 7540) = v6 + (float)((float)HIBYTE(v8) * -2.0);
  sub_606F23C8(a1);
  v9 = FIELD_F32(a1, 7528) * -0.5;
  FIELD_F32(a1, 492) = FIELD_F32(a1, 7524) * 0.5;
  FIELD_F32(a1, 496) = v9;
  FIELD_U32(a1, 500) = 1153957888;
  FIELD_U32(a1, 504) = 1153957888;
  return 1;
}
