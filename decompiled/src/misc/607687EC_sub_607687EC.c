/* sub_607687EC
 * address: 0x607687EC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607687EC(_DWORD *a1)
{
  unsigned int result; // r0

  sub_607865BC(a1 + 172, 10);
  a1[308] &= 0xFF8BFFFF;
  a1[303] &= ~2u;
  result = a1[2427];
  if ( result == 4 )
  {
    result = a1[309] & 0xFFFEFFFF;
    a1[309] = result;
  }
  return result;
}
