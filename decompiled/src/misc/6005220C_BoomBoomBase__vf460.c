/* BoomBoomBase__vf460
 * address: 0x6005220C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomBase__vf460(int a1, float a2)
{
  float v3; // s2
  int v4; // r0
  int v6; // [sp+0h] [bp-18h] BYREF
  Vec3 v7; // [sp+4h] [bp-14h] BYREF

  v3 = FIELD_F32(a1, 112);
  v7.x = FIELD_F32(a1, 108);
  v7.y = v3 + a2;
  v7.z = 4500.0;
  ((void (__fastcall *)(int *, _DWORD, int, _DWORD))checkLiquidCollisions)(
    &v6,
    0,
    a1 + 108,
    FIELD_U8(a1, 86));
  if ( v6 )
  {
    v4 = 400;
  }
  else if ( (FIELD_U32(a1, 5956) & 0xFF00) != 0x100 )
  {
    v4 = 398;
  }
  else
  {
    v4 = 399;
  }
  return EffectData_create(v4, &v7, 0, 0);
}
