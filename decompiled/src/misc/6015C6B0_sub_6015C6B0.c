/* sub_6015C6B0
 * address: 0x6015C6B0   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015C6B0(int a1, bool *a2, float *a3)
{
  float *v5; // r0
  float v6; // s8
  float v7; // s10
  int result; // r0
  float v9; // s6
  float v10; // s2
  float v11; // s0
  float v12; // [sp+0h] [bp-18h] BYREF
  float v13; // [sp+4h] [bp-14h]

  sub_6015C588(a1, &v12, a3);
  v5 = *(float **)(a1 + 152);
  v6 = *v5;
  v7 = v5[1];
  result = 0;
  v9 = v12 - (float)((float)(v6 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 348));
  v10 = FIELD_F32(a1, 364) * FIELD_F32(a1, 364);
  v11 = (float)((float)(v13 - (float)((float)(v7 + FIELD_F32(a1, 176)) + FIELD_F32(a1, 352)))
              * (float)(v13 - (float)((float)(v7 + FIELD_F32(a1, 176)) + FIELD_F32(a1, 352))))
      + (float)(v9 * v9);
  if ( v11 <= v10 )
  {
    result = 1;
    if ( a2 )
      *a2 = v11 == v10;
  }
  return result;
}
