/* sub_607C8884
 * address: 0x607C8884   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607C8884(int a1)
{
  Vec3 v3[2]; // [sp+Ch] [bp-1Ch] BYREF

  (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 1404))(a1, v3);
  return sub_60236F74(FIELD_S8(a1, 84), (EffectData *)(a1 + 13776), 310, v3, 0, 0);
}
