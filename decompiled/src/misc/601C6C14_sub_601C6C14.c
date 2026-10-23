/* sub_601C6C14
 * address: 0x601C6C14   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C6C14(_DWORD *a1, int a2, int a3)
{
  _DWORD *v5; // r5
  _DWORD *v6; // r4
  _DWORD *v7; // r7
  int *v8; // r6
  int v9; // r10
  int v10; // r4
  int v11; // r0
  bool v12; // zf
  int v13; // r0
  bool v14; // zf
  int v15; // r0
  bool v16; // zf
  int v17; // r0
  bool v18; // zf
  int v19; // r0
  bool v20; // zf
  int v21; // r0
  int result; // r0
  int v23; // [sp+4h] [bp-2Ch] BYREF
  int v24; // [sp+8h] [bp-28h]
  int v25; // [sp+Ch] [bp-24h]

  a1[289] = -1;
  a1[290] = -1;
  a1[291] = -1;
  v5 = (_DWORD *)sub_601E039C(a2, a3);
  v6 = v5 + 21;
  v23 = v5[21];
  v7 = v5 + 22;
  v24 = v5[22];
  v8 = v5 + 24;
  v25 = v5[24];
  if ( !sub_601C6D90(v25, &v23) )
  {
    v9 = sub_601DFFE4(a2);
    while ( 1 )
    {
      v10 = v9;
      v9 = (int)v5;
      v11 = sub_60178694((int)v5, 0);
      v5 = (_DWORD *)v11;
      v12 = v11 == 0;
      if ( v11 )
        v12 = v11 == v10;
      if ( !v12 )
        goto LABEL_29;
      v13 = sub_60178694(v9, 1u);
      v5 = (_DWORD *)v13;
      v14 = v13 == 0;
      if ( v13 )
        v14 = v13 == v10;
      if ( !v14 )
        goto LABEL_29;
      v15 = sub_60178694(v9, 2u);
      v5 = (_DWORD *)v15;
      v16 = v15 == 0;
      if ( v15 )
        v16 = v15 == v10;
      if ( !v16 )
        goto LABEL_29;
      v17 = sub_60178694(v9, 3u);
      v5 = (_DWORD *)v17;
      v18 = v17 == 0;
      if ( v17 )
        v18 = v17 == v10;
      if ( !v18 )
        goto LABEL_29;
      v19 = sub_60178694(v9, 4u);
      v5 = (_DWORD *)v19;
      v20 = v19 == 0;
      if ( v19 )
        v20 = v19 == v10;
      if ( v20 )
      {
        v21 = sub_60178694(v9, 5u);
        v5 = (_DWORD *)v21;
        if ( !v21 || v21 == v10 )
          continue;
      }
LABEL_29:
      v6 = v5 + 21;
      v23 = v5[21];
      v7 = v5 + 22;
      v24 = v5[22];
      v8 = v5 + 24;
      v25 = v5[24];
      if ( sub_601C6D90(v25, &v23) == 1 )
        break;
    }
  }
  a1[289] = *v6;
  a1[290] = *v7;
  result = *v8;
  a1[291] = *v8;
  return result;
}
