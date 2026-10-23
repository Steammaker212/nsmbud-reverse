/* SwingingCollider_vf28
 * address: 0x60166490   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SwingingCollider_vf28(int a1, _BYTE *a2, float *a3)
{
  char v4; // r5
  int v5; // r0
  int v6; // r10
  int v7; // r9
  float v8; // s16
  float *v9; // r3
  float *v10; // r7
  float v11; // s0
  float v12; // s2
  float v13; // s6
  float *v14; // r1
  float v15; // s10
  float v16; // s2
  float v17; // s0
  int v18; // r0
  _BYTE *v20; // [sp+4h] [bp-64h]
  int v21; // [sp+8h] [bp-60h]
  float v23[2]; // [sp+10h] [bp-58h] BYREF
  float v24[2]; // [sp+18h] [bp-50h] BYREF
  float v25; // [sp+20h] [bp-48h] BYREF
  float v26; // [sp+24h] [bp-44h]
  float v27; // [sp+28h] [bp-40h]
  float v28; // [sp+2Ch] [bp-3Ch]
  float v29[14]; // [sp+30h] [bp-38h] BYREF

  v4 = 0;
  v5 = FIELD_U32(a1, 392);
  if ( v5 >= 2 )
  {
    v20 = a2;
    v4 = 0;
    v6 = 1;
    v7 = 2;
    v21 = v5 - 1;
    v8 = FIELD_F32(a1, 424) * FIELD_F32(a1, 424);
    while ( 1 )
    {
      v9 = *(float **)(a1 + 152);
      v10 = *(float **)(a1 + 396);
      v11 = FIELD_F32(a1, 172);
      v12 = FIELD_F32(a1, 176);
      v13 = v9[1];
      v14 = v10;
      if ( v5 > (unsigned int)(v6 - 1) )
        v14 = &v10[v7 - 2];
      v15 = v14[1];
      if ( v5 > (unsigned int)v6 )
        v10 = (float *)((char *)v10 + v7 * 4);
      v24[0] = (float)(*v9 + v11) + *v14;
      v24[1] = (float)(v13 + v12) + v15;
      v16 = (float)(v9[1] + v12) + v10[1];
      v23[0] = (float)(*v9 + v11) + *v10;
      v23[1] = v16;
      sub_60166970(&v25, v24, v23, v9);
      sub_6090ECAC(a3, &v25, v24);
      if ( v17 <= v8 )
      {
        v29[0] = v25 + (float)((float)(v27 - v25) * v24[0]);
        v29[1] = v26 + (float)((float)(v28 - v26) * v24[0]);
        v18 = SwingingCollider_vf28_helper(&v25, v29);
        v4 |= v18;
        if ( v18 )
          break;
      }
      if ( v6 >= v21 )
        break;
      v5 = FIELD_U32(a1, 392);
      v7 += 2;
      ++v6;
    }
    a2 = v20;
  }
  if ( a2 )
    *a2 = 0;
  return v4 & 1;
}
