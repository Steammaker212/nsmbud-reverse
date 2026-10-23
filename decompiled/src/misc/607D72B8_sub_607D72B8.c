/* sub_607D72B8
 * address: 0x607D72B8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607D72B8(int a1)
{
  unsigned int result; // r0

  sub_607743D8(a1);
  FIELD_U32(a1, 1224) &= ~0x800u;
  result = FIELD_U32(a1, 1236) & 0xFEFFFFFF;
  FIELD_U32(a1, 1236) = result;
  return result;
}
