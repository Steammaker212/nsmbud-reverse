/* sub_600E3CC4
 * address: 0x600E3CC4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600E3CC4(int a1)
{
  float v1; // r3
  Vec3 v3; // [sp+4h] [bp-14h] BYREF

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 6536) = 0;
  v1 = FIELD_F32(a1, 112);
  v3.x = FIELD_F32(a1, 108);
  v3.y = v1;
  v3.z = 4500.0;
  return sub_602375C4((EffectData *)(a1 + 7004), 317, &v3, 0, 0);
}
