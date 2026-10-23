/* sub_607AA784
 * address: 0x607AA784   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607AA784(int a1)
{
  EffectData *v2; // r5
  signed int result; // r0

  v2 = (EffectData *)(a1 + 13064);
  if ( sub_60235E50(a1 + 13064) == 1 )
    EffectData_update(v2, (Vec3 *)(a1 + 108), 0, 0);
  if ( sub_60235E50(a1 + 13128) == 1 )
    EffectData_update((EffectData *)(a1 + 13128), (Vec3 *)(a1 + 108), 0, 0);
  result = sub_60235E50(a1 + 13192);
  if ( result == 1 )
    return EffectData_update((EffectData *)(a1 + 13192), (Vec3 *)(a1 + 108), 0, 0);
  return result;
}
