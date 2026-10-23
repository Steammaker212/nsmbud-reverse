/* sub_6087ECF0
 * address: 0x6087ECF0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087ECF0(int *a1)
{
  int v1; // r2
  int v2; // r1
  int v3; // r7
  int result; // r0
  _DWORD *v5; // r6
  int v6; // r2
  int v7; // r1
  int v8; // r5
  int v9; // r0
  __int64 v10; // r2
  int v11; // r4
  __int64 v12; // [sp+8h] [bp-28h] BYREF
  int v13; // [sp+10h] [bp-20h]
  int v14; // [sp+14h] [bp-1Ch]

  v1 = a1[1];
  v2 = a1[2];
  v3 = *a1;
  result = 0;
  v5 = *(_DWORD **)(v1 + 348);
  v6 = 0;
  if ( v2 != 3 )
    v6 = v5[v2 + 146];
  if ( v5[136] )
  {
    v7 = FIELD_U32(v6, 324);
    v8 = FIELD_U32(v6, 328);
    v14 = 0;
    v13 = 0;
    v12 = 0;
    v9 = v5[5];
    v10 = FIELD_U64(v9, 384);
    v11 = FIELD_U32(v9, 392);
    v14 = FIELD_U32(v9, 396);
    v13 = v11;
    v12 = v10 + (int)v5[8];
    if ( v7 != -1 )
      sub_60836348(v3, v7, 0, &v12, v5[137]);
    if ( v8 != -1 )
      sub_60836348(v3, v8, 4, &v12, v5[137]);
    return 1;
  }
  return result;
}
