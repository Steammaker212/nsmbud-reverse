/* sub_604769E0
 * address: 0x604769E0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604769E0(int a1, int a2)
{
  char v4; // r0
  int result; // r0
  int v6; // [sp+0h] [bp-18h] BYREF
  char v7; // [sp+6h] [bp-12h] BYREF
  unsigned __int8 v8; // [sp+7h] [bp-11h] BYREF

  sub_60905500(a1, a2, FIELD_U32(a2, 8) - 1);
  sub_609054A8(a1, a2 + 76);
  sub_609054A8(a1, &v6);
  FIELD_U32(a2, 80) = v6;
  sub_609053CC(a1, &v7);
  v4 = v7;
  if ( v7 )
    v4 = 1;
  FIELD_U8(a2, 84) = v4;
  sub_609053CC(a1, &v8);
  result = v8;
  if ( v8 )
    result = 1;
  FIELD_U8(a2, 85) = result;
  return result;
}
