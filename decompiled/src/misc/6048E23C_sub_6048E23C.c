/* sub_6048E23C
 * address: 0x6048E23C   size: 1068   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048E23C(int a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r3
  int v7; // r0
  int v8; // r10
  int v9; // r8
  int *v10; // r11
  unsigned int v11; // r0
  int result; // r0
  int *v13; // r0
  int v14; // r2
  int v15; // r1
  int v16; // r3
  unsigned int v17; // r0
  int v18; // r1
  int v19; // r6
  int v20; // r4
  int v21; // r0
  int v22; // r1
  int v23; // r0
  unsigned int v24; // r0
  int v25; // r0
  int v26; // r7
  int v27; // r1
  int v28; // r0
  unsigned int v29; // r2
  int v30; // r4
  int v31; // r0
  int v32; // r1
  int v33; // r0
  unsigned int v34; // r0
  int v35; // r0
  int v36; // r7
  int v37; // r1
  int v38; // r0
  unsigned int v39; // r2
  int v40; // r1
  unsigned int v41; // r0
  int v42; // r1
  int v43; // r0

  v5 = a3;
  if ( ((unsigned int)&dword_60C9FD50[8] & ~(1615389284 << v3) & 1) == 0 )
  {
    v7 = _cxa_guard_acquire(&dword_60C9FD50[8]);
    v5 = a3;
    if ( v7 )
    {
      dword_60C9FE1C = 0;
      dword_60C9FE20 = 1;
      dword_60C9FE24 = 2;
      dword_60C9FE28 = 3;
      dword_60C9FE2C = 4;
      _cxa_guard_release(&dword_60C9FD50[8]);
      v5 = a3;
    }
  }
  if ( a2 )
  {
    v8 = a1 + 3768;
    v9 = 0;
    v10 = (int *)(a1 + 14228);
    do
    {
      v11 = dword_60C9FDD0[v9 + 19];
      if ( v11 >= 7 )
        v11 = 0;
      result = *(_DWORD *)(a1 + 4 * v11 + 5848);
      if ( result != v5 )
      {
        v13 = &dword_60C9FDD0[v9];
        v14 = v13[19];
        v15 = *v10;
        if ( (unsigned int)*v10 >= 4 )
          v15 = 0;
        v16 = dword_60C9FDD0[v15 + 3];
        v17 = v13[19];
        if ( v17 >= 7 )
          v17 = 0;
        v18 = a1 + 4 * v17 + 5848;
        if ( v14 == v16 )
          result = sub_60502B04(v8, v18, 1);
        else
          result = sub_60502C84(v8, v18, 0);
        v5 = a3;
      }
      ++v9;
    }
    while ( v9 != 5 );
  }
  else
  {
    v19 = a1 + 3768;
    v20 = 0;
    v21 = dword_60C9FE1C;
    if ( (unsigned int)dword_60C9FE1C >= 7 )
      v21 = 0;
    if ( *(_DWORD *)(a1 + 4 * v21 + 5848) != v5 )
    {
      v22 = a1;
      v23 = dword_60C9FE1C;
      if ( (unsigned int)dword_60C9FE1C >= 7 )
        v23 = 0;
      v24 = *(_DWORD *)(a1 + 4 * v23 + 5848);
      if ( v24 < 0x100 )
        v22 = a1 + v24;
      if ( FIELD_U8(v22, 4268) )
      {
        v25 = dword_60C9FE1C;
        if ( (unsigned int)dword_60C9FE1C >= 7 )
          v25 = 0;
        sub_60502B04(v19, a1 + 4 * v25 + 5848, 1);
        v5 = a3;
      }
    }
    if ( (unsigned int)dword_60C9FE20 < 7 )
      v20 = dword_60C9FE20;
    if ( *(_DWORD *)(a1 + 4 * v20 + 5848) != v5 )
    {
      v26 = a1;
      v27 = dword_60C9FE20;
      v28 = 0;
      if ( (unsigned int)dword_60C9FE20 >= 7 )
        v27 = 0;
      v29 = *(_DWORD *)(a1 + 4 * v27 + 5848);
      if ( v29 < 0x100 )
        v26 = a1 + v29;
      if ( FIELD_U8(v26, 4268) )
      {
        if ( (unsigned int)dword_60C9FE20 < 7 )
          v28 = dword_60C9FE20;
        sub_60502B04(v19, a1 + 4 * v28 + 5848, 1);
        v5 = a3;
      }
    }
    v30 = 0;
    v31 = dword_60C9FE24;
    if ( (unsigned int)dword_60C9FE24 >= 7 )
      v31 = 0;
    if ( *(_DWORD *)(a1 + 4 * v31 + 5848) != v5 )
    {
      v32 = a1;
      v33 = dword_60C9FE24;
      if ( (unsigned int)dword_60C9FE24 >= 7 )
        v33 = 0;
      v34 = *(_DWORD *)(a1 + 4 * v33 + 5848);
      if ( v34 < 0x100 )
        v32 = a1 + v34;
      if ( FIELD_U8(v32, 4268) )
      {
        v35 = dword_60C9FE24;
        if ( (unsigned int)dword_60C9FE24 >= 7 )
          v35 = 0;
        sub_60502B04(v19, a1 + 4 * v35 + 5848, 1);
        v5 = a3;
      }
    }
    if ( (unsigned int)dword_60C9FE28 < 7 )
      v30 = dword_60C9FE28;
    if ( *(_DWORD *)(a1 + 4 * v30 + 5848) != v5 )
    {
      v36 = a1;
      v37 = dword_60C9FE28;
      v38 = 0;
      if ( (unsigned int)dword_60C9FE28 >= 7 )
        v37 = 0;
      v39 = *(_DWORD *)(a1 + 4 * v37 + 5848);
      if ( v39 < 0x100 )
        v36 = a1 + v39;
      if ( FIELD_U8(v36, 4268) )
      {
        if ( (unsigned int)dword_60C9FE28 < 7 )
          v38 = dword_60C9FE28;
        sub_60502B04(v19, a1 + 4 * v38 + 5848, 1);
        v5 = a3;
      }
    }
    v40 = dword_60C9FE2C;
    result = 0;
    if ( (unsigned int)dword_60C9FE2C >= 7 )
      v40 = 0;
    if ( *(_DWORD *)(a1 + 4 * v40 + 5848) != v5 )
    {
      if ( (unsigned int)dword_60C9FE2C < 7 )
        result = dword_60C9FE2C;
      v41 = *(_DWORD *)(a1 + 4 * result + 5848);
      v42 = a1;
      if ( v41 < 0x100 )
        v42 = a1 + v41;
      result = FIELD_U8(v42, 4268);
      if ( FIELD_U8(v42, 4268) )
      {
        v43 = dword_60C9FE2C;
        if ( (unsigned int)dword_60C9FE2C >= 7 )
          v43 = 0;
        return sub_60502B04(v19, a1 + 4 * v43 + 5848, 1);
      }
    }
  }
  return result;
}
