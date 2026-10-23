/* KoopalingBase__vf394
 * address: 0x600B36BC   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x6002691C
// 
// Overridden by: None
int __fastcall KoopalingBase__vf394(int result)
{
  int v1; // r1
  Vec3 v2; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_U32(result, 7800);
  if ( v1 )
  {
    if ( FIELD_S32(v1, 8) >= 0 )
    {
      v2.x = FIELD_F32(result, 108) + FIELD_F32(result, 572);
      v2.y = FIELD_F32(result, 112) + FIELD_F32(result, 576);
      v2.z = 4500.0;
      return EffectData_create(FIELD_U32(v1, 8), &v2, 0, 0);
    }
  }
  return result;
}
