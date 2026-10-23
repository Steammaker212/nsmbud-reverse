/* FireballBase_vf67
 * address: 0x60136318   size: 144   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall FireballBase_vf67(int a1)
{
  unsigned int v2; // r0
  Vec3 *v3; // r2
  LightSource *v4; // r4

  v2 = 0;
  if ( FIELD_F32(a1, 120) > 0.0 )
    v2 = 0x80000000;
  FIELD_U32(a1, 6252) = v2;
  EffectWrapper_update((EffectWrapper *)(a1 + 6260), 0, (Vec3 *)(a1 + 108), (Vec3i *)(a1 + 6248), 0);
  v3 = (Vec3 *)(a1 + 108);
  v4 = (LightSource *)(a1 + 6364);
  LightSource_update1(v4, 0, v3, 0, 0, 0, 0, 0, 0);
  return LightSource_unkUpdate3(v4);
}
