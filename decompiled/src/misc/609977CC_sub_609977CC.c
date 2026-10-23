/* sub_609977CC
 * address: 0x609977CC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_609977CC(int a1, int a2)
{
  int v3; // r4
  _BOOL4 v4; // r1
  _BOOL4 result; // r0

  v3 = FIELD_U32(a1, 16);
  v4 = sub_6098BDC8(v3);
  result = 0;
  if ( v4 && (*(_BYTE *)(FIELD_U32(v3, 28) + 28) & 2) != 0 && (*(_BYTE *)(FIELD_U32(a1, 12) + 30) & 0x10) != 0 )
    return sub_6098BED8(v3) == a2;
  return result;
}
