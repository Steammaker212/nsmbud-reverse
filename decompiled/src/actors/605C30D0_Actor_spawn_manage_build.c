/* Actor_spawn_manage_build
 * address: 0x605C30D0   size: 124   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Actor_spawn_manage_build(ActorBuildInfo *a1)
{
  Enemy *v2; // r4

  v2 = (Enemy *)operator_new(0x4D48u);
  Enemy__ctor(v2, a1);
  FIELD_U32(v2, 0x0) = (int)off_60C09EAC;
  sub_60448BFC(&v2[1]._._._._.id);
  memset(&v2[1]._._._._.field_48, 0, 88);
  v2[1]._._._._.heap = (int)off_60C0A124;
  memset(&v2[2]._._.collisionMgr[2812], 0, 2400);
  FIELD_U8(v2, 0x215) = 0;
  return v2;
}
