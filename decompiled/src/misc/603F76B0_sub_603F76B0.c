/* sub_603F76B0
 * address: 0x603F76B0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F76B0(int a1, int a2, int a3)
{
  unsigned int v4; // r5
  int v5; // r0
  unsigned int v6; // r1

  LOBYTE(v4) = 0;
  v5 = sub_6040E5B0(a2, a3, 0);
  if ( v5 >= 0 )
  {
    if ( (unsigned int)v5 < 0x7C )
      a1 += (unsigned int)v5 >> 1;
    v6 = FIELD_U8(a1, 123);
    v4 = v6 >> 4;
    if ( (v5 & 1) == 0 )
      LOBYTE(v4) = v6 & 0xF;
  }
  return (unsigned __int8)v4;
}
