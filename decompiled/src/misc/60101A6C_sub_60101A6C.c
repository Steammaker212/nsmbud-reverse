/* sub_60101A6C
 * address: 0x60101A6C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60101A6C(int a1)
{
  float v1; // r3
  float v2; // r1
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_F32(a1, 116);
  v2 = FIELD_F32(a1, 9332);
  v4.x = FIELD_F32(a1, 9328);
  v4.y = v2;
  v4.z = v1;
  return EffectWrapper_update((EffectWrapper *)(a1 + 9784), 1066, &v4, 0, (Vec3 *)(a1 + 144));
}
