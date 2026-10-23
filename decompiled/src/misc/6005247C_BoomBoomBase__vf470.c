/* BoomBoomBase__vf470
 * address: 0x6005247C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall BoomBoomBase__vf470(int a1)
{
  float v2; // r1
  int v4; // r1
  int v5; // [sp+8h] [bp-20h] BYREF
  Vec3 v6[2]; // [sp+Ch] [bp-1Ch] BYREF

  v2 = FIELD_F32(a1, 112);
  v6[0].x = FIELD_F32(a1, 108);
  v6[0].y = v2;
  v6[0].z = 4500.0;
  ((void (__fastcall *)(int *, _DWORD, int, _DWORD))checkLiquidCollisions)(
    &v5,
    0,
    a1 + 108,
    FIELD_U8(a1, 86));
  if ( v5 )
    return EffectWrapper_update((EffectWrapper *)(a1 + 7252), 406, v6, 0, 0);
  if ( (FIELD_U32(a1, 5956) & 0xFF00) != 0x100 )
    v4 = 404;
  else
    v4 = 405;
  return EffectWrapper_update((EffectWrapper *)(a1 + 7252), v4, v6, 0, 0);
}
