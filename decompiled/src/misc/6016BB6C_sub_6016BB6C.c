/* sub_6016BB6C
 * address: 0x6016BB6C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6016BB6C(int a1, int a2, _DWORD *a3, int a4, float result, char a6, int a7)
{
  float v7; // s4
  float v8; // s10
  float v9; // s2

  FIELD_U32(a1, 768) = a2;
  FIELD_U32(a1, 752) = a3;
  FIELD_U32(a1, 748) = a4;
  FIELD_U8(a1, 1369) = a6;
  FIELD_U32(a1, 776) = 0;
  if ( result == 0.0 )
    result = flt_60AF7994[a2];
  FIELD_F32(a1, 644) = result;
  FIELD_U32(a1, 640) = dword_60AF795C[a2];
  FIELD_U32(a1, 648) = dword_60AF79CC[a2];
  FIELD_U8(a1, 1371) = a2 != 0;
  if ( a7 == 1 )
  {
    v7 = FIELD_F32(a1, 672);
    v8 = FIELD_F32(a1, 1048);
    v9 = FIELD_F32(a1, 668) + FIELD_F32(a1, 1044);
    FIELD_F32(a1, 784) = FIELD_F32(a1, 664) + FIELD_F32(a1, 1040);
    FIELD_F32(a1, 788) = v9;
    FIELD_F32(a1, 792) = v7 + v8;
    FIELD_U32(a1, 776) = 1;
    FIELD_U32(a1, 664) = *a3;
    FIELD_U32(a1, 668) = a3[1];
    FIELD_U32(a1, 672) = a3[2];
    FIELD_U32(a1, 752) = 0;
    FIELD_U32(a1, 880) = 0;
    FIELD_U8(a1, 1371) = 0;
    FIELD_U32(a1, 776) = 1;
    return v7 + v8;
  }
  return result;
}
