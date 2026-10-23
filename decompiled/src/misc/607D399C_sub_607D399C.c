/* sub_607D399C
 * address: 0x607D399C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D399C(_DWORD *a1)
{
  int result; // r0

  sub_6076FC00(a1);
  result = a1[306] | 8;
  a1[306] = result;
  return result;
}
