/* EffectData_setEffectId_helper_239BF4
 * address: 0x60239BF4   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall EffectData_setEffectId_helper_239BF4(_DWORD *a1, _DWORD *a2, int a3, unsigned int a4)
{
  int v7; // r6
  int *v8; // r0
  int v9; // r10
  int v10; // r1
  int v11; // r0
  int v12; // r2
  unsigned int v13; // r0
  int v14; // r8
  unsigned int v15; // r6
  unsigned int v16; // r7
  int8x16_t v17; // q13
  int v18; // r0
  int v19; // r2
  int v20; // r3
  int v21; // r5
  int v22; // r4
  int i; // r7
  int v24; // r2
  int v25; // r0
  int v26; // r3
  int *v27; // r2
  int32x4_t v29[2]; // [sp+10h] [bp-68h] BYREF
  int32x4x2_t v30[2]; // [sp+30h] [bp-48h]
  int32x4_t v31; // 0:q8.16
  int32x4_t v32; // 0:q9.16
  int32x4_t v33; // 0:q10.16
  int32x4x2_t v34; // 0:q8.16,16:q9.16
  int32x4x2_t v35; // 0:q10.16,16:q11.16

  v7 = 0;
  if ( a4 <= 0x4D6 )
  {
    v8 = (int *)sub_6023B10C(a1[55]);
    if ( v8 )
    {
      v9 = *v8;
      v10 = *(_DWORD *)(*(_DWORD *)(a1[4] + 104) + 24);
      if ( v10 )
      {
        v11 = FIELD_U8(v10, 5);
        if ( FIELD_U8(v10, 5) )
          v11 = *(_DWORD *)(*(_DWORD *)(a1[4] + 104) + 24);
      }
      else
      {
        v11 = 0;
      }
      v12 = *(_DWORD *)(FIELD_U32(v11, 52) + 4 * v9);
      if ( !v12 )
        v12 = FIELD_U32(v11, 48) + 32 * v9;
      v13 = sub_60237CAC(*(unsigned __int16 *)(FIELD_U32(v12, 12) + 84), a1[577]);
      v14 = a1[4];
      v15 = v13;
      sead__CriticalSection__lock(v14 + 7312);
      v31 = *(int32x4_t *)a3;
      v32 = *(int32x4_t *)(a3 + 16);
      v33 = *(int32x4_t *)(a3 + 32);
      v16 = v15;
      v7 = 0;
      v34 = vzipq_s32(v31, v32);
      v35 = vzipq_s32(v33, (int32x4_t)0);
      v17 = vextq_s8(v35.val[0], v34.val[0], 8u);
      v29[0] = vextq_s8(vextq_s8(v34.val[0], v34.val[0], 8u), v35.val[0], 8u);
      v35.val[0] = vextq_s8(v34.val[1], v34.val[1], 8u);
      v34.val[1] = vextq_s8(v34.val[1], vextq_s8(v35.val[1], v34.val[1], 8u), 8u);
      v29[1] = vextq_s8(v34.val[0], v17, 8u);
      v34.val[0] = vextq_s8(v35.val[0], v35.val[1], 8u);
      v30[0] = v34;
      if ( sub_6088FEF0(v14, a2, v9, 6) == 1 && *a2 && a2[1] == *(_DWORD *)(*a2 + 32) )
      {
        v18 = sub_60881DE8(a2);
        sub_60881BB0(v18, v29, v19, v20, (unsigned __int8)v16, 0, 0);
        v7 = 1;
      }
      sead__CriticalSection__unlock(v14 + 7312);
      if ( *a2 )
      {
        if ( a2[1] == *(_DWORD *)(*a2 + 32) )
        {
          v21 = sub_60881DE8(a2);
          FIELD_U32(v21, 408) = v16;
          v22 = FIELD_U32(v21, 352);
          if ( v22 >= 1 )
          {
            for ( i = 0; i != v22; ++i )
            {
              v25 = sub_60881D78(v21, i);
              if ( v25 )
              {
                v26 = FIELD_U32(v25, 348);
                v27 = *(int **)(v26 + 552);
                if ( v27 || (v27 = *(int **)(v26 + 556)) != 0 )
                  v24 = *v27;
                else
                  LOWORD(v24) = 0;
                sub_60237B20(a1[54], v25, (unsigned __int16)v24);
              }
            }
          }
        }
      }
    }
  }
  return v7;
}
