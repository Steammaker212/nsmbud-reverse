/* sub_601D84D4
 * address: 0x601D84D4   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D84D4(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  int v6; // r8
  _DWORD *v7; // r7
  int v8; // r5
  int v9; // r0
  bool v10; // zf
  int v11; // r6
  int v12; // r0
  bool v13; // zf
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  bool v17; // zf
  int v18; // r0
  bool v19; // zf
  int v20; // r0
  bool v21; // zf

  v6 = sub_601DFFE4(a2);
  v7 = (_DWORD *)sub_60178694(v6, a3);
  v8 = 0;
  *a4 = v7[21];
  a4[1] = v7[22];
  a4[2] = v7[24];
  if ( !sub_601E02F8(a4, 0) )
    return 6;
  v9 = sub_60178694((int)v7, 0);
  v10 = v9 == 0;
  v11 = 6;
  if ( v9 )
    v10 = v9 == v6;
  if ( !v10 )
  {
    v8 = RW9M0W909_ref_22AE5C(dword_60C8D864, a4, 0, 0);
    v11 = 6;
    if ( v8 )
      v11 = 0;
  }
  v12 = sub_60178694((int)v7, 1u);
  v13 = v12 == 0;
  if ( v12 )
    v13 = v12 == v6;
  if ( !v13 && RW9M0W909_ref_22AE5C(dword_60C8D864, a4, 1, 0) )
  {
    ++v8;
    v11 = 1;
  }
  v14 = sub_60178694((int)v7, 2u);
  v15 = v14 == 0;
  if ( v14 )
    v15 = v14 == v6;
  if ( !v15 && RW9M0W909_ref_22AE5C(dword_60C8D864, a4, 2, 0) )
  {
    ++v8;
    v11 = 2;
  }
  v16 = sub_60178694((int)v7, 3u);
  v17 = v16 == 0;
  if ( v16 )
    v17 = v16 == v6;
  if ( !v17 && RW9M0W909_ref_22AE5C(dword_60C8D864, a4, 3, 0) )
  {
    ++v8;
    v11 = 3;
  }
  v18 = sub_60178694((int)v7, 4u);
  v19 = v18 == 0;
  if ( v18 )
    v19 = v18 == v6;
  if ( !v19 && RW9M0W909_ref_22AE5C(dword_60C8D864, a4, 4, 0) )
  {
    ++v8;
    v11 = 4;
  }
  v20 = sub_60178694((int)v7, 5u);
  v21 = v20 == 0;
  if ( v20 )
    v21 = v20 == v6;
  if ( !v21 && RW9M0W909_ref_22AE5C(dword_60C8D864, a4, 5, 0) )
  {
    ++v8;
    v11 = 5;
  }
  if ( v8 != 1 )
    return 6;
  return v11;
}
