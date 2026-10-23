/* sub_6027C688
 * address: 0x6027C688   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6027C688(int a1)
{
  float v1; // s0
  signed int result; // r0
  Vec3 v3; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_F32(a1, 112);
  v3.x = FIELD_F32(a1, 108);
  v3.y = v1 + 4.5;
  v3.z = 4500.0;
  switch ( FIELD_U8(a1, 5957) )
  {
    case 1:
      result = EffectWrapper_update((EffectWrapper *)(a1 + 8692), 614, &v3, 0, 0);
      break;
    case 2:
      result = EffectWrapper_update((EffectWrapper *)(a1 + 8692), 613, &v3, 0, 0);
      break;
    case 4:
      result = EffectWrapper_update((EffectWrapper *)(a1 + 8692), 612, &v3, 0, 0);
      break;
    case 0xB:
      result = EffectWrapper_update((EffectWrapper *)(a1 + 8692), 615, &v3, 0, 0);
      break;
    default:
      result = EffectWrapper_update((EffectWrapper *)(a1 + 8692), 110, &v3, 0, 0);
      break;
  }
  return result;
}
