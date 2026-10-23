/* sub_602F2BE8
 * address: 0x602F2BE8   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F2BE8(int a1, Vec3 *a2)
{
  return EffectData_create(1106, a2, FIELD_U32(a1, 4), 0);
}
