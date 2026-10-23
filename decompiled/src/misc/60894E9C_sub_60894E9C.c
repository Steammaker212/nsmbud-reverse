/* sub_60894E9C
 * address: 0x60894E9C   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60894E9C(int a1, int a2, int a3, int a4)
{
  float v4; // s2
  float v5; // s0
  _BOOL4 v6; // r4
  float v7; // s0
  _BOOL4 v8; // r5
  float v9; // r4
  int v10; // lr
  int v11; // r12
  int v12; // r12
  float v13; // r5
  int v14; // r12
  int v15; // lr
  float v16; // s4
  float v17; // s2
  int v18; // r12
  float v19; // lr
  int v20; // r12
  int v21; // r5
  int v22; // r12
  float v23; // s2
  float v24; // r5
  int v25; // lr
  int v26; // r6
  int v27; // r3
  float v28; // s2
  float v29; // s0
  float v31; // r3
  int v32; // r6
  int v33; // r4
  float v34; // s2
  float v35; // s0
  float v36; // r2
  int v37; // r3
  int v38; // r5

  v4 = *(float *)a2;
  v5 = *(float *)a1;
  if ( *(float *)a2 >= 0.0 )
    v6 = v4 > v5;
  else
    v6 = v4 < v5;
  v7 = *(float *)a3;
  if ( v4 >= 0.0 )
  {
    v8 = v7 > v4;
    if ( !v6 )
    {
LABEL_12:
      v12 = 0;
      if ( !v8 )
        goto LABEL_23;
      v13 = *(float *)a2;
      v14 = FIELD_U32(a2, 4);
      v15 = FIELD_U32(a3, 4);
      *(_DWORD *)a2 = *(_DWORD *)a3;
      FIELD_U32(a2, 4) = v15;
      *(float *)a3 = v13;
      FIELD_U32(a3, 4) = v14;
      v7 = v13;
      v16 = *(float *)a2;
      v17 = *(float *)a1;
      if ( *(float *)a2 >= 0.0 )
      {
        v12 = 1;
        if ( v16 <= v17 )
          goto LABEL_23;
      }
      else
      {
        v12 = 1;
        if ( v16 >= v17 )
          goto LABEL_23;
      }
      v19 = *(float *)a1;
      v20 = FIELD_U32(a1, 4);
      v21 = FIELD_U32(a2, 4);
      *(_DWORD *)a1 = *(_DWORD *)a2;
      FIELD_U32(a1, 4) = v21;
      *(float *)a2 = v19;
      FIELD_U32(a2, 4) = v20;
      v12 = 2;
      v7 = *(float *)a3;
      goto LABEL_23;
    }
  }
  else
  {
    v8 = v7 < v4;
    if ( !v6 )
      goto LABEL_12;
  }
  v9 = *(float *)a1;
  v10 = FIELD_U32(a1, 4);
  if ( v8 )
  {
    v11 = FIELD_U32(a3, 4);
    v7 = *(float *)a1;
    *(_DWORD *)a1 = *(_DWORD *)a3;
    FIELD_U32(a1, 4) = v11;
    *(float *)a3 = v9;
    FIELD_U32(a3, 4) = v10;
    v12 = 1;
    goto LABEL_23;
  }
  v18 = FIELD_U32(a2, 4);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  FIELD_U32(a1, 4) = v18;
  *(float *)a2 = v9;
  FIELD_U32(a2, 4) = v10;
  v7 = *(float *)a3;
  if ( v9 >= 0.0 )
  {
    v12 = 1;
    if ( v7 <= v9 )
      goto LABEL_23;
    goto LABEL_22;
  }
  v12 = 1;
  if ( v7 < v9 )
  {
LABEL_22:
    v22 = FIELD_U32(a3, 4);
    v7 = v9;
    *(_DWORD *)a2 = *(_DWORD *)a3;
    FIELD_U32(a2, 4) = v22;
    v12 = 2;
    *(float *)a3 = v9;
    FIELD_U32(a3, 4) = v10;
  }
LABEL_23:
  v23 = *(float *)a4;
  if ( *(float *)a4 >= 0.0 )
  {
    if ( v23 <= v7 )
      return v12;
  }
  else if ( v23 >= v7 )
  {
    return v12;
  }
  v24 = *(float *)a3;
  v25 = FIELD_U32(a3, 4);
  v26 = FIELD_U32(a4, 4);
  *(_DWORD *)a3 = *(_DWORD *)a4;
  FIELD_U32(a3, 4) = v26;
  *(float *)a4 = v24;
  FIELD_U32(a4, 4) = v25;
  v27 = v12 + 1;
  v28 = *(float *)a3;
  v29 = *(float *)a2;
  if ( *(float *)a3 >= 0.0 )
  {
    if ( v28 <= v29 )
      return v27;
  }
  else if ( v28 >= v29 )
  {
    return v27;
  }
  v31 = *(float *)a2;
  v32 = FIELD_U32(a2, 4);
  v33 = FIELD_U32(a3, 4);
  *(_DWORD *)a2 = *(_DWORD *)a3;
  FIELD_U32(a2, 4) = v33;
  *(float *)a3 = v31;
  FIELD_U32(a3, 4) = v32;
  v27 = v12 + 2;
  v34 = *(float *)a2;
  v35 = *(float *)a1;
  if ( *(float *)a2 < 0.0 )
  {
    if ( v34 >= v35 )
      return v27;
    goto LABEL_36;
  }
  if ( v34 > v35 )
  {
LABEL_36:
    v36 = *(float *)a1;
    v37 = FIELD_U32(a1, 4);
    v38 = FIELD_U32(a2, 4);
    *(_DWORD *)a1 = *(_DWORD *)a2;
    FIELD_U32(a1, 4) = v38;
    *(float *)a2 = v36;
    FIELD_U32(a2, 4) = v37;
    return v12 + 3;
  }
  return v27;
}
