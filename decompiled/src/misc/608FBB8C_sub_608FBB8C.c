/* sub_608FBB8C
 * address: 0x608FBB8C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FBB8C(unsigned int a1)
{
  unsigned int v1; // r0

  v1 = ((((a1 - ((a1 >> 1) & 0x55555555)) >> 2) & 0x33333333)
      + ((a1 - ((a1 >> 1) & 0x55555555)) & 0x33333333)
      + (((((a1 - ((a1 >> 1) & 0x55555555)) >> 2) & 0x33333333) + ((a1 - ((a1 >> 1) & 0x55555555)) & 0x33333333)) >> 4))
     & 0xF0F0F0F;
  return ((_BYTE)v1 + BYTE1(v1) + (unsigned __int8)((v1 + (v1 >> 8)) >> 16)) & 0x3F;
}
