/* sub_601E17C0
 * address: 0x601E17C0   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E17C0(int a1, unsigned int a2, int *a3, int a4)
{
  int v8; // r0
  int v9; // r9
  _DWORD *v10; // r6
  int v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r0
  int result; // r0
  int v16; // r7
  int v17; // r0
  bool v18; // zf
  int v19; // r4
  int v20; // r0
  bool v21; // zf
  int v22; // r0
  bool v23; // zf
  int v24; // r0
  bool v25; // zf
  int v26; // r0
  bool v27; // zf
  bool v28; // zf
  _DWORD v29[11]; // [sp+4h] [bp-2Ch] BYREF

  v8 = sub_601A4454(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v9 = sub_60178780(v8, FIELD_U32(a1, 8));
  v10 = (_DWORD *)sub_60178694(v9, a2);
  v11 = v10[21];
  *a3 = v11;
  v12 = v10[22];
  a3[1] = v12;
  a3[2] = v10[24];
  v13 = sub_601A4454(dword_60C89E18, v11, v12);
  v14 = sub_60178780(v13, a3[2]);
  result = sub_60178798(v14, a3);
  if ( result )
  {
    v16 = 0;
    v17 = sub_60178694((int)v10, 0);
    v18 = v17 == 0;
    v19 = 6;
    if ( v17 )
      v18 = v17 == v9;
    if ( !v18 )
    {
      v16 = RW9M0W909_ref_22AE5C(dword_60C8D864, a3, 0, 0);
      v19 = 6;
      if ( v16 )
        v19 = 0;
    }
    v20 = sub_60178694((int)v10, 1u);
    v21 = v20 == 0;
    if ( v20 )
      v21 = v20 == v9;
    if ( !v21 && RW9M0W909_ref_22AE5C(dword_60C8D864, a3, 1, 0) )
    {
      ++v16;
      v19 = 1;
    }
    v22 = sub_60178694((int)v10, 2u);
    v23 = v22 == 0;
    if ( v22 )
      v23 = v22 == v9;
    if ( !v23 && RW9M0W909_ref_22AE5C(dword_60C8D864, a3, 2, 0) )
    {
      ++v16;
      v19 = 2;
    }
    v24 = sub_60178694((int)v10, 3u);
    v25 = v24 == 0;
    if ( v24 )
      v25 = v24 == v9;
    if ( !v25 && RW9M0W909_ref_22AE5C(dword_60C8D864, a3, 3, 0) )
    {
      ++v16;
      v19 = 3;
    }
    v26 = sub_60178694((int)v10, 4u);
    v27 = v26 == 0;
    if ( v26 )
      v27 = v26 == v9;
    if ( !v27 && RW9M0W909_ref_22AE5C(dword_60C8D864, a3, 4, 0) )
    {
      ++v16;
      v19 = 4;
    }
    result = sub_60178694((int)v10, 5u);
    v28 = result == 0;
    if ( result )
      v28 = result == v9;
    if ( !v28 )
    {
      result = RW9M0W909_ref_22AE5C(dword_60C8D864, a3, 5, 0);
      if ( result )
      {
        ++v16;
        v19 = 5;
      }
    }
    if ( v16 == 1 )
    {
      v29[0] = v10[21];
      v29[1] = v10[22];
      v29[2] = v10[24];
      return sub_601E17C0(v29, v19, a3, a4);
    }
  }
  return result;
}
