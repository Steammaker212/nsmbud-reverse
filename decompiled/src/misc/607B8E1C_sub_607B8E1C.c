/* sub_607B8E1C
 * address: 0x607B8E1C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607B8E1C(_DWORD *a1)
{
  unsigned int result; // r0

  sub_607729D8(a1);
  result = a1[306] & 0xFFFFFBFF;
  a1[306] = result;
  return result;
}
