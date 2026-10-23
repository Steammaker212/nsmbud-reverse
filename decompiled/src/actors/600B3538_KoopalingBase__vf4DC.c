/* KoopalingBase__vf4DC
 * address: 0x600B3538   size: 116   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf4DC(int a1)
{
  int v1; // r1
  int *v2; // r4
  int v3; // r0
  int result; // r0
  Vec3 v5; // [sp+4h] [bp-14h] BYREF

  v5.x = FIELD_F32(a1, 108);
  v5.y = FIELD_F32(a1, 112);
  v5.z = 4500.0;
  v2 = (int *)(a1 + 7800);
  v1 = FIELD_U32(a1, 7800);
  v3 = FIELD_U32(v1, 32);
  if ( v3 >= 0 )
  {
    EffectData_create(v3, &v5, 0, 0);
    v1 = *v2;
  }
  result = FIELD_U32(v1, 36);
  if ( result >= 0 )
    return EffectData_create(result, &v5, 0, 0);
  return result;
}
