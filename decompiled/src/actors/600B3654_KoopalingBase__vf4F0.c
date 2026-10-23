/* KoopalingBase__vf4F0
 * address: 0x600B3654   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall KoopalingBase__vf4F0(signed int result)
{
  int v1; // r1
  Vec3 v2; // [sp+4h] [bp-14h] BYREF

  v1 = *(_DWORD *)(FIELD_U32(result, 7800) + 40);
  if ( v1 >= 0 )
  {
    v2.x = FIELD_F32(result, 108);
    v2.y = FIELD_F32(result, 112);
    v2.z = 4500.0;
    return EffectWrapper_update((EffectWrapper *)(result + 7908), v1, &v2, 0, 0);
  }
  return result;
}
