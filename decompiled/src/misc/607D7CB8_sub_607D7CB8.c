/* sub_607D7CB8
 * address: 0x607D7CB8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607D7CB8(int a1)
{
  unsigned int result; // r0

  sub_6076EEFC(a1);
  result = FIELD_U32(a1, 1236) & 0xFEFFFFFF;
  FIELD_U32(a1, 1236) = result;
  return result;
}
