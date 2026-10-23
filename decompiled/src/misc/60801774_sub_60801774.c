/* sub_60801774
 * address: 0x60801774   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60801774(int a1, int a2)
{
  int v4; // r5
  int result; // r0
  int v6; // r1
  int v7; // r0
  float v8; // s0
  float v9; // r1
  float v10; // r2
  float v11; // r3
  float v12[8]; // [sp+0h] [bp-20h] BYREF

  v4 = FIELD_U32(a2, 4);
  result = *(_DWORD *)(FIELD_U32(v4, 52) + 16);
  if ( !result )
  {
    v6 = FIELD_U32(a2, 12);
    result = FIELD_U8(v6, 30);
    if ( FIELD_U8(v6, 30) )
    {
      v7 = FIELD_U32(a1, 40);
      if ( v7 )
        v8 = FIELD_F32(v7, 28) / FIELD_F32(v7, 36);
      else
        v8 = 1.0;
      sub_60800A94((float *)a1, v6, v8);
      v9 = **(float **)a2;
      v10 = *(float *)(*(_DWORD *)a2 + 4);
      v11 = *(float *)(*(_DWORD *)a2 + 8);
      v12[3] = *(float *)(*(_DWORD *)a2 + 12);
      v12[0] = v9;
      v12[1] = v10;
      v12[2] = v11;
      nullsub_60(v4, v12, FIELD_F32(a1, 16));
      sub_60800A24(a1, v12);
      return sub_60800A5C(a1, (int)v12);
    }
  }
  return result;
}
