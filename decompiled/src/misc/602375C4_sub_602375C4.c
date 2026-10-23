/* sub_602375C4
 * address: 0x602375C4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602375C4(EffectData *this, int effectId, Vec3 *position, Vec3i *rotation, Vec3 *scale)
{
  EffectData_init(this);
  if ( EffectData_setEffectId(this, effectId) == 1 )
    return EffectData_update(this, position, rotation, scale);
  else
    return 0;
}
