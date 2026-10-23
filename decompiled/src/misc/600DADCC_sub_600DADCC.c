/* sub_600DADCC
 * address: 0x600DADCC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600DADCC(signed int a1)
{
  Vec3 v2; // [sp+4h] [bp-14h] BYREF

  if ( (FIELD_U32(a1, 5956) & 0xFF00) != 0xB00 )
    return KoopalingBase__vf4F0(a1);
  v2.x = FIELD_F32(a1, 108);
  v2.y = FIELD_F32(a1, 112);
  v2.z = 4500.0;
  return EffectWrapper_update((EffectWrapper *)(a1 + 7908), 765, &v2, 0, 0);
}
