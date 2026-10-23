/* sub_603B41A4
 * address: 0x603B41A4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603B41A4(int a1)
{
  _BOOL4 v2; // r1
  unsigned int v3; // r0
  float v4; // s0
  unsigned int v5; // r0
  float v6; // s2
  float result; // s0

  v2 = FIELD_U32(a1, 20) >> 28 != 0;
  FIELD_U32(a1, 80) = v2;
  v3 = Enemy_CommonRotations[v2];
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = v3;
  FIELD_U32(a1, 164) = 0;
  v4 = flt_60B00C4C[(3 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32];
  v5 = FIELD_U8(a1, 23) & 0xF;
  if ( v5 > 2 )
    v6 = 1.0;
  else
    v6 = flt_60B00C40[v5];
  result = v4 * (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  FIELD_F32(a1, 120) = result;
  FIELD_F32(a1, 124) = v6 * 4.5;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1115684864;
  FIELD_U32(a1, 140) = 0;
  FIELD_F32(a1, 132) = result;
  FIELD_F32(a1, 136) = v6 * -1.5;
  return result;
}
