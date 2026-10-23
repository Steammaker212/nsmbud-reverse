/* sub_6089270C
 * address: 0x6089270C   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089270C(int a1, int a2, int a3, int a4)
{
  float v4; // s2
  _BOOL4 v5; // lr
  _BOOL4 v6; // r5
  float v7; // s0
  float v8; // r5
  int v9; // r7
  int v10; // r6
  int v11; // r12
  float v12; // r5
  int v13; // r12
  int v14; // lr
  float v15; // lr
  int v16; // r12
  int v17; // r5
  int v18; // r4
  int v19; // r4
  float v20; // r7
  int v21; // r6
  int v22; // r4
  int v23; // r3
  float v24; // r3
  int v25; // r7
  int v26; // r5
  float v27; // r2
  int v28; // r3
  int v29; // r6

  v4 = *(float *)a2;
  v5 = 0;
  v6 = 0;
  if ( *(float *)a2 >= *(float *)a1 )
  {
    v6 = 1;
    if ( *(float *)a2 <= *(float *)a1 )
      v6 = FIELD_U32(a2, 4) < FIELD_U32(a1, 4);
  }
  v7 = *(float *)a3;
  if ( *(float *)a3 >= v4 )
  {
    v5 = 1;
    if ( *(float *)a3 <= v4 )
      v5 = FIELD_U32(a3, 4) < FIELD_U32(a2, 4);
  }
  if ( v6 )
  {
    v8 = *(float *)a1;
    v9 = FIELD_U32(a1, 4);
    if ( v5 )
    {
      v10 = FIELD_U32(a3, 4);
      v7 = *(float *)a1;
      v11 = 1;
      *(_DWORD *)a1 = *(_DWORD *)a3;
      FIELD_U32(a1, 4) = v10;
LABEL_19:
      *(float *)a3 = v8;
      FIELD_U32(a3, 4) = v9;
      goto LABEL_20;
    }
    v18 = FIELD_U32(a2, 4);
    v11 = 1;
    *(_DWORD *)a1 = *(_DWORD *)a2;
    FIELD_U32(a1, 4) = v18;
    *(float *)a2 = v8;
    FIELD_U32(a2, 4) = v9;
    v7 = *(float *)a3;
    if ( *(float *)a3 >= v8 && (*(float *)a3 > v8 || FIELD_U32(a3, 4) < v9) )
    {
      v19 = FIELD_U32(a3, 4);
      v7 = v8;
      v11 = 2;
      *(_DWORD *)a2 = *(_DWORD *)a3;
      FIELD_U32(a2, 4) = v19;
      goto LABEL_19;
    }
  }
  else
  {
    v11 = 0;
    if ( v5 )
    {
      v12 = *(float *)a2;
      v13 = FIELD_U32(a2, 4);
      v14 = FIELD_U32(a3, 4);
      *(_DWORD *)a2 = *(_DWORD *)a3;
      FIELD_U32(a2, 4) = v14;
      *(float *)a3 = v12;
      FIELD_U32(a3, 4) = v13;
      v7 = v12;
      v11 = 1;
      if ( *(float *)a2 >= *(float *)a1 && (*(float *)a2 > *(float *)a1 || FIELD_U32(a2, 4) < FIELD_U32(a1, 4)) )
      {
        v15 = *(float *)a1;
        v16 = FIELD_U32(a1, 4);
        v17 = FIELD_U32(a2, 4);
        *(_DWORD *)a1 = *(_DWORD *)a2;
        FIELD_U32(a1, 4) = v17;
        *(float *)a2 = v15;
        FIELD_U32(a2, 4) = v16;
        v11 = 2;
        v7 = *(float *)a3;
      }
    }
  }
LABEL_20:
  if ( *(float *)a4 < v7 || *(float *)a4 <= v7 && FIELD_U32(a4, 4) >= FIELD_U32(a3, 4) )
    return v11;
  v20 = *(float *)a3;
  v21 = FIELD_U32(a3, 4);
  v22 = FIELD_U32(a4, 4);
  *(_DWORD *)a3 = *(_DWORD *)a4;
  FIELD_U32(a3, 4) = v22;
  *(float *)a4 = v20;
  FIELD_U32(a4, 4) = v21;
  v23 = v11 + 1;
  if ( *(float *)a3 >= *(float *)a2 && (*(float *)a3 > *(float *)a2 || FIELD_U32(a3, 4) < FIELD_U32(a2, 4)) )
  {
    v24 = *(float *)a2;
    v25 = FIELD_U32(a2, 4);
    v26 = FIELD_U32(a3, 4);
    *(_DWORD *)a2 = *(_DWORD *)a3;
    FIELD_U32(a2, 4) = v26;
    *(float *)a3 = v24;
    FIELD_U32(a3, 4) = v25;
    v23 = v11 + 2;
    if ( *(float *)a2 >= *(float *)a1 && (*(float *)a2 > *(float *)a1 || FIELD_U32(a2, 4) < FIELD_U32(a1, 4)) )
    {
      v27 = *(float *)a1;
      v28 = FIELD_U32(a1, 4);
      v29 = FIELD_U32(a2, 4);
      *(_DWORD *)a1 = *(_DWORD *)a2;
      FIELD_U32(a1, 4) = v29;
      *(float *)a2 = v27;
      FIELD_U32(a2, 4) = v28;
      return v11 + 3;
    }
  }
  return v23;
}
