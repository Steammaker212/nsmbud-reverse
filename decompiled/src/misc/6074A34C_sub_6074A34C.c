/* sub_6074A34C
 * address: 0x6074A34C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074A34C(int a1)
{
  int result; // r0

  sub_605EAB48(FIELD_U32(a1, 644), 1);
  result = FIELD_U32(a1, 80) ^ 1;
  FIELD_U32(a1, 80) = result;
  return result;
}
