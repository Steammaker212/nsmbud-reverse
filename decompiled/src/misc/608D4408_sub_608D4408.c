/* sub_608D4408
 * address: 0x608D4408   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D4408(_DWORD *a1, int a2, int a3)
{
  int v3; // r6
  _DWORD *v4; // r3
  int v5; // r5
  _DWORD *v6; // r12
  _DWORD *v7; // r4
  int v8; // r7
  int v9; // r9
  _DWORD *v10; // r10
  _DWORD *v11; // r8
  int v12; // r11
  int v13; // lr
  _DWORD *v14; // r0
  int v15; // t1
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  int v18; // lr
  int v19; // t1
  int v20; // r3
  bool v22; // zf
  int v23; // r5
  int v24; // [sp+0h] [bp-4Ch]
  int v25; // [sp+4h] [bp-48h]
  _DWORD *v26; // [sp+Ch] [bp-40h]
  _DWORD *v27; // [sp+10h] [bp-3Ch]
  int v28; // [sp+14h] [bp-38h]
  _DWORD *v29; // [sp+18h] [bp-34h]
  int v30; // [sp+1Ch] [bp-30h]
  int v31; // [sp+20h] [bp-2Ch]
  _DWORD *v32; // [sp+24h] [bp-28h]

  v3 = 0;
  v4 = a1 + 131;
  v5 = a1[131];
  v6 = a1 - 3;
  if ( v5 == a2 )
    goto LABEL_10;
  v3 = 1;
  v7 = a1 + 133;
  v8 = a1[133];
  if ( v8 == a2 )
    goto LABEL_10;
  v3 = 2;
  v10 = a1 + 135;
  v9 = a1[135];
  if ( v9 == a2 )
    goto LABEL_10;
  v3 = 3;
  v11 = a1 + 137;
  if ( a1[137] == a2 )
    goto LABEL_10;
  v32 = a1 + 139;
  v3 = 4;
  v31 = a1[139];
  v12 = a1[137];
  if ( v31 == a2 )
    goto LABEL_10;
  v29 = a1 + 141;
  v3 = 5;
  v30 = a1[141];
  if ( v30 == a2 )
    goto LABEL_10;
  v27 = a1 + 143;
  v3 = 6;
  v28 = a1[143];
  if ( v28 == a2
    || (v13 = a1[145], v26 = a1 + 145, v3 = 7, v13 == a2)
    || (v3 = 8, v15 = a1[147], v14 = a1 + 147, v25 = v15, v15 == a2) )
  {
LABEL_10:
    v16 = &v6[2 * v3];
    v19 = v16[135];
    v17 = v16 + 135;
    v18 = v19;
  }
  else
  {
    v24 = v13;
    v22 = v5 == -1;
    v18 = 0;
    v23 = 0;
    if ( !v22 )
    {
      if ( v8 == -1 )
      {
        v23 = 1;
        v4 = v7;
      }
      else if ( v9 == -1 )
      {
        v23 = 2;
        v4 = v10;
      }
      else if ( v12 == -1 )
      {
        v23 = 3;
        v4 = v11;
      }
      else if ( v31 == -1 )
      {
        v23 = 4;
        v4 = v32;
      }
      else if ( v30 == -1 )
      {
        v4 = v29;
        v23 = 5;
      }
      else if ( v28 == -1 )
      {
        v4 = v27;
        v23 = 6;
      }
      else if ( v24 == -1 )
      {
        v4 = v26;
        v23 = 7;
      }
      else
      {
        v20 = 0;
        if ( v25 != -1 )
          return v20;
        v23 = 8;
        v4 = v14;
      }
    }
    *v4 = a2;
    v17 = &v6[2 * v23 + 135];
  }
  v20 = v18;
  *v17 = a3;
  return v20;
}
