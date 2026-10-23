/* sub_60895138
 * address: 0x60895138   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60895138(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r0
  float v10; // s0
  int v11; // r1
  float v12; // s2
  float v13; // r1
  int v14; // r3
  int v15; // r4
  float v16; // s2
  float v17; // s0
  float v18; // r1
  int v19; // r2
  int v20; // r5
  float v21; // s2
  float v22; // s0
  float v23; // r1
  int v24; // r2
  int v25; // r7
  float v26; // s2
  float v27; // s0
  float v28; // r1
  int v29; // r2
  int v30; // r7

  v9 = sub_60894E9C(a1, a2, a3, a4);
  v10 = *(float *)a4;
  v11 = v9;
  v12 = *(float *)a5;
  if ( *(float *)a5 >= 0.0 )
  {
    if ( v12 <= v10 )
      return v11;
  }
  else if ( v12 >= v10 )
  {
    return v11;
  }
  v13 = *(float *)a4;
  v14 = FIELD_U32(a4, 4);
  v15 = FIELD_U32(a5, 4);
  *(_DWORD *)a4 = *(_DWORD *)a5;
  FIELD_U32(a4, 4) = v15;
  *(float *)a5 = v13;
  FIELD_U32(a5, 4) = v14;
  v11 = v9 + 1;
  v16 = *(float *)a4;
  v17 = *(float *)a3;
  if ( *(float *)a4 >= 0.0 )
  {
    if ( v16 <= v17 )
      return v11;
  }
  else if ( v16 >= v17 )
  {
    return v11;
  }
  v18 = *(float *)a3;
  v19 = FIELD_U32(a3, 4);
  v20 = FIELD_U32(a4, 4);
  *(_DWORD *)a3 = *(_DWORD *)a4;
  FIELD_U32(a3, 4) = v20;
  *(float *)a4 = v18;
  FIELD_U32(a4, 4) = v19;
  v11 = v9 + 2;
  v21 = *(float *)a3;
  v22 = *(float *)a2;
  if ( *(float *)a3 >= 0.0 )
  {
    if ( v21 <= v22 )
      return v11;
  }
  else if ( v21 >= v22 )
  {
    return v11;
  }
  v23 = *(float *)a2;
  v24 = FIELD_U32(a2, 4);
  v25 = FIELD_U32(a3, 4);
  *(_DWORD *)a2 = *(_DWORD *)a3;
  FIELD_U32(a2, 4) = v25;
  *(float *)a3 = v23;
  FIELD_U32(a3, 4) = v24;
  v11 = v9 + 3;
  v26 = *(float *)a2;
  v27 = *(float *)a1;
  if ( *(float *)a2 < 0.0 )
  {
    if ( v26 >= v27 )
      return v11;
    goto LABEL_17;
  }
  if ( v26 > v27 )
  {
LABEL_17:
    v28 = *(float *)a1;
    v29 = FIELD_U32(a1, 4);
    v30 = FIELD_U32(a2, 4);
    *(_DWORD *)a1 = *(_DWORD *)a2;
    FIELD_U32(a1, 4) = v30;
    *(float *)a2 = v28;
    FIELD_U32(a2, 4) = v29;
    return v9 + 4;
  }
  return v11;
}
