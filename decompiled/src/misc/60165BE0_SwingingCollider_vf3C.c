/* SwingingCollider_vf3C
 * address: 0x60165BE0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SwingingCollider_vf3C(int a1, float *a2, float a3)
{
  int v5; // r8
  int v6; // r7
  unsigned int v7; // r5
  int v8; // r4
  float v9; // s16
  float *v10; // r3
  unsigned int v11; // r0
  float *v12; // r1
  float v13; // s4
  float v14; // s6
  bool v15; // cc
  float *v16; // r3
  float v17; // s2
  float v18; // s0
  float v19; // s4
  float v20; // s6
  float v21; // s10
  float v22; // s0
  float v24[14]; // [sp+0h] [bp-38h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = FIELD_U32(a1, 392) - 1;
  v9 = (float)(FIELD_F32(a1, 424) + a3) * (float)(FIELD_F32(a1, 424) + a3);
  while ( (int)v7 < v8 )
  {
    v10 = *(float **)(a1 + 152);
    v11 = FIELD_U32(a1, 392);
    v12 = *(float **)(a1 + 396);
    v13 = *v10;
    v14 = v10[1];
    v15 = v11 > v7;
    v16 = v12;
    ++v7;
    if ( v15 )
      v16 = &v12[v6];
    if ( v11 > v7 )
      v12 = (float *)((char *)v12 + v6 * 4 + 8);
    v17 = v13 + FIELD_F32(a1, 172);
    v18 = v14 + FIELD_F32(a1, 176);
    v19 = *v12;
    v20 = v12[1];
    v21 = v18 + v16[1];
    v24[0] = v17 + *v16;
    v24[1] = v21;
    v24[2] = v17 + v19;
    v24[3] = v18 + v20;
    sub_6090ECAC(a2, v24, 0);
    v6 += 2;
    if ( v22 <= v9 )
      return 1;
  }
  return v5;
}
