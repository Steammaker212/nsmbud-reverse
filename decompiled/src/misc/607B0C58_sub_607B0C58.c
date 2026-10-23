/* sub_607B0C58
 * address: 0x607B0C58   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607B0C58(_DWORD *a1)
{
  unsigned int result; // r0

  sub_6077015C(a1);
  a1[306] &= 0xFBFFB82B;
  result = a1[307] & 0xFFFEFFFF;
  a1[307] = result;
  return result;
}
