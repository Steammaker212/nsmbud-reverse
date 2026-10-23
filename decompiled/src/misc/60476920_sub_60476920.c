/* sub_60476920
 * address: 0x60476920   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60476920(int a1, int a2)
{
  char v4; // r0
  char v5; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  char v8; // [sp+6h] [bp-12h] BYREF
  char v9; // [sp+7h] [bp-11h] BYREF

  sub_609053CC(a1, &v8);
  v4 = v8;
  if ( v8 )
    v4 = 1;
  *(_BYTE *)a2 = v4;
  sub_609054D4(a1, a2 + 4);
  sub_609054D4(a1, a2 + 8);
  sub_609054D4(a1, a2 + 12);
  sub_609054D4(a1, a2 + 16);
  sub_609054A8(a1, &v7);
  FIELD_U32(a2, 20) = v7;
  sub_609053CC(a1, &v9);
  v5 = v9;
  if ( v9 )
    v5 = 1;
  FIELD_U8(a2, 24) = v5;
  sub_609054D4(a1, a2 + 28);
  sub_609054D4(a1, a2 + 32);
  sub_609054D4(a1, a2 + 36);
  return sub_609054D4(a1, a2 + 40);
}
