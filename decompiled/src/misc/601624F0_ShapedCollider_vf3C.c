/* ShapedCollider_vf3C
 * address: 0x601624F0   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall ShapedCollider_vf3C(int a1, float *a2, float a3)
{
  int v6; // r1
  signed int result; // r0
  float *v8; // r0
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float v12; // s6
  float v13; // s8
  float v14; // s10
  int v15; // r1
  float v16; // s16
  int v17; // r7
  int v18; // r6
  float v19; // s18
  float v20; // s20
  float *v21; // r0
  float v22; // s2
  float v23; // s4
  float v24; // s6
  float v25; // s0
  float v26; // [sp+0h] [bp-40h] BYREF
  float v27; // [sp+4h] [bp-3Ch]
  float v28; // [sp+8h] [bp-38h]
  float v29; // [sp+Ch] [bp-34h]

  v6 = (*(int (__fastcall **)(int, _DWORD, float *, float))(*(_DWORD *)a1 + 0x28))(a1, 0, a2, a3);
  result = 1;
  if ( !v6 )
  {
    v8 = *(float **)(a1 + 152);
    v9 = FIELD_F32(a1, 128);
    v10 = FIELD_F32(a1, 132);
    v11 = FIELD_F32(a1, 172);
    v12 = FIELD_F32(a1, 176);
    v13 = *v8;
    v14 = v8[1];
    v27 = 0.0;
    v26 = 0.0;
    v29 = 0.0;
    v28 = 1.0;
    result = 0;
    v15 = FIELD_U32(a1, 348);
    if ( v15 >= 1 )
    {
      v16 = a3 * a3;
      v17 = 0;
      v18 = 0;
      v19 = (float)(v14 + v12) + v10;
      v20 = (float)(v13 + v11) + v9;
      while ( 1 )
      {
        v21 = *(float **)(a1 + 352);
        if ( v15 > (unsigned int)v18 )
          v21 = (float *)((char *)v21 + v17);
        v22 = v21[2];
        v23 = v21[3];
        v24 = v21[4];
        v26 = v20 + v21[1];
        v27 = v19 + v22;
        v28 = v20 + v23;
        v29 = v19 + v24;
        sub_6090ECAC(a2, &v26, 0);
        if ( v25 <= v16 )
          break;
        v15 = FIELD_U32(a1, 348);
        ++v18;
        v17 += 32;
        if ( v18 >= v15 )
          return 0;
      }
      return 1;
    }
  }
  return result;
}
