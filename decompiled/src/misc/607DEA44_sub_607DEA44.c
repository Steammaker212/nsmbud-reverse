/* sub_607DEA44
 * address: 0x607DEA44   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DEA44(int a1, _DWORD *a2, int a3)
{
  int v6; // r4
  bool v7; // zf
  _DWORD *v8; // r0
  int *v9; // r1
  int v10; // r3
  _DWORD *v11; // r2
  int v12; // r3
  int v13; // r7
  bool v14; // vf
  int v15; // r3
  int v16; // r7
  int v17; // r6
  int v18; // r12
  int v19; // r3
  int v20; // r7
  int v21; // r6
  int v22; // r2
  int v23; // r2
  int v24; // r7
  int v25; // r0
  int v26; // r0
  _DWORD *v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r0

  v6 = a1 + 72;
  sead__CriticalSection__lock(a1 + 72);
  v7 = dword_60C9CF18 == 0;
  if ( dword_60C9CF18 )
    v7 = FIELD_U8(dword_60C9CF18, 2597) == 0;
  if ( v7 && FIELD_U8(a1, 2872) )
  {
    v8 = (_DWORD *)(a1 + 40 * a3);
    v9 = v8 + 32;
    v10 = v8[32];
    if ( !v10 )
    {
      v29 = v8[33];
      v30 = v8[34];
      v31 = v8[35];
      v32 = v8[36];
      *a2 = v29;
      a2[1] = v30;
      a2[2] = v31;
      a2[3] = v32;
      return sead__CriticalSection__unlock(v6);
    }
    v11 = (_DWORD *)v8[29];
    if ( v10 >= 1 )
    {
      v12 = v8[30];
      v13 = v8[31];
      v14 = __OFSUB__(v13, v12);
      v15 = v13 - v12;
      if ( v15 < 0 != v14 )
        v15 = v8[31];
      v11 += 4 * v15;
    }
    v16 = v11[1];
    v17 = v11[2];
    v18 = v11[3];
    v8[33] = *v11;
    v8[34] = v16;
    v8[35] = v17;
    v8[36] = v18;
    v19 = *v11;
    v20 = v11[1];
    v21 = v11[2];
    v22 = v11[3];
    *a2 = v19;
    a2[1] = v20;
    a2[2] = v21;
    a2[3] = v22;
    v23 = *v9;
    if ( *v9 >= 1 )
    {
      v24 = v8[31] + 1;
      if ( v24 >= v8[30] )
        v24 = 0;
      v8[31] = v24;
      v25 = v23 - 1;
LABEL_19:
      *v9 = v25;
    }
  }
  else
  {
    v26 = 0;
    *a2 = 0;
    a2[1] = 1126170624;
    a2[2] = 0;
    a2[3] = 1134559232;
    v27 = (_DWORD *)(a1 + 40 * a3);
    v9 = v27 + 32;
    v28 = v27[32];
    if ( v28 >= 1 )
    {
      if ( v27[31] + 1 < v27[30] )
        v26 = v27[31] + 1;
      v27[31] = v26;
      v25 = v28 - 1;
      goto LABEL_19;
    }
  }
  return sead__CriticalSection__unlock(v6);
}
