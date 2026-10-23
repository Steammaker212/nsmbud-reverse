/* sub_6028C8C4
 * address: 0x6028C8C4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6028C8C4(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int v6; // r0
  float *v13; // r2
  float v14; // s0
  float v15; // s10
  float v16; // s6
  float v17; // s2
  float v18; // s0
  int *result; // r0
  int *v20; // r4
  int *v21; // t1
  signed int v22; // [sp+0h] [bp-10h] BYREF
  int v23; // [sp+4h] [bp-Ch] BYREF

  v2 = *(_DWORD **)(a1 + 6300);
  v3 = (int *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  Animation_update(*v3);
  v6 = FIELD_U32(a1, 6332) + 256;
  if ( v6 >= 0x10000 )
    v6 = 0x10000;
  FIELD_U32(a1, 6332) = v6;
  _R1 = v6 << 16;
  __asm { UXTB16          R1, R1 }
  v13 = (float *)((char *)sinLutTable + (((unsigned int)v6 >> 4) & 0xFF0));
  v14 = (float)_R1 * 0.000000059605;
  v15 = FIELD_F32(a1, 88);
  v16 = v13[2] + (float)(v13[3] * v14);
  v17 = (float)(*v13 + (float)(v13[1] * v14)) * 0.375;
  FIELD_F32(a1, 120) = v15 * v16;
  FIELD_F32(a1, 124) = v17;
  v18 = FIELD_F32(a1, 108) + (float)(v15 * v16);
  FIELD_F32(a1, 108) = v18;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + v17;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 108) = v18 + (float)(FIELD_F32(dword_60CC6484, 112) - FIELD_F32(dword_60CC6484, 56));
  FIELD_U32(a1, 160) = *((_DWORD *)&unk_60C8F4C0 + FIELD_U32(a1, 80) + 6) + (v6 << 16);
  v21 = *(int **)(a1 + 164);
  v20 = (int *)(a1 + 164);
  result = v21;
  if ( v21 )
  {
    v23 = 0;
    v22 = 0x4000000;
    return sub_6083224C(v20, &v23, &v22);
  }
  return result;
}
