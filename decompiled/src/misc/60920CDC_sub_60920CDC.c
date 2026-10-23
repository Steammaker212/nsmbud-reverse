/* sub_60920CDC
 * address: 0x60920CDC   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60920CDC(int a1, int a2)
{
  int v2; // r2

  v2 = a1 + 64;
  *(_BYTE *)a2 = 1;
  FIELD_U8(a2, 1) |= 1u;
  FIELD_U32(a2, 8) = v2;
  return a2;
}
