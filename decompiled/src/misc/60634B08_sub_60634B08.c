/* sub_60634B08
 * address: 0x60634B08   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60634B08(int a1)
{
  float v2; // r0
  int v3; // r0
  Vec3 v5; // [sp+8h] [bp-18h] BYREF

  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 3, 0, 0);
  v2 = FIELD_F32(a1, 108);
  v5.y = FIELD_F32(a1, 112);
  v5.x = v2;
  v5.z = 4500.0;
  if ( FIELD_S32(a1, 6784) >= 2 )
    v3 = 1079;
  else
    v3 = 1078;
  return EffectData_create(v3, &v5, 0, 0);
}
