/* sub_605D0580
 * address: 0x605D0580   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605D0580(ColliderBase *a1)
{
  a1[18].field_138 = 0;
  a1[18].field_13C = 0;
  a1[18].field_140 = 0;
  ColliderBase_setType(a1 + 18, 1);
  a1[18].field_150 = 0;
  FIELD_U32(a1 + (21) * 340, 0x9C) = (Vec3 *)30;
  return 7296;
}
