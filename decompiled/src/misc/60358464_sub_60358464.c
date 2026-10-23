/* sub_60358464
 * address: 0x60358464   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60358464(int a1, int a2, int a3)
{
  _BYTE *v3; // r12

  FIELD_U32(a1, 6252) = 0;
  FIELD_U16(a1, 6432) = 256;
  v3 = *(_BYTE **)(a1 + 632);
  if ( v3 )
    *v3 |= 4u;
  return Enemy__collisionIceball((Enemy *)a1, a2, a3);
}
