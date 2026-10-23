/* sub_6014419C
 * address: 0x6014419C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6014419C(int a1)
{
  return EffectWrapper_update(
           (EffectWrapper *)(a1 + 6252),
           7,
           (Vec3 *)(a1 + 108),
           (Vec3i *)(a1 + 6240),
           (Vec3 *)(a1 + 144));
}
