/* sub_607DE7F0
 * address: 0x607DE7F0   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DE7F0(int a1)
{
  int v2; // r2
  int v3; // r3
  int v4; // r4
  int v5; // r1
  int *v6; // r4
  int v7; // t1
  int v8; // r0
  int v9; // r7
  int v10; // r2
  int v11; // r10
  int v12; // r11
  int v13; // r3
  int v14; // r6
  int v15; // r1
  int v16; // r2
  __int16 **v17; // r0
  _DWORD *v18; // r2
  __int16 *v19; // r7
  bool v20; // cc
  unsigned int v21; // r5
  _DWORD *v22; // r6
  int *v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r7
  int v27; // r2
  int v28; // r0
  float v29; // r7
  float v30; // r6
  int v31; // r2
  float v32; // r3
  bool v33; // vf
  int v34; // r1
  float *v35; // r0
  int v36; // r0
  unsigned int v37; // r0
  int v39; // [sp+0h] [bp-58h]
  unsigned int *v40; // [sp+4h] [bp-54h]
  int v41; // [sp+8h] [bp-50h]
  int v42; // [sp+Ch] [bp-4Ch]
  int v43; // [sp+10h] [bp-48h]
  int v44; // [sp+14h] [bp-44h]
  int v45; // [sp+18h] [bp-40h]
  float v46[14]; // [sp+20h] [bp-38h] BYREF

  v39 = a1 + 72;
  sead__CriticalSection__lock(a1 + 72);
  if ( FIELD_S32(a1, 308) >= 1 )
  {
    do
    {
      v2 = FIELD_U32(a1, 304);
      v3 = 0;
      if ( (unsigned int)v2 < 4 )
        v3 = FIELD_U32(a1, 304);
      v4 = a1 + 24 * v3;
      v7 = FIELD_U32(v4, 204);
      v6 = (int *)(v4 + 204);
      v5 = v7;
      v8 = v6[3];
      v42 = v6[4] / (v8 * v7);
      if ( v42 < 1 )
        goto LABEL_31;
      v9 = 0;
      v41 = *(_DWORD *)(a1 + 4 * v3 + 188);
      v10 = 0;
      if ( v8 >= 1 )
      {
LABEL_8:
        v43 = v10;
        v11 = 0;
        v12 = 0;
        v44 = v9;
        v45 = v41 + v8 * v5 * v9;
LABEL_10:
        if ( v5 <= 0 )
        {
          v17 = (__int16 **)(a1 + 40 * v12 + 112);
        }
        else
        {
          v13 = 0;
          v14 = 0;
          v15 = v45 + v5 * v11;
          v16 = a1 + 40 * v12;
          v17 = (__int16 **)(v16 + 112);
          v18 = (_DWORD *)(v16 + 108);
          do
          {
            v19 = *v17;
            v20 = *v18 > (unsigned int)v14;
            v21 = *(_DWORD *)(v15 + 2 * v13);
            ++v14;
            if ( v20 )
              v19 = (__int16 *)((char *)v19 + v13);
            v13 += 2;
            *v19 = __ssat(0x10u, v21);
          }
          while ( v14 < *v6 );
        }
        sub_607DDFA8(a1 + 320, *v17, v46);
        v22 = (_DWORD *)(a1 + 40 * v12);
        v23 = v22 + 32;
        v24 = v22[32];
        v25 = v22[30];
        if ( v24 < v25 )
          goto LABEL_23;
        if ( v24 >= 1 )
        {
          --v24;
          v26 = v22[31] + 1;
          if ( v26 >= v25 )
            v26 = 0;
          v22[31] = v26;
          *v23 = v24;
        }
        if ( v24 < v25 )
        {
LABEL_23:
          *v23 = v24 + 1;
          v27 = v22[31];
          v28 = v22[29];
          v29 = v46[2];
          v30 = v46[3];
          v31 = v27 + v24;
          v32 = v46[1];
          v33 = __OFSUB__(v31, v25);
          v34 = v31 - v25;
          if ( v34 < 0 != v33 )
            v34 = v31;
          *(float *)(v28 + 16 * v34) = v46[0];
          v35 = (float *)(v28 + 16 * v34);
          v35[1] = v32;
          v35[2] = v29;
          v35[3] = v30;
        }
        v8 = v6[3];
        while ( ++v12 < v8 )
        {
          v5 = *v6;
          v11 += 4;
          if ( v12 <= 1 )
            goto LABEL_10;
        }
        v9 = v44;
        v10 = v43;
      }
      while ( ++v10 != v42 )
      {
        v5 = *v6;
        v9 += 4;
        if ( v8 >= 1 )
          goto LABEL_8;
      }
      v2 = FIELD_U32(a1, 304);
LABEL_31:
      v36 = v2 + 1;
      if ( v2 > 2 )
        v36 = 0;
      FIELD_U32(a1, 304) = v36;
      v40 = (unsigned int *)(a1 + 308);
      do
        v37 = __ldrex(v40);
      while ( __strex(v37 - 1, v40) );
    }
    while ( (int)*v40 >= 1 );
  }
  return sead__CriticalSection__unlock(v39);
}
