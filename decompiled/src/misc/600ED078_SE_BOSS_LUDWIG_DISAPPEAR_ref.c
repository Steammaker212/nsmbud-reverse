/* SE_BOSS_LUDWIG_DISAPPEAR_ref
 * address: 0x600ED078   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_LUDWIG_DISAPPEAR_ref(int a1)
{
  sub_608134CC(a1 + 6332, "SE_BOSS_LUDWIG_DISAPPEAR", FIELD_S16(a1, 6640), 0);
  return EffectData_create(1052, (Vec3 *)(a1 + 108), 0, 0);
}
