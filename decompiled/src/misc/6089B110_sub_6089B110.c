/* sub_6089B110
 * address: 0x6089B110   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089B110(int a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  _DWORD *v8; // r3
  int v9; // r1
  int v10; // r7
  int v11; // r1
  int v12; // r0
  __int64 v13; // r2
  int v14; // r7
  int v15; // r1
  int v16; // r7
  int v17; // r0
  int v18; // r1
  int v19; // r0
  __int64 v20; // r2
  int v21; // r7
  int v22; // r1
  int v23; // r5
  __int64 v25; // [sp+8h] [bp-30h] BYREF
  int v26; // [sp+10h] [bp-28h]
  int v27; // [sp+14h] [bp-24h]

  v8 = *(_DWORD **)(a5 + 32);
  if ( v8 )
  {
    v9 = a4[71];
    v10 = a4[72];
    if ( v9 != -1 )
      sub_60836348(a2, v9, 0, v8, 320);
    if ( v10 != -1 )
      sub_60836348(a2, v10, 4, *(_DWORD **)(a5 + 32), 320);
  }
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v11 = a3[317];
  v12 = a3[a3[12] + 314];
  v13 = FIELD_U64(v11, 384);
  v14 = FIELD_U32(v11, 392);
  v27 = FIELD_U32(v11, 396);
  v26 = v14;
  v25 = v12 - FIELD_U32(v11, 404) + v13;
  v15 = a4[75];
  v16 = a4[76];
  if ( v15 != -1 )
    sub_60836348(a2, v15, 0, &v25, 192);
  if ( v16 != -1 )
    sub_60836348(a2, v16, 4, &v25, 192);
  v17 = a3[87];
  v18 = FIELD_U32(v17, 20);
  v19 = FIELD_U32(v17, 24);
  v20 = FIELD_U64(v18, 384);
  v21 = FIELD_U32(v18, 392);
  v27 = FIELD_U32(v18, 396);
  v26 = v21;
  v25 = v20 + v19;
  v22 = a4[73];
  v23 = a4[74];
  if ( v22 != -1 )
    sub_60836348(a2, v22, 0, &v25, 1872);
  if ( v23 != -1 )
    sub_60836348(a2, v23, 4, &v25, 1872);
  return 1;
}
