/* sub_608952AC
 * address: 0x608952AC   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608952AC(int result, int a2)
{
  float v2; // s4
  float v3; // s2
  int v4; // r12
  _BOOL4 v5; // r3
  float v6; // s0
  _BOOL4 v7; // r6
  float *v8; // r2
  float v9; // r4
  int v10; // r3
  int v11; // r7
  float v12; // r7
  int v13; // r5
  float v14; // r3
  int v15; // r6
  int v16; // r6
  float v17; // r7
  int v18; // r5
  int v19; // r6
  int v20; // r9
  int i; // r8
  _DWORD *v22; // r5
  int v23; // r3
  int v24; // r4
  float *v25; // r4
  float v26; // s2
  int v27; // lr
  int v28; // r4
  int v29; // r6
  int v30; // r5
  int v31; // r7
  float v32; // s0
  int v33; // r3
  int v34; // r7
  int v35; // r2

  v2 = FIELD_F32(result, 8);
  v3 = *(float *)result;
  v4 = result + 16;
  if ( v2 >= 0.0 )
    v5 = v2 > v3;
  else
    v5 = v2 < v3;
  v6 = *(float *)v4;
  if ( v2 >= 0.0 )
    v7 = v6 > v2;
  else
    v7 = v6 < v2;
  v8 = (float *)(result + 8);
  if ( !v5 )
  {
    if ( !v7 )
      goto LABEL_22;
    v12 = *v8;
    v13 = FIELD_U32(result, 12);
    v14 = *(float *)v4;
    v15 = FIELD_U32(result, 20);
    *v8 = *(float *)v4;
    FIELD_U32(result, 12) = v15;
    v6 = v12;
    *(float *)v4 = v12;
    FIELD_U32(result, 20) = v13;
    if ( v14 >= 0.0 )
    {
      if ( v14 <= v3 )
        goto LABEL_22;
    }
    else if ( v14 >= v3 )
    {
      goto LABEL_22;
    }
    v17 = *(float *)result;
    v18 = FIELD_U32(result, 4);
    *(float *)result = v14;
    FIELD_U32(result, 4) = v15;
    *v8 = v17;
    FIELD_U32(result, 12) = v18;
    goto LABEL_22;
  }
  v9 = *(float *)result;
  v10 = FIELD_U32(result, 4);
  if ( v7 )
  {
    v11 = FIELD_U32(result, 20);
    v6 = *(float *)result;
    *(_DWORD *)result = *(_DWORD *)v4;
    FIELD_U32(result, 4) = v11;
LABEL_21:
    *(float *)v4 = v9;
    FIELD_U32(result, 20) = v10;
    goto LABEL_22;
  }
  v16 = FIELD_U32(result, 12);
  *(float *)result = *v8;
  FIELD_U32(result, 4) = v16;
  *v8 = v9;
  FIELD_U32(result, 12) = v10;
  if ( v9 >= 0.0 )
  {
    if ( v6 <= v9 )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( v6 < v9 )
  {
LABEL_20:
    v19 = FIELD_U32(result, 20);
    v6 = v9;
    *v8 = *(float *)v4;
    FIELD_U32(result, 12) = v19;
    goto LABEL_21;
  }
LABEL_22:
  v20 = result + 24;
  if ( result + 24 != a2 )
  {
    for ( i = 0; ; i += 8 )
    {
      v26 = *(float *)v20;
      if ( *(float *)v20 >= 0.0 )
      {
        if ( v26 <= v6 )
          goto LABEL_30;
      }
      else if ( v26 >= v6 )
      {
        goto LABEL_30;
      }
      v27 = FIELD_U32(v20, 4);
      v28 = FIELD_U32(v4, 4);
      *(_DWORD *)v20 = *(_DWORD *)v4;
      FIELD_U32(v20, 4) = v28;
      v25 = (float *)result;
      if ( v4 != result )
      {
        v24 = i;
        if ( v26 >= 0.0 )
        {
          while ( 1 )
          {
            v22 = (_DWORD *)(result + v24);
            if ( v26 <= *(float *)(result + v24 + 8) )
              break;
            v23 = v22[3];
            v24 -= 8;
            v22[4] = v22[2];
            v22[5] = v23;
            if ( v24 == -16 )
            {
              v25 = (float *)result;
              goto LABEL_29;
            }
          }
          v25 = (float *)(v22 + 4);
        }
        else
        {
          v29 = result + i;
          v30 = 0;
          v25 = (float *)v4;
          do
          {
            v31 = v29 + v30;
            v32 = *(float *)(v29 + v30 + 8);
            if ( v32 >= 0.0 )
            {
              if ( v26 <= v32 )
              {
                v25 = (float *)(v4 + v30);
                goto LABEL_29;
              }
            }
            else if ( v26 >= v32 )
            {
              goto LABEL_29;
            }
            v33 = FIELD_U32(v31, 8);
            v34 = FIELD_U32(v31, 12);
            v25 -= 2;
            *(_DWORD *)(v4 + v30) = v33;
            v35 = v4 + v30;
            v30 -= 8;
            FIELD_U32(v35, 4) = v34;
          }
          while ( i + v30 != -16 );
          v25 = (float *)result;
        }
      }
LABEL_29:
      *v25 = v26;
      *((_DWORD *)v25 + 1) = v27;
LABEL_30:
      if ( v20 + 8 == a2 )
        return result;
      v6 = *(float *)v20;
      v4 += 8;
      v20 += 8;
    }
  }
  return result;
}
