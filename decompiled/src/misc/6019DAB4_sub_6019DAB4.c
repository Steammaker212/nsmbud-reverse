/* sub_6019DAB4
 * address: 0x6019DAB4   size: 864   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6019DAB4(int a1)
{
  unsigned __int8 *v2; // r6
  int v3; // r5
  int v4; // r0
  unsigned int result; // r0
  unsigned int v6; // r10
  float *v7; // r8
  unsigned int v8; // r0
  float *v9; // r11
  float v10; // s0
  _DWORD *v11; // t1
  _DWORD *v12; // [sp+8h] [bp-78h] BYREF
  _DWORD *v13; // [sp+Ch] [bp-74h] BYREF
  unsigned int v14[2]; // [sp+10h] [bp-70h] BYREF
  float32x2_t v15; // [sp+18h] [bp-68h] BYREF
  float v16; // [sp+20h] [bp-60h]
  float v17; // [sp+24h] [bp-5Ch]
  float v18; // [sp+28h] [bp-58h]
  float v19; // [sp+2Ch] [bp-54h]
  float v20; // [sp+30h] [bp-50h]
  float v21; // [sp+34h] [bp-4Ch]
  float v22; // [sp+38h] [bp-48h]
  float v23; // [sp+3Ch] [bp-44h]
  float v24; // [sp+40h] [bp-40h]
  float v25; // [sp+44h] [bp-3Ch]

  v2 = (unsigned __int8 *)(a1 + 12891);
  if ( FIELD_U8(a1, 12891) )
  {
    v3 = 0;
    do
    {
      v4 = 0;
      if ( (unsigned int)v3 < 6 )
        v4 = v3;
      j_ModelWrapper_updateAnims(*(_DWORD *)(a1 + 40 * v4 + 12628));
      ++v3;
    }
    while ( v3 < *v2 );
  }
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v14[0] = FIELD_U32(a1, 12664);
    v13 = *(_DWORD **)(a1 + 12660);
    v12 = *(_DWORD **)(a1 + 12656);
    v15.n64_u64[0] = 1065353216;
    v16 = 0.0;
    v18 = 0.0;
    v19 = 1.0;
    v20 = 0.0;
    v22 = 0.0;
    v23 = 0.0;
    v24 = 1.0;
    v17 = FIELD_F32(a1, 12644);
    v21 = FIELD_F32(a1, 12648);
    v25 = FIELD_F32(a1, 12652);
    Mtx34_rotateY(&v15, (unsigned int *)&v13);
    Mtx34_rotateX(&v15, (unsigned int *)&v12);
    Mtx34_rotateZ(&v15, v14);
    v17 = v17 + (float)((float)((float)(v15.n64_f32[0] * 0.0) - (float)(v15.n64_f32[1] * 20.0)) + (float)(v16 * 0.0));
    v21 = v21 + (float)((float)((float)(v18 * 0.0) - (float)(v19 * 20.0)) + (float)(v20 * 0.0));
    v25 = v25 + (float)((float)((float)(v22 * 0.0) - (float)(v23 * 20.0)) + (float)(v24 * 0.0));
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 12628) + 60))(**(_DWORD **)(a1 + 12628), &v15);
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 12628) + 68))(**(_DWORD **)(a1 + 12628), a1 + 128);
    sub_60421880(FIELD_U32(a1, 12628));
    result = *v2;
    if ( result >= 2 )
    {
      v6 = 1;
      v7 = (float *)(a1 + 12868);
      do
      {
        v8 = 0;
        if ( v6 < 6 )
          v8 = v6;
        v9 = (float *)(a1 + 40 * v8);
        v14[0] = (unsigned int)v9[3166];
        v13 = *((_DWORD **)v9 + 3165);
        v12 = *((_DWORD **)v9 + 3164);
        v15.n64_u64[0] = 1065353216;
        v16 = 0.0;
        v18 = 0.0;
        v19 = 1.0;
        v20 = 0.0;
        v22 = 0.0;
        v23 = 0.0;
        v24 = 1.0;
        v17 = v9[3161];
        v21 = v9[3162];
        v25 = v9[3163];
        Mtx34_rotateY(&v15, (unsigned int *)&v13);
        Mtx34_rotateX(&v15, (unsigned int *)&v12);
        Mtx34_rotateZ(&v15, v14);
        v10 = *v7;
        v17 = v17
            + (float)((float)((float)-(float)(*v7 * v15.n64_f32[0]) - (float)(v15.n64_f32[1] * 20.0))
                    + (float)(v16 * 0.0));
        v21 = v21 + (float)((float)((float)-(float)(v10 * v18) - (float)(v19 * 20.0)) + (float)(v20 * 0.0));
        v25 = v25 + (float)((float)((float)-(float)(v10 * v22) - (float)(v23 * 20.0)) + (float)(v24 * 0.0));
        v11 = *((_DWORD **)v9 + 3157);
        v9 += 3157;
        (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v11 + 60))(*v11, &v15);
        (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)v9 + 68))(**(_DWORD **)v9, a1 + 12612);
        sub_60421880(*(_DWORD *)v9);
        result = *v2;
        ++v6;
      }
      while ( (int)v6 < (int)result );
    }
  }
  return result;
}
