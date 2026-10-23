/* sub_607AEC5C
 * address: 0x607AEC5C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607AEC5C(_DWORD *a1)
{
  unsigned int result; // r0

  sub_6076FC5C(a1);
  result = a1[306] & 0xFFFFFFFB;
  a1[306] = result;
  return result;
}
