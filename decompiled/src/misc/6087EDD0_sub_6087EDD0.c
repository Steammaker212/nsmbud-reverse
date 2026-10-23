/* sub_6087EDD0
 * address: 0x6087EDD0   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087EDD0(int *a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // r6
  int v5; // r7
  bool v6; // zf
  int v7; // r5
  bool v8; // zf
  _DWORD *v9; // r5
  int v10; // r8
  int v11; // r0
  int v12; // r1
  int v13; // r9
  int v14; // r0
  __int64 v15; // r2
  int v16; // r6
  int v17; // r8
  int v18; // r1
  int v19; // r2
  _DWORD *v20; // r0
  int v21; // r1
  int v22; // r4
  _DWORD *v23; // r2
  unsigned int v24; // r3
  unsigned int v25; // r7
  int v26; // r6
  unsigned __int64 v28; // [sp+8h] [bp-30h] BYREF
  int v29; // [sp+10h] [bp-28h]
  int v30; // [sp+14h] [bp-24h]

  v2 = a1[1];
  v3 = FIELD_U32(v2, 704);
  v4 = FIELD_U32(v2, 708);
  v5 = FIELD_U32(v2, 712);
  v6 = v3 == 0;
  if ( v3 )
  {
    v2 = FIELD_U32(v3, 40);
    v6 = v2 == 0;
  }
  if ( v6 || (v7 = 0, ((int (__fastcall *)(int *))v2)(a1) == 1) )
  {
    v8 = v4 == 0;
    if ( v4 )
    {
      v2 = FIELD_U32(v4, 40);
      v8 = v2 == 0;
    }
    if ( v8 )
    {
      v9 = *(_DWORD **)(a1[1] + 348);
      if ( v9[136] )
      {
        v10 = *a1;
        v11 = v9[a1[2] + 146];
        v12 = FIELD_U32(v11, 324);
        v13 = FIELD_U32(v11, 328);
        v30 = 0;
        v29 = 0;
        v28 = 0;
        v14 = v9[5];
        v15 = FIELD_U64(v14, 384);
        v16 = FIELD_U32(v14, 392);
        v30 = FIELD_U32(v14, 396);
        v29 = v16;
        v28 = v15 + (int)v9[8];
        if ( v12 != -1 )
          sub_60836348(v10, v12, 0, &v28, v9[137]);
        if ( v13 != -1 )
          sub_60836348(v10, v13, 4, &v28, v9[137]);
      }
    }
    else
    {
      v7 = 0;
      if ( !((int (__fastcall *)(int *))v2)(a1) )
        return v7;
    }
    v7 = 1;
    if ( v5 && !FIELD_U32(v5, 40) )
    {
      v17 = *a1;
      v18 = a1[2];
      v19 = 0;
      v20 = *(_DWORD **)(a1[1] + 348);
      if ( v18 != 3 )
        v19 = v20[v18 + 146];
      if ( v20[145] )
      {
        v21 = FIELD_U32(v19, 324);
        v22 = FIELD_U32(v19, 328);
        v30 = 0;
        v29 = 0;
        v28 = 0;
        v23 = (_DWORD *)v20[5];
        v24 = v23[96];
        v25 = v23[97];
        v26 = v23[98];
        v30 = v23[99];
        v29 = v26;
        v28 = __PAIR64__(v25, v24);
        v28 = __PAIR64__(v25, v24) + (int)v20[7];
        if ( v21 != -1 )
          sub_60836348(v17, v21, 0, &v28, 128);
        if ( v22 != -1 )
          sub_60836348(v17, v22, 4, &v28, 128);
      }
    }
  }
  return v7;
}
