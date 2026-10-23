/* sub_6042F82C
 * address: 0x6042F82C   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042F82C(int a1, void *a2)
{
  int v3; // r7
  int v4; // r9
  int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r1
  _DWORD *v8; // r2
  unsigned int v9; // r1
  unsigned int v10; // r0
  int i; // r5
  int v12; // r0
  int v13; // r1
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int k; // r1
  int v20; // r2
  int v22; // r0
  int v23; // r0
  int j; // r8
  _DWORD *v25; // r4
  int v26; // r1
  int v27; // r2
  unsigned int v28; // r0
  _BYTE v31[96]; // [sp+10h] [bp-188h] BYREF
  _DWORD v32[45]; // [sp+70h] [bp-128h] BYREF
  int v33; // [sp+124h] [bp-74h] BYREF
  _DWORD v34[4]; // [sp+128h] [bp-70h] BYREF
  _DWORD v35[24]; // [sp+138h] [bp-60h] BYREF

  memset(v35, 255, 0x3Cu);
  v3 = 0;
  v4 = *(_DWORD *)(FIELD_U32(dword_60C9C0FC, 724) + 56);
  memset(v34, 255, sizeof(v34));
  v5 = dword_60C99DD4;
  v6 = FIELD_U32(dword_60C99DD4, 316);
  if ( v6 >> 25 <= 2 )
  {
    v3 = 1;
    v34[0] = v6 & 0xFFFFFF;
  }
  v7 = FIELD_U32(dword_60C99DD4, 388);
  if ( v7 < 0x6000000 )
  {
    v8 = (_DWORD *)((unsigned int)v34 | (4 * v3++));
    *v8 = v7 & 0xFFFFFF;
  }
  v9 = FIELD_U32(v5, 460);
  if ( v9 >> 25 <= 2 )
    v34[v3++] = v9 & 0xFFFFFF;
  v10 = FIELD_U32(v5, 532);
  if ( v10 >> 25 <= 2 )
    v34[v3++] = v10 & 0xFFFFFF;
  if ( v4 - v3 > 0 )
  {
    if ( v4 - v3 > 15 )
    {
      for ( i = 0; i < 15; ++i )
      {
        if ( i < 1 )
        {
          if ( v3 >= 1 )
          {
            while ( 1 )
            {
              v12 = (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)(unsigned int)v4) >> 32;
              v17 = 0;
              while ( 1 )
              {
                v18 = v34[v17++];
                if ( v18 == v12 )
                  break;
                if ( v17 >= v3 )
                  goto LABEL_30;
              }
            }
          }
          v12 = (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)(unsigned int)v4) >> 32;
        }
        else
        {
          do
          {
LABEL_13:
            v12 = (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)(unsigned int)v4) >> 32;
            v13 = 0;
            while ( v35[v13] != v12 )
            {
              if ( ++v13 >= i )
              {
                v14 = 0;
                if ( v3 < 1 )
                  goto LABEL_22;
LABEL_19:
                v15 = 0;
                while ( 1 )
                {
                  v16 = v34[v15++];
                  if ( v16 == v12 )
                    goto LABEL_13;
                  if ( v15 >= v3 )
                    goto LABEL_22;
                }
              }
            }
            v14 = 1;
            if ( v3 >= 1 )
              goto LABEL_19;
LABEL_22:
            ;
          }
          while ( v14 );
        }
LABEL_30:
        v35[i] = v12;
      }
LABEL_46:
      v23 = FIELD_U32(a1, 36);
      for ( j = 0; j < i; ++j )
      {
        if ( v23 > 14 )
          break;
        v25 = (_DWORD *)operator_new_8DE25C(0x4C8u, a2, 4);
        sub_60436A4C((int)v25);
        v33 = v35[j] & 0xFFFFFF | 0x1000000;
        sub_604186F8((int)v32);
        sub_6042A9E8(dword_60C9C0FC, v32, 3u);
        sub_6042F294(v31, &v33);
        qmemcpy(v32, v31, 0x5Cu);
        sub_60436B70(v25, (int)v32, 3, FIELD_U32(a1, 36), 0);
        v23 = FIELD_U32(a1, 36);
        if ( v23 <= 14 )
        {
          v26 = a1 + 40;
          v27 = 0;
          if ( (unsigned int)v23 >= 0xF )
            v23 = 0;
          v25[252] = v26 + 16 * v23;
          v28 = FIELD_U32(a1, 36);
          if ( v28 < 0xF )
            v27 = FIELD_U32(a1, 36);
          v23 = v28 + 1;
          *(_DWORD *)(v26 + 16 * v27) = v25;
          FIELD_U32(a1, 36) = v23;
        }
      }
      return 1;
    }
    if ( v4 >= 1 )
    {
      if ( v3 <= 0 )
      {
        v22 = 0;
        do
        {
          i = v22 + 1;
          v35[v22] = v22;
          if ( v22 > 13 )
            break;
          ++v22;
        }
        while ( i < v4 );
      }
      else
      {
        i = 0;
        for ( k = 0; k < v4; ++k )
        {
          v20 = 0;
          while ( v34[v20] != k )
          {
            if ( ++v20 >= v3 )
            {
              v35[i] = k;
              if ( i++ > 13 )
                goto LABEL_45;
              break;
            }
          }
        }
      }
LABEL_45:
      if ( i >= 1 )
        goto LABEL_46;
    }
  }
  return 1;
}
