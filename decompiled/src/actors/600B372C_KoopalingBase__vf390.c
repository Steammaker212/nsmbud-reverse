/* KoopalingBase__vf390
 * address: 0x600B372C   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026918
// 
// Overridden by: None
int __fastcall KoopalingBase__vf390(int a1)
{
  int result; // r0
  Vec3 v3; // [sp+4h] [bp-14h] BYREF

  result = FIELD_U32(a1, 7800);
  if ( result )
  {
    result = FIELD_U32(result, 60);
    if ( result >= 0 )
    {
      v3.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      v3.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
      v3.z = 4500.0;
      return EffectData_create(result, &v3, 0, 0);
    }
  }
  return result;
}
