/* sub_6034F0F0
 * address: 0x6034F0F0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6034F0F0(int a1, int a2)
{
  int v2; // r2

  v2 = FIELD_U32(a1, 6964);
  if ( v2 )
    ++FIELD_U32(v2, 6960);
  return Enemy__vf1AC((Enemy *)a1, a2);
}
