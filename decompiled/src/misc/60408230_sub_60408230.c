/* sub_60408230
 * address: 0x60408230   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60408230(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v4; // r0
  unsigned int v5; // r2
  unsigned int v6; // r1

  v4 = sub_6040E5B0(a2, a3, 1);
  if ( v4 == -1 )
    return 0;
  if ( (unsigned int)(v4 / 2) < 0x29 )
    a1 += v4 / 2;
  v5 = FIELD_U8(a1, 4);
  v6 = v5 >> 4;
  if ( (v4 & 1) == 0 )
    return v5 & 0xF;
  return v6;
}
