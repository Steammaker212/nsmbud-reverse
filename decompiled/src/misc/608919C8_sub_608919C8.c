/* sub_608919C8
 * address: 0x608919C8   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608919C8(int result, float *a2)
{
  float v2; // s2
  float v3; // s4
  float *v4; // r2
  _BOOL4 v5; // r3
  _BOOL4 v6; // r4
  float v7; // s0
  _DWORD *v8; // r12
  float v9; // r4
  int v10; // lr
  int v11; // r5
  int v12; // r5
  float v13; // r3
  int v14; // lr
  float v15; // r4
  int v16; // r5
  int v17; // r5
  int v18; // r5
  float *v19; // r3
  int i; // r12
  float *v21; // r3
  float *v22; // r5
  float v23; // s2
  int v24; // lr
  int v25; // r4
  int v26; // r4
  _DWORD *v27; // r3
  float v28; // s0
  int v29; // r7

  v2 = *(float *)result;
  v3 = FIELD_F32(result, 8);
  v4 = (float *)(result + 16);
  v5 = 0;
  v6 = 0;
  if ( v3 <= *(float *)result )
  {
    v6 = 1;
    if ( v3 >= *(float *)result )
      v6 = FIELD_U32(result, 12) < FIELD_U32(result, 4);
  }
  v7 = *v4;
  if ( *v4 <= v3 )
  {
    v5 = 1;
    if ( *v4 >= v3 )
      v5 = FIELD_U32(result, 20) < FIELD_U32(result, 12);
  }
  v8 = (_DWORD *)(result + 8);
  if ( v6 )
  {
    v9 = *(float *)result;
    v10 = FIELD_U32(result, 4);
    if ( v5 )
    {
      v11 = FIELD_U32(result, 20);
      v7 = *(float *)result;
      *(float *)result = *v4;
      FIELD_U32(result, 4) = v11;
LABEL_19:
      *v4 = v9;
      FIELD_U32(result, 20) = v10;
      goto LABEL_20;
    }
    v17 = FIELD_U32(result, 12);
    *(_DWORD *)result = *v8;
    FIELD_U32(result, 4) = v17;
    *(float *)v8 = v9;
    FIELD_U32(result, 12) = v10;
    if ( v7 <= v9 && (v7 < v9 || FIELD_U32(result, 20) < v10) )
    {
      v18 = FIELD_U32(result, 20);
      v7 = v9;
      *v8 = *(_DWORD *)v4;
      FIELD_U32(result, 12) = v18;
      goto LABEL_19;
    }
  }
  else if ( v5 )
  {
    v12 = FIELD_U32(result, 12);
    v13 = *v4;
    v14 = FIELD_U32(result, 20);
    v7 = *(float *)v8;
    *v8 = *(_DWORD *)v4;
    FIELD_U32(result, 12) = v14;
    *v4 = v7;
    FIELD_U32(result, 20) = v12;
    if ( v13 <= v2 && (v13 < v2 || v14 < FIELD_U32(result, 4)) )
    {
      v15 = *(float *)result;
      v16 = FIELD_U32(result, 4);
      *(float *)result = v13;
      FIELD_U32(result, 4) = v14;
      *(float *)v8 = v15;
      FIELD_U32(result, 12) = v16;
    }
  }
LABEL_20:
  v19 = (float *)(result + 24);
  if ( (float *)(result + 24) != a2 )
  {
    for ( i = 0; ; i += 8 )
    {
      v22 = v19;
      v23 = *v19;
      if ( *v19 <= v7 )
      {
        v24 = *((_DWORD *)v19 + 1);
        if ( *v19 < v7 || v24 < *((_DWORD *)v4 + 1) )
        {
          v25 = *((_DWORD *)v4 + 1);
          *v19 = *v4;
          *((_DWORD *)v19 + 1) = v25;
          v21 = (float *)result;
          if ( v4 != (float *)result )
          {
            v26 = i;
            do
            {
              v27 = (_DWORD *)(result + v26);
              v28 = *(float *)(result + v26 + 8);
              if ( v23 > v28 )
              {
                v21 = v4;
                goto LABEL_24;
              }
              if ( v23 >= v28 && v24 >= v27[3] )
              {
                v21 = (float *)(v27 + 4);
                goto LABEL_24;
              }
              v29 = v27[3];
              v26 -= 8;
              v4 -= 2;
              v27[4] = v27[2];
              v27[5] = v29;
            }
            while ( v26 != -16 );
            v21 = (float *)result;
          }
LABEL_24:
          *v21 = v23;
          *((_DWORD *)v21 + 1) = v24;
        }
      }
      v19 = v22 + 2;
      if ( v22 + 2 == a2 )
        break;
      v7 = *v22;
      v4 = v22;
    }
  }
  return result;
}
