/* sub_6005A684
 * address: 0x6005A684   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6005A684(int a1)
{
  Vec3 v3[2]; // [sp+4h] [bp-1Ch] BYREF

  face_1_ref(a1, v3);
  v3[0].z = 4500.0;
  return EffectWrapper_update((EffectWrapper *)(a1 + 7356), 1197, v3, 0, 0);
}
