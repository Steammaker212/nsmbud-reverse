/* sub_601E0070
 * address: 0x601E0070   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E0070(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r5
  int v8; // r6
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v15; // r0
  int v16; // r1

  v4 = sub_601A4454(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v5 = sub_60178780(v4, FIELD_U32(a1, 8));
  v6 = sub_601A4454(dword_60C89E18, *(_DWORD *)a2, FIELD_U32(a2, 4));
  v7 = sub_60178780(v6, FIELD_U32(a2, 8));
  v8 = 0;
  v9 = sub_60178694(v5, 0);
  if ( v9 && v9 == v7 )
    return v8;
  v10 = sub_60178694(v5, 1u);
  v8 = v10 != 0 && v10 == v7;
  if ( v10 != 0 && v10 == v7 )
    return v8;
  v8 = 2;
  v11 = sub_60178694(v5, 2u);
  if ( v11 )
  {
    if ( v11 == v7 )
      return v8;
  }
  v8 = 3;
  v12 = sub_60178694(v5, 3u);
  if ( v12 )
  {
    if ( v12 == v7 )
      return v8;
  }
  v8 = 4;
  v13 = sub_60178694(v5, 4u);
  if ( v13 )
  {
    if ( v13 == v7 )
      return v8;
  }
  v15 = sub_60178694(v5, 5u);
  v16 = 6;
  if ( v15 == v7 )
    v16 = 5;
  if ( !v15 )
    return 6;
  return v16;
}
