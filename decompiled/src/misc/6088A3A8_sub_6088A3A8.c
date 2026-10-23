/* sub_6088A3A8
 * address: 0x6088A3A8   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088A3A8(int a1, int a2)
{
  int v3; // r1
  int result; // r0
  int v5; // r6
  bool v6; // zf
  int v7; // r5
  _DWORD *v8; // r7
  int v9; // r1
  int v10; // r11
  int v11; // r0
  unsigned int v12; // s0
  int v13; // lr
  int v14; // r12
  float v15; // s1
  int v16; // r3
  int v17; // r7
  int v18; // r0
  float v19; // s0
  int v20; // r3
  __int64 *v21; // r7
  int v22; // r3
  _DWORD *v23; // r1
  float v24; // s0
  __int64 v25; // d2
  __int64 v26; // d3
  __int64 v27; // d16
  __int64 v28; // d17
  __int64 v29; // d18
  __int64 v30; // d19
  int v31; // s2
  float v32; // s2
  int v33; // [sp+0h] [bp-50h]
  int v34; // [sp+8h] [bp-48h]
  int v35; // [sp+10h] [bp-40h]
  _DWORD *v36; // [sp+14h] [bp-3Ch]

  v3 = FIELD_U32(a2, 732);
  result = v3 + 20;
  v5 = FIELD_U32(v3, 20);
  v36 = (_DWORD *)(v3 + 20);
  v6 = v5 == 0;
  if ( v5 )
  {
    result = FIELD_U8(v3, 16);
    v6 = result == 0;
  }
  if ( !v6 )
  {
    v34 = *(_DWORD *)(FIELD_U32(a2, 348) + 580);
    v35 = v3;
    v7 = 0;
    v33 = sub_608966DC(a2 + 1376, FIELD_U32(v3, 48)) + 128;
    do
    {
      v8 = v36;
      if ( v7 )
        v8 = (_DWORD *)(v7 + 92);
      v7 = v5;
      while ( 1 )
      {
        v9 = FIELD_U32(v7, 96);
        v5 = FIELD_U32(v7, 92);
        if ( v9 >= 2 )
          break;
        *v8 = v5;
        v10 = dword_60CC801C;
        v11 = FIELD_U32(v7, 80);
        v12 = (unsigned int)*(float *)(*(_DWORD *)(FIELD_U32(a2, 348) + 580) + 20);
        --FIELD_U32(a2, 1472);
        FIELD_U32(a2, 1468) -= ((v12 << 6) + 255) & 0xFFFFFF00;
        sub_60882124(v11, 1);
        FIELD_U32(v7, 80) = 0;
        FIELD_U8(v7, 116) = 0;
        v7 = v5;
        --FIELD_U32(v10, 28);
        if ( !v5 )
          return nullsub_99(a2 + 1376);
      }
      v13 = v9 - 1;
      v14 = FIELD_U32(v7, 100);
      v15 = 1.0;
      v16 = FIELD_U32(v35, 24);
      FIELD_U32(v7, 96) = v9 - 1;
      v17 = *(_DWORD *)(FIELD_U32(a2, 348) + 12);
      if ( FIELD_U8(v17, 1884) )
        v15 = FIELD_F32(a2, 112);
      if ( FIELD_U8(v17, 1878) )
        v15 = v15 * FIELD_F32(a2, 108);
      v18 = 5 * v16 * v14;
      FIELD_F32(v7, 108) = FIELD_F32(a2, 72) + FIELD_F32(v7, 108);
      v19 = (float)v13;
      if ( FIELD_F32(v34, 16) == 0.0 )
      {
        v20 = 0;
        if ( v9 >= 4 )
        {
          v21 = *(__int64 **)(v7 + 84);
          v22 = 0;
          v23 = (_DWORD *)(v33 + 16 * v18);
          v24 = 1.0 / (float)(v19 + -1.0);
          do
          {
            v21 = *((__int64 **)v21 + 12);
            v25 = *v21;
            v26 = v21[1];
            v27 = v21[4];
            v28 = v21[5];
            v29 = v21[2];
            v30 = v21[3];
            *((_QWORD *)v23 - 16) = *v21;
            *(v23 - 30) = v26;
            *((float *)v23 - 29) = v15 * *((float *)&v26 + 1);
            v31 = v22;
            *((_QWORD *)v23 - 14) = v29;
            ++v22;
            v32 = (float)v31;
            *(v23 - 26) = v30;
            *((float *)v23 - 25) = v24 * v32;
            *((_QWORD *)v23 - 12) = v27;
            *(v23 - 22) = v28;
            *((float *)v23 - 21) = v32;
            *(v23 - 13) = 0;
            *(v23 - 14) = 0;
            *(v23 - 15) = 0;
            *(v23 - 16) = 0;
            *(v23 - 17) = 0;
            *(v23 - 18) = 0;
            *(v23 - 19) = 0;
            *(v23 - 20) = 0;
            *((_QWORD *)v23 - 6) = v25;
            *(v23 - 10) = v26;
            *((float *)v23 - 9) = -(float)(v15 * *((float *)&v26 + 1));
            *((_QWORD *)v23 - 4) = v29;
            *(v23 - 6) = v30;
            *((float *)v23 - 5) = v24 * v32;
            *((_QWORD *)v23 - 2) = v27;
            *(v23 - 2) = v28;
            *((float *)v23 - 1) = v32;
            *v23 = 0;
            v23[1] = 0;
            v23[2] = 0;
            v23[3] = 0;
            v23[4] = 0;
            v23[5] = 0;
            v23[6] = 0;
            v23[7] = 0;
            v23 += 40;
          }
          while ( v13 != v22 );
          v20 = 2 * v13;
        }
        FIELD_U32(v7, 104) = v20;
      }
      else
      {
        ((void (__fastcall *)(float, float))loc_6088946C)(v19, v15);
      }
    }
    while ( v5 );
    return nullsub_99(a2 + 1376);
  }
  return result;
}
