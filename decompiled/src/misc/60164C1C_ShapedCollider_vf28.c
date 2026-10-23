/* ShapedCollider_vf28
 * address: 0x60164C1C   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall ShapedCollider_vf28(int a1, _BYTE *a2, float *a3)
{
  float *v5; // r0
  float v6; // s18
  float v7; // s16
  float v8; // s20
  float v9; // s22
  float v10; // s24
  float v11; // s26
  int v12; // r0
  int v13; // r9
  int v14; // r5
  __int64 v15; // r6
  int v16; // r8
  float v17; // s16
  float v18; // s18
  float v19; // s2
  float v20; // s0
  float *v21; // r1
  int v22; // s22
  int v23; // s20
  float v24; // s24
  int v25; // s26
  unsigned int v26; // r4
  unsigned int v27; // r0
  int v28; // r0
  unsigned int v29; // r1
  int v30; // r1
  bool v31; // cf
  _BYTE *v32; // r0
  ColliderNodeUnk1 v35; // [sp+8h] [bp-68h] BYREF

  v5 = *(float **)(a1 + 152);
  v6 = FIELD_F32(a1, 128);
  v7 = FIELD_F32(a1, 132);
  v8 = FIELD_F32(a1, 172);
  v9 = FIELD_F32(a1, 176);
  v10 = *v5;
  v11 = v5[1];
  ColliderNodeUnk1_ctor(&v35);
  v12 = FIELD_U32(a1, 348);
  v13 = 0;
  if ( v12 < 1 )
  {
    v15 = 0;
LABEL_13:
    if ( __SPAIR64__(
           ((v15 + __PAIR64__(SHIDWORD(v15) >> 31, SHIDWORD(v15) >> 31)) >> 32) ^ (SHIDWORD(v15) >> 31),
           (v15 + (SHIDWORD(v15) >> 31)) ^ (SHIDWORD(v15) >> 31)) >= 11930464 )
    {
      v13 = 1;
      if ( a2 )
        *a2 = 0;
    }
    return v13;
  }
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = (float)(v11 + v9) + v7;
  v18 = (float)(v10 + v8) + v6;
  v19 = *a3;
  v20 = a3[1];
  while ( 1 )
  {
    v21 = *(float **)(a1 + 352);
    if ( v12 > (unsigned int)v16 )
      v21 = (float *)((char *)v21 + v14);
    *(float *)&v23 = v17 + v21[2];
    v24 = v18 + v21[3];
    *(float *)&v25 = v17 + v21[4];
    *(float *)&v35.field_0 = v18 + v21[1];
    v22 = v35.field_0;
    v35.field_4 = v23;
    v35.field_8 = v24;
    v35.field_C = v25;
    v26 = sub_6000F7B8(*(float *)&v23 - v20, *(float *)&v35.field_0 - v19);
    v27 = sub_6000F7B8(*(float *)&v25 - a3[1], v24 - *a3);
    v19 = *a3;
    v20 = a3[1];
    if ( *a3 == *(float *)&v22 )
    {
      v32 = a2;
      if ( !a2 )
        return 1;
      goto LABEL_20;
    }
    v28 = v26 - v27;
    v29 = v28 ^ 0x80000000;
    if ( v28 < 0 )
      break;
    if ( v28 )
    {
      v29 = -v29;
      break;
    }
LABEL_10:
    v30 = v28 >> 31;
    v31 = __CFADD__(v28, (_DWORD)v15);
    LODWORD(v15) = v28 + v15;
    v12 = FIELD_U32(a1, 348);
    ++v16;
    v14 += 32;
    HIDWORD(v15) += v31 + v30;
    if ( v16 >= v12 )
      goto LABEL_13;
  }
  if ( v29 )
    goto LABEL_10;
  v32 = a2;
  if ( a2 )
  {
LABEL_20:
    v13 = 1;
    *v32 = 1;
    return v13;
  }
  return 1;
}
