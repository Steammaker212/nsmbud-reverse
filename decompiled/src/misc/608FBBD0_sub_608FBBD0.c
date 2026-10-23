/* sub_608FBBD0
 * address: 0x608FBBD0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FBBD0(unsigned int a1, char a2)
{
  unsigned int v2; // r0
  unsigned int v3; // r0

  v2 = ((((1 << a2) - 1) | (1 << a2)) & a1) - ((((((1 << a2) - 1) | (1 << a2)) & a1) >> 1) & 0x55555555);
  v3 = (((v2 >> 2) & 0x33333333) + (v2 & 0x33333333) + ((((v2 >> 2) & 0x33333333) + (v2 & 0x33333333)) >> 4))
     & 0xF0F0F0F;
  return ((_BYTE)v3 + BYTE1(v3) + (unsigned __int8)((v3 + (v3 >> 8)) >> 16)) & 0x3F;
}
