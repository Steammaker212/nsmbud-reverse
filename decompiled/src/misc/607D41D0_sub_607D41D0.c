/* sub_607D41D0
 * address: 0x607D41D0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607D41D0(_DWORD *a1)
{
  unsigned int result; // r0

  sub_6077015C(a1);
  result = a1[309] & 0xFEFFFFFF;
  a1[309] = result;
  return result;
}
