/* sub_603105F4
 * address: 0x603105F4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603105F4(int a1, int a2)
{
  int v3; // r4
  int v4; // r0

  v3 = 0;
  v4 = FIELD_U32(a2, 64);
  if ( v4 && KaniboTama__sub_60310F74(v4, 1) == 1 )
  {
    v3 = 1;
    FIELD_U8(a2, 110) |= 2u;
  }
  return v3;
}
