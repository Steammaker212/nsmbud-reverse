/* sub_603B5D48
 * address: 0x603B5D48   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall sub_603B5D48(Enemy *a1)
{
  FIELD_U32(a1, 0x0)._._.position.z = FIELD_U32(a1, 0x0)._._.position.z + 500.0;
  return Enemy__vf26C(a1);
}
