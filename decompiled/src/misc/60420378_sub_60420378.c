/* sub_60420378
 * address: 0x60420378   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60420378(int a1, int a2, int a3)
{
  int v6; // r6
  int v7; // r4
  int v8; // r5
  int v9; // r7
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r3
  int v15; // [sp+0h] [bp-38h] BYREF
  int v16; // [sp+4h] [bp-34h]
  int v17; // [sp+8h] [bp-30h]
  int v18; // [sp+Ch] [bp-2Ch]
  int v19; // [sp+10h] [bp-28h]
  int v20; // [sp+14h] [bp-24h]

  v6 = 0;
  FIELD_U32(a1, 96) = a3;
  v7 = *(_DWORD *)(FIELD_U32(a3, 24) + dword_60BF9D80[0]);
  v8 = sub_6083D5FC(v7, 0);
  v9 = sub_6083D5FC(v7, 4);
  v10 = sub_6083D5FC(v7, 3);
  if ( v8 )
  {
    v15 = FIELD_U32(v8, 8);
    v6 = FIELD_U32(v8, 16);
  }
  else
  {
    v15 = 0;
  }
  v16 = v6;
  if ( v9 )
  {
    v17 = FIELD_U32(v9, 8);
    v11 = FIELD_U32(v9, 16);
  }
  else
  {
    v11 = 0;
    v17 = 0;
  }
  v18 = v11;
  if ( v10 )
  {
    v19 = FIELD_U32(v10, 8);
    v12 = FIELD_U32(v10, 16);
  }
  else
  {
    v12 = 0;
    v19 = 0;
  }
  v20 = v12;
  FIELD_U32(a1, 92) = sub_6090FD94(&v15, 24);
  return sub_60420528(a1, a2, a3, v13, v15, v16, v17, v18, v19);
}
