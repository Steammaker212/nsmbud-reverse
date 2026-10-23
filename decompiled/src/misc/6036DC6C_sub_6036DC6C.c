/* sub_6036DC6C
 * address: 0x6036DC6C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036DC6C(int a1)
{
  float *v2; // r5
  float v3; // s0
  float v4; // s2
  int *v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r2
  int v9; // r0
  unsigned int v10; // r1
  int *v11; // r0

  sub_60237208(a1 + 6768, (Vec3 *)(a1 + 108), 0, 0);
  pol_block_hatena_ref(a1);
  v2 = (float *)(a1 + 6312);
  v3 = FIELD_F32(a1, 6312) - FIELD_F32(a1, 124);
  FIELD_F32(a1, 6312) = v3;
  if ( FIELD_U32(a1, 6340) )
  {
    v4 = 16.0;
    v5 = (int *)(a1 + 156);
    v6 = FIELD_U32(a1, 156);
    if ( FIELD_U8(a1, 6360) )
    {
      v7 = v6 + 0x2000000;
      v8 = 0x1000000;
    }
    else
    {
      v7 = v6 - 0x2000000;
      v8 = -16777216;
    }
  }
  else
  {
    v4 = 8.0;
    v8 = 0x800000;
    v5 = (int *)(a1 + 160);
    v7 = FIELD_U32(a1, 160) + 0x4000000;
  }
  *v5 = v7;
  FIELD_U32(a1, 164) += v8;
  if ( v3 <= v4 )
  {
    *v2 = v4;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95F60);
    v3 = *v2;
  }
  FIELD_F32(a1, 112) = FIELD_F32(dword_60CC6484, 124) - v3;
  v9 = FIELD_U32(a1, 6304);
  v10 = FIELD_U32(v9, 24);
  v11 = *(int **)(v9 + 28);
  if ( v10 > 1 )
    ++v11;
  return Animation_update(*v11);
}
