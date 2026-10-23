/* sub_60836094
 * address: 0x60836094   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60836094(int a1, int a2, int a3, int *a4)
{
  int v4; // r5
  int v5; // r4
  int v9; // r6
  int v10; // r7
  int v11; // r0
  int v12; // r3
  bool v13; // zf
  int v14; // r3
  int v15; // r6
  _BYTE v17[4]; // [sp+Ch] [bp-44h] BYREF
  int v18; // [sp+10h] [bp-40h] BYREF
  int v19; // [sp+14h] [bp-3Ch] BYREF
  int v20; // [sp+18h] [bp-38h] BYREF
  int v21; // [sp+1Ch] [bp-34h]
  int v22; // [sp+20h] [bp-30h]
  int v23; // [sp+24h] [bp-2Ch]
  int v24; // [sp+28h] [bp-28h]
  int v25; // [sp+2Ch] [bp-24h]

  v4 = FIELD_U32(a2, 16);
  v5 = FIELD_U32(a2, 8);
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  if ( v4 )
  {
    dword_60CC7544(v4, &v19, v17);
    dword_60CC7558(v4, &v18);
  }
  else
  {
    v19 = 0;
    v18 = dword_60CC757C(v5);
  }
  v9 = dword_60CC7580(v5);
  v10 = dword_60CC7584(v5);
  v24 = v10;
  v11 = dword_60CC7588(v5);
  v12 = 1;
  v25 = v11;
  if ( v9 >> v19 > 1 )
    v12 = v9 >> v19;
  v23 = v12;
  v13 = v18 == 0;
  if ( v18 )
    v13 = v18 == 3;
  if ( !v13 )
  {
    v14 = 1;
    v15 = 1;
    if ( v10 >> v19 > 1 )
      v15 = v10 >> v19;
    v24 = v15;
    if ( v18 == 2 )
    {
      if ( v11 >> v19 > 1 )
        v14 = v11 >> v19;
      v25 = v14;
    }
  }
  if ( a4 )
  {
    if ( v18 == 3 )
    {
      v21 = *a4;
      v24 = a4[1];
    }
    else if ( (v18 | 2) == 6 )
    {
      v22 = *a4;
      v25 = a4[1];
    }
  }
  return dword_60CC7930(FIELD_U32(a1, 184), v5, v4, &v20, a3, 15);
}
